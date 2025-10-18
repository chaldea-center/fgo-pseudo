void GrandServantListMenuLayoutDefault___ctor(GrandServantListMenuLayoutDefault_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayoutDefault__SetupItemInfo(
        GrandServantListMenuLayoutDefault_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0
  UILabel_o *itemNumLabel; // x19
  int32_t v6; // w20

  if ( (byte_4C3DDA5 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3DDA5 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  EntityDefinitely = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
  v6 = *((_DWORD *)EntityDefinitely + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__GetNumberFormat(v6, 0);
  if ( !itemNumLabel )
LABEL_17:
    sub_1C372B4(EntityDefinitely);
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