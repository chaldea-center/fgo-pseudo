void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5E43B & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5E43B = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_BB4080;
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


void __fastcall MissionNaviTransitionConfirmDialog__DeleteCallback(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *boardItemDrawList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E43A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    byte_4A5E43A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  boardItemDrawList = this->fields.boardItemDrawList;
  if ( boardItemDrawList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      (System_Collections_Generic_List_object__o *)boardItemDrawList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1B8880C(0LL, v4);
      MissionNaviTransitionBoardItemDraw__DeleteCallback((MissionNaviTransitionBoardItemDraw_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItemDraw__Dispose__);
  }
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
  System_String_o *monitor; // x20
  __int64 Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  Il2CppObject *PrioredName; // x0
  System_String_o *v12; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v15; // x21
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *v21; // x22
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x22
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x22
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v41; // x19
  __int64 v43; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v49; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8
  System_DateTime_o v53; // 0:x0.8
  System_DateTime_o v54; // 0:x0.8

  if ( (byte_4A5E438 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ClosedMessageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1B885B0(&System_DateTime_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E438 = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v49 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_311D988 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v49,
                      WarID_ByQuestID,
                      (const MethodInfo_311D988 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v49;
              if ( !v49 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v49, 0LL);
LABEL_12:
              v12 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue, v8, v9, v10);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_38479168(OpenedAt, 0LL).fields._dateData;
              v15 = (System_Object_array *)sub_1B88658(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v51.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v51, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue, v16, v17, v18);
              if ( !v15 )
                goto LABEL_47;
              v21 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B886EC(Instance, v15->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v15->max_length )
                goto LABEL_48;
              v15->m_Items[0] = v21;
              sub_1B88554((ServantStatusBattleListViewItem_o *)v15->m_Items, (int32_t)v21, v19, v20);
              v52.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v52, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day, v22, v23, v24);
              v27 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B886EC(Instance, v15->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v15->max_length <= 1 )
                goto LABEL_48;
              v15->m_Items[1] = v27;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[1], (int32_t)v27, v25, v26);
              v53.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v53, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour, v28, v29, v30);
              v33 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B886EC(Instance, v15->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v15->max_length <= 2 )
                goto LABEL_48;
              v15->m_Items[2] = v33;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[2], (int32_t)v33, v31, v32);
              v54.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v54, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute, v34, v35, v36);
              v39 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B886EC(Instance, v15->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v43 = sub_1B88830(Instance);
                  sub_1B886D8(v43, 0LL);
                }
              }
              if ( v15->max_length <= 3 )
LABEL_48:
                sub_1B88814(Instance, v7);
              v15->m_Items[3] = v39;
              sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->m_Items[3], (int32_t)v39, v37, v38);
              v12 = System_String__Format_61721540(monitor, v15, 0LL);
LABEL_39:
              monitor = v12;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v41 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v41->fields.overlayClosedMessage;
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
    sub_1B8880C(Instance, v7);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A5E436 & 1) == 0 )
  {
    sub_1B885B0(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    byte_4A5E436 = 1;
  }
  if ( this->fields.state == 2 )
  {
    MissionNaviTransitionConfirmDialog__DeleteCallback(this, method);
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B8880C(v5, v6);
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
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x25
  System_String_o *limitedMissionItemDraw; // x0
  __int64 v17; // x1
  UILabel_o *choiceMessageLabel; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppClass *v21; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v23; // x10
  int32_t v24; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppClass *v28; // x8
  __int64 v29; // x9
  MissionListViewManager_o *v30; // x10
  int32_t v31; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x24
  const MethodInfo *v33; // x2
  UnityEngine_Object_o *v34; // x22
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v37; // x23
  UnityEngine_Transform_o *v38; // x22
  float v39; // s8
  UnityEngine_Transform_o *v40; // x24
  UnityEngine_Transform_o *v41; // x24
  float v42; // s10
  float messageBottomOffset; // s11
  float boardHeight; // s9
  System_Collections_Generic_List_object__o *v45; // x25
  struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o **p_boardItemDrawList; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  float v49; // s9
  float v50; // s8
  __int64 v51; // x1
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x26
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x21
  UnityEngine_Transform_o *transform; // x25
  Il2CppObject *v56; // x0
  __int64 v57; // x1
  UnityEngine_GameObject_o *v58; // x25
  Il2CppObject *ComponentInChildren_object; // x0
  __int64 v60; // x1
  Il2CppObject *v61; // x21
  UnityEngine_Transform_o *v62; // x0
  __int64 v63; // x1
  float v64; // s8
  UnityEngine_Transform_o *v65; // x0
  __int64 v66; // x1
  UnityEngine_Transform_o *v67; // x26
  UnityEngine_Transform_o *v68; // x0
  __int64 v69; // x1
  UnityEngine_Transform_o *v70; // x25
  __int64 v71; // x1
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_List_object__o *v74; // x0
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x8
  UILabel_o *closeBtnLabel; // x21
  UILabel_o *warningMessageLabel; // x21
  System_Action_o *v81; // x20
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o v84; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5E435 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&MasterMissionListViewItem_TypeInfo);
    sub_1B885B0(&MasterMissionListViewManager_TypeInfo);
    sub_1B885B0(&Method_MissionNaviTransitionConfirmDialog_EndOpen__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8656/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8658/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/);
    sub_1B885B0(&StringLiteral_8662/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_8661/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/);
    byte_4A5E435 = 1;
  }
  memset(&v83, 0, sizeof(v83));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (int32_t)listViewManager,
    missionBoardType);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8661/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_96;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8656/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_96;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v21 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v23 = missionItem;
        else
          v23 = 0LL;
      }
      else
      {
        v23 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v23;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v21 )
          v24 = (int)missionItem;
        else
          v24 = 0;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_missionListViewItem, v24, v19, v20);
    if ( listViewManager )
    {
      v28 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v29 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v29 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v29 - 1] == MasterMissionListViewManager_TypeInfo )
          v30 = listViewManager;
        else
          v30 = 0LL;
      }
      else
      {
        v30 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v30;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v29 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v29 - 1] == v28 )
          v31 = (int)listViewManager;
        else
          v31 = 0;
      }
      else
      {
        v31 = 0;
      }
    }
    else
    {
      v31 = 0;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1B88554((ServantStatusBattleListViewItem_o *)p_missionListViewManager, v31, v26, v27);
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
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, v33);
    if ( missionItem )
    {
      v34 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
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
  v37 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_96;
  v38 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v38 )
    goto LABEL_96;
  UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_96;
  v39 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v84.fields.x = 0.0;
  v84.fields.z = 0.0;
  v84.fields.y = v39;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v84, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
  v40 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4A55CE7 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !v40 )
    goto LABEL_96;
  UnityEngine_Transform__set_localRotation(v40, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v37, 0LL);
  v41 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_4A55CE6 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v41 )
    goto LABEL_96;
  UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  messageBottomOffset = this->fields.messageBottomOffset;
  v42 = this->fields.messageHeight;
  boardHeight = this->fields.boardHeight;
  v45 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v45,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw___ctor__);
  this->fields.boardItemDrawList = (struct System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__o *)v45;
  p_boardItemDrawList = &this->fields.boardItemDrawList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.boardItemDrawList, (int32_t)v45, v47, v48);
  if ( !boardItemList )
    goto LABEL_96;
  v49 = boardHeight * 0.5;
  v50 = v39 - (float)((float)(v42 * 0.5) + messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v82,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v83 = v82;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v83,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1B8880C(0LL, v51);
    current = v83.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v56 = UnityEngine_Object__Instantiate_object__49297800(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    v58 = (UnityEngine_GameObject_o *)v56;
    if ( !v56 )
      sub_1B8880C(0LL, v57);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v56,
                                   (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    v61 = ComponentInChildren_object;
    if ( !ComponentInChildren_object )
      sub_1B8880C(0LL, v60);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v62 = UnityEngine_GameObject__get_transform(v58, 0LL);
    if ( !v62 )
      sub_1B8880C(0LL, v63);
    v64 = v50 - v49;
    v85.fields.x = 0.0;
    v85.fields.z = 0.0;
    v85.fields.y = v64;
    UnityEngine_Transform__set_localPosition(v62, v85, 0LL);
    v65 = UnityEngine_GameObject__get_transform(v58, 0LL);
    v67 = v65;
    if ( !byte_4A55CE7 )
    {
      v65 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
      byte_4A55CE7 = 1;
    }
    if ( !v67 )
      sub_1B8880C(v65, v66);
    UnityEngine_Transform__set_localRotation(
      v67,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v68 = UnityEngine_GameObject__get_transform(v58, 0LL);
    v70 = v68;
    if ( !byte_4A55CE6 )
    {
      v68 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE6 = 1;
    }
    if ( !v70 )
      sub_1B8880C(v68, v69);
    UnityEngine_Transform__set_localScale(v70, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v74 = (System_Collections_Generic_List_object__o *)*p_boardItemDrawList;
    if ( !*p_boardItemDrawList )
      sub_1B8880C(0LL, v71);
    items = v74->fields._items;
    v76 = Method_System_Collections_Generic_List_MissionNaviTransitionBoardItemDraw__Add__;
    ++v74->fields._version;
    if ( !items )
      sub_1B8880C(v74, v71);
    size = v74->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v74,
        v61,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
    }
    else
    {
      v78 = &items->obj.klass + size;
      v74->fields._size = size + 1;
      v78[4] = (Il2CppClass *)v61;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v78 + 4), (int32_t)v61, v72, v73);
    }
    v50 = v64 - v49;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v83,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
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
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8658/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8662/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_96:
    sub_1B8880C(limitedMissionItemDraw, v17);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  ActionExtensions__Call(openCallback, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v81 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v81, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v81, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0
  __int64 v6; // x1

  if ( (byte_4A5E439 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5E439 = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1B8880C(Time, v6);
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
    sub_1B8880C(this, method);
  if ( missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField )
  {
    missionListViewManager->fields._IsChangeMissionNaviDialogAnim_k__BackingField = 0;
    MissionNaviTransitionConfirmDialog__OnChangeAlphaAnim(this, method);
  }
}


void __fastcall MissionNaviTransitionConfirmDialog__SetState(
        MissionNaviTransitionConfirmDialog_o *this,
        int32_t currentState,
        const MethodInfo *method)
{
  this->fields.state = currentState;
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
      sub_1B8880C(0LL, v3);
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
  if ( (byte_4A5E437 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15650/*"Window/Objects/CancelButton"*/);
    byte_4A5E437 = 1;
  }
  return (System_String_o *)StringLiteral_15650/*"Window/Objects/CancelButton"*/;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D2900;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D28C0;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B88564(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}