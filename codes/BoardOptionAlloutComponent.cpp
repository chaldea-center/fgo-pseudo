void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v26; // x1
  WarBoardUiData_SaveData_array *v27; // x20
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x22
  ServantLimitImageMaster_o *v29; // x21
  __int64 v30; // x24
  unsigned __int64 v31; // x23
  ServantFaceIconComponent_o *v32; // x22
  unsigned __int64 max_length; // x8
  int32_t *v34; // x26
  IconLabelInfo_o *v35; // x23
  __int64 v36; // x0

  if ( (byte_42E8633 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, questId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&IconLabelInfo_TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v21, v22, v23);
    byte_42E8633 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_27;
    v27 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_305910C *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_27:
      sub_B5D69C(ClearDeckInfo, v26);
    v29 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v30 = 4LL;
    while ( 1 )
    {
      v31 = v30 - 4;
      if ( v30 - 4 >= servantFaceIconList->fields._size )
        break;
      if ( v31 >= (unsigned int)servantFaceIconList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v32 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v30);
      if ( v27 && (max_length = v27->max_length, (__int64)v31 < (int)max_length) )
      {
        if ( v31 >= max_length )
        {
          v36 = sub_B5D6C8(ClearDeckInfo);
          sub_B5D668(v36, 0LL);
        }
        v34 = (int32_t *)*((_QWORD *)&v27->obj.klass + v30);
        v35 = (IconLabelInfo_o *)sub_B5D694(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v35, 0LL);
        if ( !v34 )
          goto LABEL_27;
        if ( !v35 )
          goto LABEL_27;
        IconLabelInfo__Set_28463004(v35, 2, v34[6], v34[6], 0, 0, 1, 0, 0LL);
        if ( !v29 )
          goto LABEL_27;
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                        v29,
                                                                                        v34[5],
                                                                                        v34[8],
                                                                                        0LL);
        if ( !v32 )
          goto LABEL_27;
        ServantFaceIconComponent__Set_30846632(
          v32,
          v34[5],
          v34[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v34[9],
          v35,
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
        if ( !v32 )
          goto LABEL_27;
        ServantFaceIconComponent__NoMount(v32, 0LL);
      }
      servantFaceIconList = this->fields.servantFaceIconList;
      ++v30;
      if ( !servantFaceIconList )
        goto LABEL_27;
    }
  }
}