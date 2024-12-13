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
  __int64 v13; // x1
  System_Object_array *v14; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v16; // x21
  signed __int64 v17; // x22
  ServantFaceIconComponent_o *v18; // x23
  unsigned __int64 max_length; // x8
  int32_t *v20; // x28
  IconLabelInfo_o *v21; // x24

  if ( (byte_4B33C5A & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_1BD3458(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_1BD3458(&DataManager_TypeInfo, v6);
    sub_1BD3458(&IconLabelInfo_TypeInfo, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v10);
    byte_4B33C5A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_23;
    v14 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F31630 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_23:
      sub_1BD36B4(ClearDeckInfo, v13);
    v16 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v17 = 0LL;
    while ( v17 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v17,
                                                                     (const MethodInfo_35C0AC0 *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v18 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v14 && (max_length = v14->max_length, v17 < (int)max_length) )
      {
        if ( v17 >= max_length )
          sub_1BD36BC(ClearDeckInfo, v13);
        v20 = (int32_t *)v14->m_Items[v17];
        v21 = (IconLabelInfo_o *)sub_1BD36A4(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v21, 0LL);
        if ( !v20 )
          goto LABEL_23;
        if ( !v21 )
          goto LABEL_23;
        IconLabelInfo__Set_38919304(v21, 2, v20[6], v20[6], 0, 0, 1, 0, 0LL);
        if ( !v16 )
          goto LABEL_23;
        ClearDeckInfo = (System_Collections_Generic_List_object__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       v16,
                                                                       v20[5],
                                                                       v20[8],
                                                                       0LL);
        if ( !v18 )
          goto LABEL_23;
        ServantFaceIconComponent__Set_38998480(
          v18,
          v20[5],
          v20[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v20[9],
          v21,
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
      ++v17;
      if ( !servantFaceIconList )
        goto LABEL_23;
    }
  }
}