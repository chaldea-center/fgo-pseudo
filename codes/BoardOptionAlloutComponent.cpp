void __fastcall BoardOptionAlloutComponent___ctor(BoardOptionAlloutComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BoardOptionAlloutComponent__SetIcon(
        BoardOptionAlloutComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  UserEventAlloutBattleMaster_o *Master_WarQuestSelectionMaster; // x0
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *ClearDeckInfo; // x0
  __int64 v7; // x1
  WarBoardUiData_SaveData_array *v8; // x20
  struct System_Collections_Generic_List_ServantFaceIconComponent__o *servantFaceIconList; // x22
  ServantLimitImageMaster_o *v10; // x21
  __int64 v11; // x24
  unsigned __int64 v12; // x23
  ServantFaceIconComponent_o *v13; // x22
  unsigned __int64 max_length; // x8
  int32_t *v15; // x26
  IconLabelInfo_o *v16; // x23
  __int64 v17; // x0

  if ( (byte_438ADF3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&IconLabelInfo_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ServantFaceIconComponent__get_Item__);
    byte_438ADF3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserEventAlloutBattleMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserEventAlloutBattleMaster___);
  if ( Master_WarQuestSelectionMaster )
  {
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)UserEventAlloutBattleMaster__GetClearDeckInfo(
                                                                                    Master_WarQuestSelectionMaster,
                                                                                    questId,
                                                                                    0LL);
    if ( !ClearDeckInfo )
      goto LABEL_27;
    v8 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           ClearDeckInfo,
           (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserEventAlloutBattleMaster_ClearSvtInfo__ToArray__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    servantFaceIconList = this->fields.servantFaceIconList;
    if ( !servantFaceIconList )
LABEL_27:
      sub_B7769C(ClearDeckInfo, v7);
    v10 = (ServantLimitImageMaster_o *)ClearDeckInfo;
    v11 = 4LL;
    while ( 1 )
    {
      v12 = v11 - 4;
      if ( v11 - 4 >= servantFaceIconList->fields._size )
        break;
      if ( v12 >= (unsigned int)servantFaceIconList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v13 = (ServantFaceIconComponent_o *)*((_QWORD *)&servantFaceIconList->fields._items->obj.klass + v11);
      if ( v8 && (max_length = v8->max_length, (__int64)v12 < (int)max_length) )
      {
        if ( v12 >= max_length )
        {
          v17 = sub_B776C8(ClearDeckInfo);
          sub_B77668(v17, 0LL);
        }
        v15 = (int32_t *)*((_QWORD *)&v8->obj.klass + v11);
        v16 = (IconLabelInfo_o *)sub_B77694(IconLabelInfo_TypeInfo);
        IconLabelInfo___ctor(v16, 0LL);
        if ( !v15 )
          goto LABEL_27;
        if ( !v16 )
          goto LABEL_27;
        IconLabelInfo__Set_28141596(v16, 2, v15[6], v15[6], 0, 0, 1, 0, 0LL);
        if ( !v10 )
          goto LABEL_27;
        ClearDeckInfo = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                                                        v10,
                                                                                        v15[5],
                                                                                        v15[8],
                                                                                        0LL);
        if ( !v13 )
          goto LABEL_27;
        ServantFaceIconComponent__Set_31755472(
          v13,
          v15[5],
          v15[7],
          (_DWORD)ClearDeckInfo - ((int)ClearDeckInfo < 11),
          v15[9],
          v16,
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
        if ( !v13 )
          goto LABEL_27;
        ServantFaceIconComponent__NoMount(v13, 0LL);
      }
      servantFaceIconList = this->fields.servantFaceIconList;
      ++v11;
      if ( !servantFaceIconList )
        goto LABEL_27;
    }
  }
}