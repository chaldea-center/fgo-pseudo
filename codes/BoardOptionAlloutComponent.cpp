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
  WarBoardUiData_SaveData_array *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x22
  ServantLimitImageMaster_o *v17; // x21
  __int64 v18; // x24
  unsigned __int64 v19; // x23
  ServantFaceIconComponent_o *v20; // x22
  unsigned __int64 max_length; // x8
  int32_t *v22; // x26
  IconLabelInfo_o *v23; // x23
  __int64 v24; // x0

  if ( (byte_4214BB7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ServantLimitImageMaster___, *(_QWORD *)&questId);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&IconLabelInfo_TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__, v10);
    byte_4214BB7 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_27;
    v13 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
            ClearDeckInfo,
            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_27:
      sub_B0D97C(ClearDeckInfo);
    v17 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v18 = 4LL;
    while ( 1 )
    {
      v19 = v18 - 4;
      if ( v18 - 4 >= servantFaceIconList->fields._size )
        break;
      if ( v19 >= (unsigned int)servantFaceIconList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v20 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v18);
      if ( v13 && (max_length = v13->max_length, (__int64)v19 < (int)max_length) )
      {
        if ( v19 >= max_length )
        {
          v24 = sub_B0D9A8(ClearDeckInfo);
          sub_B0D948(v24, 0LL);
        }
        v22 = (int32_t *)*((_QWORD *)&v13->obj.klass + v18);
        v23 = (IconLabelInfo_o *)sub_B0D974(IconLabelInfo_TypeInfo, v14, v15);
        IconLabelInfo___ctor(v23, 0LL);
        if ( !v22 )
          goto LABEL_27;
        if ( !v23 )
          goto LABEL_27;
        IconLabelInfo__Set_26821248(v23, 2, v22[6], v22[6], 0, 0, 1, 0, 0LL);
        if ( !v17 )
          goto LABEL_27;
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                        v17,
                                                                                        v22[5],
                                                                                        v22[8],
                                                                                        0LL);
        if ( !v20 )
          goto LABEL_27;
        ServantFaceIconComponent__Set_29623744(
          v20,
          v22[5],
          v22[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v22[9],
          v23,
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
        if ( !v20 )
          goto LABEL_27;
        ServantFaceIconComponent__NoMount(v20, 0LL);
      }
      servantFaceIconList = this->fields.servantFaceIconList;
      ++v18;
      if ( !servantFaceIconList )
        goto LABEL_27;
    }
  }
}