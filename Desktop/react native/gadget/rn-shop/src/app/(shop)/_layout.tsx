import { Tabs } from 'expo-router'
import { FontAwesome } from '@expo/vector-icons'
import { SafeAreaView, StyleSheet } from 'react-native';

function TabBarIcon(props:{
   name: React.ComponentProps<typeof FontAwesome>['name'];
   color: string;
}){
   return <FontAwesome size={24} style={{marginBottom: -3}} {...props} />;
}
   

const TabsLayout=()=>{
 return (
 <SafeAreaView style={styles.safeArea}>
   <Tabs screenOptions={{
      tabBarActiveTintColor: '#3E80D3',
      tabBarInactiveTintColor: 'gray',
      tabBarLabelStyle: {fontSize: 16},
      tabBarStyle: {
         borderTopLeftRadius: 20,
         borderTopRightRadius: 20,
         paddingTop: 0,
         height: 70,
      },
      headerShown: false,
   }}>
      <Tabs.Screen name="index" options={{headerShown:false,
         tabBarIcon: (props) => <TabBarIcon name="shopping-cart" color={props.color} />,
         title: 'Shop'
      }} />
      <Tabs.Screen name="orders" options={{
         tabBarIcon: (props) => <TabBarIcon name="book" color={props.color} />,
         title: 'Orders'
      }} />
   </Tabs>
 </SafeAreaView>
 );
};
export default TabsLayout;

const styles = StyleSheet.create({
   safeArea:{
      flex: 1,
      
   },
});
