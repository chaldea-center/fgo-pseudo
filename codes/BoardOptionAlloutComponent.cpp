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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_object__o *ClearDeckInfo; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Object_array *v21; // x20
  System_Collections_Generic_List_object__o *servantFaceIconList; // x8
  ServantLimitImageMaster_o *v23; // x21
  signed __int64 v24; // x22
  __int64 v25; // x2
  __int64 v26; // x3
  ServantFaceIconComponent_o *v27; // x23
  unsigned __int64 max_length; // x8
  int32_t *v29; // x28
  IconLabelInfo_o *v30; // x24

  if ( (byte_4B12CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5, v6);
    sub_1BCA7E0(&DataManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&IconLabelInfo_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v15, v16);
    byte_4B12CD0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&questId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_object )
  {
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                   (UserEventAlloutBattleMaster_o *)Master_object,
                                                                   questId,
                                                                   0LL);
    if ( !ClearDeckInfo )
      goto LABEL_23;
    v21 = System_Collections_Generic_List_object___ToArray(
            ClearDeckInfo,
            (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v20);
    ClearDeckInfo = (System_Collections_Generic_List_object__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = (System_Collections_Generic_List_object__o *)this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_23:
      sub_1BCAA3C(ClearDeckInfo, v19);
    v23 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v24 = 0LL;
    while ( v24 < servantFaceIconList->fields._size )
    {
      ClearDeckInfo = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                     servantFaceIconList,
                                                                     v24,
                                                                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
      v27 = (ServantFaceIconComponent_o *)ClearDeckInfo;
      if ( v21 && (max_length = v21->max_length, v24 < (int)max_length) )
      {
        if ( v24 >= max_length )
          sub_1BCAA44(ClearDeckInfo, v19);
        v29 = (int32_t *)v21->m_Items[v24];
        v30 = (IconLabelInfo_o *)sub_1BCAA2C(IconLabelInfo_TypeInfo, v19, v25, v26);
        IconLabelInfo___ctor(v30, 0LL);
        if ( !v29 )
          goto LABEL_23;
        if ( !v30 )
          goto LABEL_23;
        IconLabelInfo__Set_38850420(v30, 2, v29[6], v29[6], 0, 0, 1, 0, 0LL);
        if ( !v23 )
          goto LABEL_23;
        ClearDeckInfo = (System_Collections_Generic_List_object__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                       v23,
                                                                       v29[5],
                                                                       v29[8],
                                                                       0LL);
        if ( !v27 )
          goto LABEL_23;
        ServantFaceIconComponent__Set_38928428(
          v27,
          v29[5],
          v29[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v29[9],
          v30,
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
      ++v24;
      if ( !servantFaceIconList )
        goto LABEL_23;
    }
  }
}