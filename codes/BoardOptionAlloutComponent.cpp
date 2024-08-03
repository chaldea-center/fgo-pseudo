void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  System_Object_array *v13; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v15; // x21
  signed __int64 v16; // x22
  __int64 v17; // x1
  __int64 v18; // x2
  ServantFaceIconComponent_o *v19; // x23
  unsigned __int64 max_length; // x8
  int32_t *v21; // x28
  IconLabelInfo_o *v22; // x24

  if ( (byte_49F8FE8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&IconLabelInfo_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v10);
    byte_49F8FE8 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_23;
    v13 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_23:
      sub_1B64324(ClearDeckInfo);
    v15 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v16 = 0LL;
    while ( v16 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v16,
                                                                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v19 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v13 && (max_length = v13->max_length, v16 < (int)max_length) )
      {
        if ( v16 >= max_length )
          sub_1B6432C(ClearDeckInfo, v17);
        v21 = (int32_t *)v13->m_Items[v16];
        v22 = (IconLabelInfo_o *)sub_1B64314(IconLabelInfo_TypeInfo, v17, v18);
        IconLabelInfo___ctor(v22, 0LL);
        if ( !v21 )
          goto LABEL_23;
        if ( !v22 )
          goto LABEL_23;
        IconLabelInfo__Set_37825360(v22, 2, v21[6], v21[6], 0, 0, 1, 0, 0LL);
        if ( !v15 )
          goto LABEL_23;
        ClearDeckInfo = (System_Collections_Generic_List_object__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       v15,
                                                                       v21[5],
                                                                       v21[8],
                                                                       0LL);
        if ( !v19 )
          goto LABEL_23;
        ServantFaceIconComponent__Set_37902064(
          v19,
          v21[5],
          v21[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v21[9],
          v22,
          0LL,
          2,
          0,
          0,
          0LL,
          0,
          0,
          0,
          0,
          0LL);
      }
      else
      {
        if ( !ClearDeckInfo )
          goto LABEL_23;
        ServantFaceIconComponent__NoMount((ServantFaceIconComponent_o *)ClearDeckInfo, 0LL);
      }
      servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
      ++v16;
      if ( !servantFaceIconList )
        goto LABEL_23;
    }
  }
}