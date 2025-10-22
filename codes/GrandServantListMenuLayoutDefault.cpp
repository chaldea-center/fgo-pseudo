void GrandServantListMenuLayoutDefault___ctor(GrandServantListMenuLayoutDefault_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListMenuLayoutDefault__SetupItemInfo(
        GrandServantListMenuLayoutDefault_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x20
  void *EntityDefinitely; // x0
  UILabel_o *itemNumLabel; // x19
  int32_t v7; // w20

  if ( (byte_4C51B25 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C51B25 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_UserItemMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C50AE2 )
  {
    sub_1C3E564(&NetworkManager_TypeInfo);
    byte_4C50AE2 = 1;
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
  v7 = *((_DWORD *)EntityDefinitely + 7);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  EntityDefinitely = LocalizationManager__GetNumberFormat(v7, 0);
  if ( !itemNumLabel )
LABEL_17:
    sub_1C3E7C0(EntityDefinitely, v3);
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