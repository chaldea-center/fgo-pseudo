void GrandServantListMenuLayoutDefault___ctor(GrandServantListMenuLayoutDefault_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayoutDefault__SetupItemInfo(
        GrandServantListMenuLayoutDefault_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0
  __int64 v8; // x2
  UILabel_o *itemNumLabel; // x19
  int32_t v10; // w20

  if ( (byte_596B346 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_596B346 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5969EF2 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    byte_5969EF2 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    EntityDefinitely = NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_17;
  EntityDefinitely = UserItemMaster__GetEntityDefinitely(
                       (UserItemMaster_o *)Master_object,
                       *(_QWORD *)(*((_QWORD *)EntityDefinitely + 23) + 64LL),
                       this->fields.itemId,
                       0);
  if ( !EntityDefinitely )
    goto LABEL_17;
  itemNumLabel = this->fields.itemNumLabel;
  v10 = *((_DWORD *)EntityDefinitely + 7);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v8);
  EntityDefinitely = LocalizationManager__GetNumberFormat(v10, 0);
  if ( !itemNumLabel )
LABEL_17:
    sub_2213CDC(EntityDefinitely, v4);
  UILabel__set_text(itemNumLabel, (System_String_o *)EntityDefinitely, 0);
}


void GrandServantListMenuLayoutDefault__UpdateView(
        GrandServantListMenuLayoutDefault_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  GrandServantListMenuLayout__UpdateView((GrandServantListMenuLayout_o *)this, grandServantListData, method);
  GrandServantListMenuLayoutDefault__SetupItemInfo(this, v4);
}