void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4352CD5 & 1) == 0 )
  {
    sub_B70694(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4352CD5 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4352CD4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_4352CD4 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.equipList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v6; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x26
  WarQuestSelectionMaster_o *v8; // x20
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v9; // x23
  ServantBonusFilterEquipComponent___c_c *v10; // x8
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__4_0; // x19
  Il2CppObject *v13; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  int size; // w8
  int32_t v22; // w21
  unsigned int v23; // w25
  float v24; // s8
  struct UnityEngine_GameObject_o *prefab; // x19
  TitleInfoControl_EventEndTimeInfo_o *v26; // x20
  UnityEngine_GameObject_o *v27; // x27
  float v28; // s9
  const MethodInfo *v29; // x4
  int v30; // w8
  EventMissionProgressRequest_Argument_ProgressData_o *v31; // x19
  ServantEntity_o *v32; // x23
  __int64 v33; // x19
  __int64 v34; // x21
  SkillLvMaster_o *v35; // x20
  int32_t v36; // w21
  int64_t UserId; // x2
  __int64 v38; // x8
  _QWORD *v39; // x21
  unsigned __int64 v40; // x24
  ServantSkillEntity_o *v41; // x26
  SkillLvEntity_o *v42; // x28
  __int64 v43; // x19
  __int64 v44; // x20
  int32_t v45; // w19
  EventUpValInfo_o *v46; // x20
  SkillInfo_o *v47; // x19
  EventUpValInfo_array *v48; // x19
  const MethodInfo *v49; // x5
  ServantBonusFilterEquipComponent_c *v50; // x0
  ServantBonusFilterSelectMenu_c *v51; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v53; // x0
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  System_String_o *v56; // x0
  __int64 v58; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v59; // [xsp+10h] [xbp-D0h]
  ServantBonusFilterEquipComponent_o *v60; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v61; // [xsp+20h] [xbp-C0h]
  int idx; // [xsp+2Ch] [xbp-B4h]
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *v63; // [xsp+30h] [xbp-B0h]
  ServantSkillMaster_o *v64; // [xsp+38h] [xbp-A8h]
  ServantBonusFilterEquipListViewObject_o *v65; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // [xsp+48h] [xbp-98h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // [xsp+50h] [xbp-90h]
  int32_t v68; // [xsp+58h] [xbp-88h]
  char v69; // [xsp+5Ch] [xbp-84h]
  EventUpValSetupInfo_o *setupInfo; // [xsp+60h] [xbp-80h]
  SkillLvMaster_o *v71; // [xsp+68h] [xbp-78h]
  int32_t j; // [xsp+70h] [xbp-70h] BYREF
  int i; // [xsp+74h] [xbp-6Ch] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v75; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v76; // 0:x0.16

  if ( (byte_4352CCE & 1) == 0 )
  {
    sub_B70694(&Method_System_Comparison_EventBonusFilterEntity___ctor__);
    sub_B70694(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_B70694(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B70694(&EventUpValInfo_TypeInfo);
    sub_B70694(&EventUpValSetupInfo_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_B70694(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B70694(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_B70694(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&SkillInfo_TypeInfo);
    sub_B70694(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_B70694(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_B70694(&StringLiteral_2901/*"BonusFilterEquipId"*/);
    sub_B70694(&StringLiteral_2903/*"BonusFilterGroupId"*/);
    byte_4352CCE = 1;
  }
  eventUpVallInfo = 0LL;
  i = 0;
  j = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_B70764(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_23742548(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v64 = (ServantSkillMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                  (DataManager_o *)Instance,
                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  v8 = DataManager__GetMasterData_WarQuestSelectionMaster_(
         (DataManager_o *)Instance,
         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_84;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_84;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0LL);
  v9 = (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)Instance;
  v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
  if ( (BYTE3(ServantBonusFilterEquipComponent___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  v71 = (SkillLvMaster_o *)v8;
  _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B70764(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__4_0,
      v13,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      (const MethodInfo_2B05B38 *)Method_System_Comparison_EventBonusFilterEntity___ctor__);
    v14 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v14->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v14->__9__4_0,
      (System_Int32_array **)_9__4_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v9 )
    goto LABEL_84;
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    v9,
    (System_Comparison_T__o *)_9__4_0,
    (const MethodInfo_3027764 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v67,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v66,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  size = v9->fields._size;
  if ( size >= 1 )
  {
    v22 = 0;
    v23 = 0;
    v24 = 0.0;
    idx = 0;
    v60 = this;
    v61 = eventIdList;
    v59 = MasterData_WarQuestSelectionMaster;
    v63 = v9;
    while ( 1 )
    {
      if ( size <= v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
      prefab = this->fields.prefab;
      v26 = v9->fields._items->m_Items[v23];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)prefab,
                                          (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_32503456(v27, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, v24, 0LL);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v27 )
        break;
      v28 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                   v27,
                   (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v26 )
        break;
      v30 = *(_DWORD *)&v26->fields.is_reward;
      v31 = (EventMissionProgressRequest_Argument_ProgressData_o *)Instance;
      v24 = v24 - v28;
      if ( v30 == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_27003128(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v22,
          eventIdList,
          v26->fields.end_time,
          v29);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
          v31,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
        ++v22;
      }
      else if ( v30 == 1 )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          break;
        v65 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        v68 = v22;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     MasterData_WarQuestSelectionMaster,
                     v26->fields.end_time,
                     (const MethodInfo_21C0440 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v32 = (ServantEntity_o *)Instance;
        v34 = *((_QWORD *)Instance + 2);
        v33 = *((_QWORD *)Instance + 3);
        v35 = v71;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v75.fields.currentCryptoKey = v34;
        *(_QWORD *)&v75.fields.fakeValue = v33;
        v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v75, 0LL);
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        UserId = NetworkManager__get_UserId(0LL);
        Instance = v64;
        if ( !v64 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(v64, v36, UserId, 1, 1, -1, -1, -1LL, 0LL);
        if ( !Instance )
          break;
        v38 = *((_QWORD *)Instance + 3);
        v39 = Instance;
        if ( (int)v38 < 1 )
          goto LABEL_88;
        v40 = 0LL;
        v69 = 0;
        do
        {
          if ( v40 >= (unsigned int)v38 )
          {
            v58 = sub_B70798(Instance);
            sub_B70738(v58, 0LL);
          }
          v41 = (ServantSkillEntity_o *)v39[v40 + 4];
          if ( v41 )
          {
            if ( !v35 )
              goto LABEL_84;
            Instance = SkillLvMaster__GetEntity(v35, v41->fields.skillId, 1, 0LL);
            if ( Instance && !v41->fields.condLimitCount )
            {
              v42 = (SkillLvEntity_o *)Instance;
              v44 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
              v43 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
              if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              }
              *(_QWORD *)&v76.fields.currentCryptoKey = v44;
              *(_QWORD *)&v76.fields.fakeValue = v43;
              v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45179984(v76, 0LL);
              v46 = (EventUpValInfo_o *)sub_B70764(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v46, setupInfo, v45, 1, 1, 0, 0LL);
              eventUpVallInfo = v46;
              Instance = (void *)SkillLvEntity__getEventUpVal_26500472(v42, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              v35 = v71;
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v67;
                if ( !v67 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v67,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)eventUpVallInfo,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_EventUpValInfo__Add__);
                v47 = (SkillInfo_o *)sub_B70764(SkillInfo_TypeInfo);
                SkillInfo___ctor(v47, 0LL);
                if ( !v47 )
                  goto LABEL_84;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v41,
                  &v47->fields.title,
                  &v47->fields.explanation,
                  0LL);
                Instance = v66;
                v47->fields.id = v42->fields.skillId;
                if ( !v66 )
                  goto LABEL_84;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v66,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v47,
                  (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_SkillInfo__Add__);
                v69 = 1;
              }
            }
          }
          LODWORD(v38) = *((_DWORD *)v39 + 6);
          ++v40;
        }
        while ( (__int64)v40 < (int)v38 );
        this = v60;
        eventIdList = v61;
        MasterData_WarQuestSelectionMaster = v59;
        if ( (v69 & 1) != 0 )
        {
          Instance = v67;
          if ( !v67 )
            break;
          v48 = (EventUpValInfo_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v67,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          v22 = v68;
          Instance = v66;
          if ( !v66 )
            break;
          Instance = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                       (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v66,
                       (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v65 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(v65, idx, v32, v48, (SkillInfo_array *)Instance, v49);
          Instance = v60->fields.equipList;
          if ( !Instance )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v65,
            (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
          v9 = v63;
          ++idx;
        }
        else
        {
LABEL_88:
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)v27, 0LL);
          v9 = v63;
          v22 = v68;
          v50 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( (BYTE3(ServantBonusFilterEquipComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v50 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v24 = v24 + v50->static_fields->POS_Y_INTERVAL;
        }
      }
      size = v9->fields._size;
      if ( (int)++v23 >= size )
        goto LABEL_76;
    }
LABEL_84:
    sub_B7076C(Instance, v6);
  }
  v22 = 0;
  idx = 0;
LABEL_76:
  v51 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( (BYTE3(ServantBonusFilterSelectMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  }
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v51);
  for ( i = idx; i < MaxIndividualFilter; ++i )
  {
    v53 = System_Int32__ToString((int32_t)&i, 0LL);
    v54 = System_String__Concat_44758168((System_String_o *)StringLiteral_2901/*"BonusFilterEquipId"*/, v53, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v54, 0LL);
  }
  for ( j = v22; j < MaxIndividualFilter; ++j )
  {
    v55 = System_Int32__ToString((int32_t)&j, 0LL);
    v56 = System_String__Concat_44758168((System_String_o *)StringLiteral_2903/*"BonusFilterGroupId"*/, v55, 0LL);
    UnityEngine_PlayerPrefs__DeleteKey(v56, 0LL);
  }
  return idx + v22;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  int v5; // w19
  int v6; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352CD2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4352CD2 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B7076C(0LL, v4);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v9.fields.current,
           v4) )
    {
      v5 = 1;
      v6 = 3;
      goto LABEL_10;
    }
  }
  v5 = 0;
  v6 = 1;
LABEL_10:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5 & ((unsigned int)(v6 + 1) >> 2);
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352CD1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4352CD1 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields.current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4352CD0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4352CD0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B7076C(0LL, isEnable);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v9,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields.current )
      sub_B7076C(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v9.fields.current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352CCF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4352CCF = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields.current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4352CD3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4352CD3 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_B7076C(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)equipList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields.current )
      sub_B7076C(0LL, v4);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields.current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0

  if ( (byte_434F214 & 1) == 0 )
  {
    sub_B70694(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_434F214 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_B70630(static_fields);
}


void __fastcall ServantBonusFilterEquipComponent___c___ctor(
        ServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent___c___CreateList_b__4_0(
        ServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_B7076C(this, a);
  return b->fields.priority - a->fields.priority;
}