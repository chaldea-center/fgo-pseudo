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
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__o *ClearDeckInfo; // x0
  WarBoardUiData_SaveData_array *v13; // x20
  WarQuestSelectionMaster_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x22
  ServantLimitImageMaster_o *v20; // x21
  __int64 v21; // x24
  unsigned __int64 v22; // x23
  ServantFaceIconComponent_o *v23; // x22
  unsigned __int64 max_length; // x8
  int32_t *v25; // x26
  IconLabelInfo_o *v26; // x23
  int32_t ServantLimitCountSealAfter; // w0

  if ( (byte_40FB0C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_B16FFC(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&IconLabelInfo_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v10);
    byte_40FB0C8 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = UserEventAlloutBattleMaster__GetClearDeckInfo(Master_WarQuestSelectionMaster, questId, 0LL);
    if ( !ClearDeckInfo )
      goto LABEL_27;
    v13 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ClearDeckInfo,
            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_27:
      sub_B170D4();
    v20 = (ServantLimitImageMaster_o *)v14;
    v21 = 4LL;
    while ( 1 )
    {
      v22 = v21 - 4;
      if ( v21 - 4 >= servantFaceIconList->fields._size )
        break;
      if ( v22 >= (unsigned int)servantFaceIconList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v23 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v21);
      if ( v13 && (max_length = v13->max_length, (__int64)v22 < (int)max_length) )
      {
        if ( v22 >= max_length )
        {
          sub_B17100(v14, v15, v16);
          sub_B170A0();
        }
        v25 = (int32_t *)*((_QWORD *)&v13->obj.klass + v21);
        v26 = (IconLabelInfo_o *)sub_B170CC(IconLabelInfo_TypeInfo, v15, v16, v17, v18);
        IconLabelInfo___ctor(v26, 0LL);
        if ( !v25 )
          goto LABEL_27;
        if ( !v26 )
          goto LABEL_27;
        IconLabelInfo__Set_28888132(v26, 2, v25[6], v25[6], 0, 0, 1, 0, 0LL);
        if ( !v20 )
          goto LABEL_27;
        ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(v20, v25[5], v25[8], 0LL);
        if ( !v23 )
          goto LABEL_27;
        ServantFaceIconComponent__Set_30702780(
          v23,
          v25[5],
          v25[7],
          ServantLimitCountSealAfter - (ServantLimitCountSealAfter < 11),
          v25[9],
          v26,
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
        if ( !v23 )
          goto LABEL_27;
        ServantFaceIconComponent__NoMount(v23, 0LL);
      }
      servantFaceIconList = this->fields.servantFaceIconList;
      ++v21;
      if ( !servantFaceIconList )
        goto LABEL_27;
    }
  }
}