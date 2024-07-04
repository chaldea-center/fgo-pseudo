void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E5B12 & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E5B12 = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_B70480;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__Awake(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__CheckSerializeFieldAssertion(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MissionNaviTransitionConfirmDialog__EndOpen(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__GetClosedMessageText(
        MapControl_QuestInfo_o *questInfo,
        QuestEntity_o *questEnt,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *PrioredName; // x0
  System_String_o *v25; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v28; // x21
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppObject *v40; // x22
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  int32_t v44; // w2
  int32_t v45; // w3
  Il2CppObject *v46; // x22
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  int32_t v50; // w2
  int32_t v51; // w3
  Il2CppObject *v52; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v54; // x19
  __int64 v56; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v62; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v64; // 0:x0.8
  System_DateTime_o v65; // 0:x0.8
  System_DateTime_o v66; // 0:x0.8
  System_DateTime_o v67; // 0:x0.8

  if ( (byte_48E5B10 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questEnt);
    sub_1B00CCC(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_1B00CCC(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1B00CCC(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_1B00CCC(&System_DateTime_TypeInfo, v10);
    sub_1B00CCC(&int_TypeInfo, v11);
    sub_1B00CCC(&long_TypeInfo, v12);
    sub_1B00CCC(&NetworkManager_TypeInfo, v13);
    sub_1B00CCC(&object___TypeInfo, v14);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1B00CCC(&StringLiteral_1/*""*/, v17);
    byte_48E5B10 = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v62 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v62,
                      WarID_ByQuestID,
                      (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v62;
              if ( !v62 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v62, 0LL);
LABEL_12:
              v25 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v21, v22, v23);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_37177692(OpenedAt, 0LL).fields._dateData;
              v28 = (System_Object_array *)sub_1B00D74(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v64.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v64, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v29, v30, v31);
              if ( !v28 )
                goto LABEL_47;
              v34 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B00E08(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v28->max_length )
                goto LABEL_48;
              v28->m_Items[0] = v34;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)v28->m_Items, (int32_t)v34, v32, v33);
              v65.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v65, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v35, v36, v37);
              v40 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B00E08(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 1 )
                goto LABEL_48;
              v28->m_Items[1] = v40;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->m_Items[1], (int32_t)v40, v38, v39);
              v66.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v66, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v41, v42, v43);
              v46 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B00E08(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v28->max_length <= 2 )
                goto LABEL_48;
              v28->m_Items[2] = v46;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->m_Items[2], (int32_t)v46, v44, v45);
              v67.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v67, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v47, v48, v49);
              v52 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B00E08(Instance, v28->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v56 = sub_1B00F4C(Instance);
                  sub_1B00DF4(v56, 0LL);
                }
              }
              if ( v28->max_length <= 3 )
LABEL_48:
                sub_1B00F30(Instance, v20);
              v28->m_Items[3] = v52;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->m_Items[3], (int32_t)v52, v50, v51);
              v25 = System_String__Format_60340256(monitor, v28, 0LL);
LABEL_39:
              monitor = v25;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v54 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v54->fields.overlayClosedMessage;
              }
              break;
            default:
              goto LABEL_40;
          }
          return monitor;
        }
      }
    }
LABEL_47:
    sub_1B00F28(Instance, v20);
  }
  return monitor;
}


void __fastcall MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0

  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  if ( !limitedMissionItemDraw )
    sub_1B00F28(0LL, method);
  MasterMissionListViewItemDraw__OnChangeAlphaAnim(
    limitedMissionItemDraw,
    this->fields.missionListViewItem,
    1,
    this->fields.missionListViewManager,
    0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__OnClickClose(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_48E5B0E & 1) == 0 )
  {
    sub_1B00CCC(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__, method);
    byte_48E5B0E = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B00CE4(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B00F28(v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeFunc->fields.m_target)(
      closeFunc->fields.original_method_info,
      *(_QWORD *)&closeFunc->fields.extra_arg);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__Open(
        MissionNaviTransitionConfirmDialog_o *this,
        MissionListViewItem_o *missionItem,
        MissionListViewManager_o *listViewManager,
        int32_t missionBoardType,
        System_Collections_Generic_List_MissionNaviTransitionBoardItem__o *boardItemList,
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeDelegate,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UILabel_o *titleLabel; // x24
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v32; // x1
  UILabel_o *choiceMessageLabel; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass *v36; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v38; // x10
  int32_t v39; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  MissionListViewManager_o *v45; // x10
  int32_t v46; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x23
  UnityEngine_Object_o *v48; // x21
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v51; // x22
  UnityEngine_Transform_o *v52; // x21
  float v53; // s8
  UnityEngine_Transform_o *v54; // x23
  UnityEngine_Transform_o *v55; // x23
  float v56; // s9
  float v57; // s8
  _BOOL8 v58; // x0
  __int64 v59; // x1
  Il2CppObject *current; // x20
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v64; // x1
  struct MapControl_SpotInfo_o *SpotInfo_k__BackingField; // x8
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x23
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v71; // x0
  __int64 v72; // x1
  UnityEngine_GameObject_o *v73; // x23
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v75; // x1
  UnityEngine_Transform_o *v76; // x0
  __int64 v77; // x1
  float v78; // s8
  __int64 v79; // x0
  __int64 v80; // x1
  UnityEngine_Transform_o *v81; // x20
  __int64 v82; // x0
  __int64 v83; // x1
  UnityEngine_Transform_o *v84; // x20
  UILabel_o *closeBtnLabel; // x20
  UILabel_o *warningMessageLabel; // x20
  System_Action_o *v87; // x20
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_48E5B0D & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, missionItem);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__, v15);
    sub_1B00CCC(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__, v17);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v18);
    sub_1B00CCC(&MasterMissionListViewItem_TypeInfo, v19);
    sub_1B00CCC(&MasterMissionListViewManager_TypeInfo, v20);
    sub_1B00CCC(&Method_MissionNaviTransitionConfirmDialog_EndOpen__, v21);
    sub_1B00CCC(&Method_UnityEngine_Object_Instantiate_GameObject____74661840, v22);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v23);
    sub_1B00CCC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v24);
    sub_1B00CCC(&Method_SingletonTemplate_QuestTree__get_Instance__, v25);
    sub_1B00CCC(&StringLiteral_8559/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, v26);
    sub_1B00CCC(&StringLiteral_8561/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, v27);
    sub_1B00CCC(&StringLiteral_8565/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, v28);
    sub_1B00CCC(&StringLiteral_8564/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v29);
    byte_48E5B0D = 1;
  }
  memset(&v89, 0, sizeof(v89));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (int32_t)listViewManager,
    missionBoardType);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8564/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8559/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v36 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v38 = missionItem;
        else
          v38 = 0LL;
      }
      else
      {
        v38 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v38;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v36 )
          v39 = (int)missionItem;
        else
          v39 = 0;
      }
      else
      {
        v39 = 0;
      }
    }
    else
    {
      v39 = 0;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_missionListViewItem, v39, v34, v35);
    if ( listViewManager )
    {
      v43 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v44 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v44 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v44 - 1] == MasterMissionListViewManager_TypeInfo )
          v45 = listViewManager;
        else
          v45 = 0LL;
      }
      else
      {
        v45 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v45;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v44 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v44 - 1] == v43 )
          v46 = (int)listViewManager;
        else
          v46 = 0;
      }
      else
      {
        v46 = 0;
      }
    }
    else
    {
      v46 = 0;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_missionListViewManager, v46, v41, v42);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0LL);
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._4_CompareTo.method)(
      limitedMissionItemDraw,
      missionItem,
      1LL,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, 0LL);
    if ( missionItem )
    {
      v48 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
        this->fields.isSetUpMissionListView = 1;
    }
  }
  limitedMissionItemDraw = (System_String_o *)this->fields.choiceMessageLabel;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  messageHeight = this->fields.messageHeight;
  messageTopOffset = this->fields.messageTopOffset;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v51 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v52 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v52 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v52, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v51, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v53 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v90.fields.x = 0.0;
  v90.fields.z = 0.0;
  v90.fields.y = v53;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v90, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v51, 0LL);
  v54 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_48DD9F7 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B00CCC(&UnityEngine_Quaternion_TypeInfo, v32);
    byte_48DD9F7 = 1;
  }
  if ( !v54 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v54, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v51, 0LL);
  v55 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_48DD9F6 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v32);
    byte_48DD9F6 = 1;
  }
  if ( !v55 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !boardItemList )
    goto LABEL_96;
  v56 = this->fields.boardHeight * 0.5;
  v57 = v53 - (float)((float)(this->fields.messageHeight * 0.5) + this->fields.messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v89 = v88;
  while ( 1 )
  {
    v58 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v89,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__);
    if ( !v58 )
      break;
    current = v89.fields._current;
    if ( !v89.fields._current )
      sub_1B00F28(v58, v59);
    if ( LODWORD(v89.fields._current[10].monitor) == 1 && !BYTE4(v89.fields._current[8].monitor) )
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !Instance )
        sub_1B00F28(0LL, v62);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, (int32_t)current[8].monitor, 0LL);
      if ( !QuestInfo )
        sub_1B00F28(0LL, v64);
      SpotInfo_k__BackingField = QuestInfo->fields._SpotInfo_k__BackingField;
      if ( !SpotInfo_k__BackingField )
        sub_1B00F28(QuestInfo, v64);
      if ( SpotInfo_k__BackingField->fields.dispType != 1 )
        continue;
      v66 = SingletonTemplate_object___get_Instance((const MethodInfo_35FC010 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
      if ( !v66 )
        sub_1B00F28(0LL, v67);
      if ( !clsQuestCheck__CheckQuestPlayableNow((clsQuestCheck_o *)v66, (int32_t)current[8].monitor, 0LL) )
        continue;
    }
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1B00F28(0LL, v59);
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v71 = UnityEngine_Object__Instantiate_object__48061460(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_2DD5C14 *)Method_UnityEngine_Object_Instantiate_GameObject____74661840);
    v73 = (UnityEngine_GameObject_o *)v71;
    if ( !v71 )
      sub_1B00F28(0LL, v72);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v71,
                                   (const MethodInfo_2DAE06C *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    if ( !ComponentInChildren_object )
      sub_1B00F28(0LL, v75);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v76 = UnityEngine_GameObject__get_transform(v73, 0LL);
    if ( !v76 )
      sub_1B00F28(0LL, v77);
    v78 = v57 - v56;
    v91.fields.x = 0.0;
    v91.fields.z = 0.0;
    v91.fields.y = v78;
    UnityEngine_Transform__set_localPosition(v76, v91, 0LL);
    v79 = (__int64)UnityEngine_GameObject__get_transform(v73, 0LL);
    v81 = (UnityEngine_Transform_o *)v79;
    if ( !byte_48DD9F7 )
    {
      v79 = sub_1B00CCC(&UnityEngine_Quaternion_TypeInfo, v80);
      byte_48DD9F7 = 1;
    }
    if ( !v81 )
      sub_1B00F28(v79, v80);
    UnityEngine_Transform__set_localRotation(
      v81,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v82 = (__int64)UnityEngine_GameObject__get_transform(v73, 0LL);
    v84 = (UnityEngine_Transform_o *)v82;
    if ( !byte_48DD9F6 )
    {
      v82 = sub_1B00CCC(&UnityEngine_Vector3_TypeInfo, v83);
      byte_48DD9F6 = 1;
    }
    if ( !v84 )
      sub_1B00F28(v82, v83);
    UnityEngine_Transform__set_localScale(v84, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v57 = v78 - v56;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v89,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer, float, float))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method)(
    limitedMissionItemDraw,
    0LL,
    limitedMissionItemDraw->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._8_Equals.method)(
    limitedMissionItemDraw,
    1LL,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_96;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0LL);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8561/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8565/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1B00F28(limitedMissionItemDraw, v32);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v87 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v87, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v87, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_48E5B11 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    byte_48E5B11 = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1B00F28(Time, v6);
  ((void (__fastcall *)(struct MasterMissionListViewItemDraw_o *, struct MasterMissionListViewItem_o *, int64_t, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._9_UpdateDispResTime.method)(
    limitedMissionItemDraw,
    missionListViewItem,
    Time,
    limitedMissionItemDraw->klass->vtable._10_SetInput.methodPtr);
}


void __fastcall MissionNaviTransitionConfirmDialog__RewardUpdateAnim(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewManager_o *missionListViewManager; // x8

  missionListViewManager = this->fields.missionListViewManager;
  if ( !missionListViewManager )
    sub_1B00F28(this, method);
  if ( missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField )
  {
    missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 0;
    MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(this, method);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__Update(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0
  const MethodInfo *v5; // x1

  if ( this->fields.isSetUpMissionListView )
  {
    MissionNaviTransitionConfirmDialog__RedispResTime(this, method);
    limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      sub_1B00F28(0LL, v3);
    MasterMissionListViewItemDraw__UpdateItem(
      limitedMissionItemDraw,
      this->fields.missionListViewItem,
      1,
      this->fields.missionListViewManager,
      0LL);
    MissionNaviTransitionConfirmDialog__RewardUpdateAnim(this, v5);
  }
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__get_closeBtnPath(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E5B0F & 1) == 0 )
  {
    sub_1B00CCC(&StringLiteral_15411/*"Window/CloseBtn"*/, method);
    byte_48E5B0F = 1;
  }
  return (System_String_o *)StringLiteral_15411/*"Window/CloseBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate___ctor(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_194EEB4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194EE74;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B00C80(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}