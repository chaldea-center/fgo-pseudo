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
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v13; // x1
  WarBoardUiData_SaveData_array *v14; // x20
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x22
  ServantLimitImageMaster_o *v16; // x21
  __int64 v17; // x24
  unsigned __int64 v18; // x23
  ServantFaceIconComponent_o *v19; // x22
  unsigned __int64 max_length; // x8
  int32_t *v21; // x26
  IconLabelInfo_o *v22; // x23
  __int64 v23; // x0

  if ( (byte_4187D99 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_B2C35C(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_B2C35C(&DataManager_TypeInfo, v6);
    sub_B2C35C(&IconLabelInfo_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v10);
    byte_4187D99 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_27;
    v14 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_27:
      sub_B2C434(ClearDeckInfo, v13);
    v16 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v17 = 4LL;
    while ( 1 )
    {
      v18 = v17 - 4;
      if ( v17 - 4 >= servantFaceIconList->fields._size )
        break;
      if ( v18 >= (unsigned int)servantFaceIconList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v19 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v17);
      if ( v14 && (max_length = v14->max_length, (__int64)v18 < (int)max_length) )
      {
        if ( v18 >= max_length )
        {
          v23 = sub_B2C460(ClearDeckInfo);
          sub_B2C400(v23, 0LL);
        }
        v21 = (int32_t *)*((_QWORD *)&v14->obj.klass + v17);
        v22 = (IconLabelInfo_o *)sub_B2C42C(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v22, 0LL);
        if ( !v21 )
          goto LABEL_27;
        if ( !v22 )
          goto LABEL_27;
        IconLabelInfo__Set_27362128(v22, 2, v21[6], v21[6], 0, 0, 1, 0, 0LL);
        if ( !v16 )
          goto LABEL_27;
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                        v16,
                                                                                        v21[5],
                                                                                        v21[8],
                                                                                        0LL);
        if ( !v19 )
          goto LABEL_27;
        ServantFaceIconComponent__Set_30790452(
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
        if ( !v19 )
          goto LABEL_27;
        ServantFaceIconComponent__NoMount(v19, 0LL);
      }
      servantFaceIconList = this->fields.servantFaceIconList;
      ++v17;
      if ( !servantFaceIconList )
        goto LABEL_27;
    }
  }
}