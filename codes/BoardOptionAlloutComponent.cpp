void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v7; // x1
  System_Object_array *v8; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v10; // x21
  signed __int64 v11; // x22
  ServantFaceIconComponent_o *v12; // x23
  unsigned __int64 max_length; // x8
  int32_t *v14; // x28
  IconLabelInfo_o *v15; // x24

  if ( (byte_4BD8FA4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&IconLabelInfo_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    byte_4BD8FA4 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_23;
    v8 = System_Collections_Generic_List_object___ToArray(
           ClearDeckInfo,
           (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_23:
      sub_1C22094(ClearDeckInfo, v7);
    v10 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v11 = 0LL;
    while ( v11 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v11,
                                                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v12 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v8 && (max_length = v8->max_length, v11 < (int)max_length) )
      {
        if ( v11 >= max_length )
          sub_1C2209C(ClearDeckInfo, v7);
        v14 = (int32_t *)v8->m_Items[v11];
        v15 = (IconLabelInfo_o *)sub_1C22084(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v15, 0LL);
        if ( !v14 )
          goto LABEL_23;
        if ( !v15 )
          goto LABEL_23;
        IconLabelInfo__Set_39381772(v15, 2, v14[6], v14[6], 0, 0, 1, 0, 0LL);
        if ( !v10 )
          goto LABEL_23;
        ClearDeckInfo = (System_Collections_Generic_List_object__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       v10,
                                                                       v14[5],
                                                                       v14[8],
                                                                       0LL);
        if ( !v12 )
          goto LABEL_23;
        ServantFaceIconComponent__Set_39461076(
          v12,
          v14[5],
          v14[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v14[9],
          v15,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL,
          0LL);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_23;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v11;
      if ( !servantFaceIconList )
        goto LABEL_23;
    }
  }
}