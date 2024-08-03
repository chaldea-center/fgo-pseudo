void __fastcall MissionNaviTransitionConfirmDialog___ctor(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF750 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FF750 = 1;
  }
  *(_OWORD *)&this->fields.messageTopOffset = xmmword_BA2880;
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
  Il2CppObject *PrioredName; // x0
  System_String_o *v21; // x0
  int32_t WarID_ByQuestID; // w21
  int64_t OpenedAt; // x21
  System_Object_array *v24; // x21
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  Il2CppObject *v28; // x22
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *v31; // x22
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  Il2CppObject *v37; // x22
  QuestReleaseOverwriteEntity_o *EntityByQuestIdAndTime; // x0
  QuestReleaseOverwriteEntity_o *v39; // x19
  __int64 v41; // x0
  int32_t Minute; // [xsp+Ch] [xbp-64h] BYREF
  int32_t Hour; // [xsp+10h] [xbp-60h] BYREF
  int32_t Day; // [xsp+14h] [xbp-5Ch] BYREF
  int64_t questReleaseValue; // [xsp+18h] [xbp-58h] BYREF
  uint64_t dateData; // [xsp+20h] [xbp-50h] BYREF
  Il2CppObject *v47; // [xsp+28h] [xbp-48h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-38h] BYREF
  System_DateTime_o v49; // 0:x0.8
  System_DateTime_o v50; // 0:x0.8
  System_DateTime_o v51; // 0:x0.8
  System_DateTime_o v52; // 0:x0.8

  if ( (byte_49FF74E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ClosedMessageMaster___, questEnt);
    sub_1B640C8(&Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_WarMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__, v9);
    sub_1B640C8(&System_DateTime_TypeInfo, v10);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&long_TypeInfo, v12);
    sub_1B640C8(&NetworkManager_TypeInfo, v13);
    sub_1B640C8(&object___TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_1B640C8(&StringLiteral_1/*""*/, v17);
    byte_49FF74E = 1;
  }
  monitor = (System_String_o *)StringLiteral_1/*""*/;
  entity = 0LL;
  dateData = 0LL;
  v47 = 0LL;
  if ( questInfo && questInfo->fields.questReleaseClosedID >= 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)Instance,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ClosedMessageMaster___);
      if ( Instance )
      {
        monitor = (System_String_o *)StringLiteral_1/*""*/;
        Instance = DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                     &entity,
                     questInfo->fields.questReleaseClosedID,
                     (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ClosedMessageMaster__ClosedMessageEntity__int__TryGetEntity__);
        if ( (Instance & 1) == 0 )
          goto LABEL_10;
        if ( entity )
        {
          monitor = (System_String_o *)entity[1].monitor;
LABEL_10:
          switch ( questInfo->fields.questReleaseType )
          {
            case 1:
              Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              WarID_ByQuestID = QuestTree__GetWarID_ByQuestID(
                                  (QuestTree_o *)Instance,
                                  questInfo->fields.questReleaseTargetID,
                                  0LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_WarMaster___);
              if ( !Instance )
                goto LABEL_47;
              if ( !DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                      &v47,
                      WarID_ByQuestID,
                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
                goto LABEL_40;
              Instance = (__int64)v47;
              if ( !v47 )
                goto LABEL_47;
              PrioredName = (Il2CppObject *)WarEntity__GetPrioredName((WarEntity_o *)v47, 0LL);
LABEL_12:
              v21 = System_String__Format(monitor, PrioredName, 0LL);
              goto LABEL_39;
            case 6:
            case 7:
            case 9:
              questReleaseValue = questInfo->fields.questReleaseValue;
              PrioredName = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &questReleaseValue);
              goto LABEL_12;
            case 0xC:
              if ( !questEnt )
                goto LABEL_47;
              OpenedAt = QuestEntity__getOpenedAt(questEnt, 0LL);
              if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              dateData = NetworkManager__getServerDateTime_38078100(OpenedAt, 0LL).fields._dateData;
              v24 = (System_Object_array *)sub_1B64170(object___TypeInfo, 4LL);
              if ( !System_DateTime_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_DateTime_TypeInfo);
              v49.fields._dateData = (uint64_t)&dateData;
              LODWORD(questReleaseValue) = System_DateTime__get_Month(v49, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &questReleaseValue);
              if ( !v24 )
                goto LABEL_47;
              v28 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B64204(Instance, v24->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( !v24->max_length )
                goto LABEL_48;
              v24->m_Items[0] = v28;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)v24->m_Items, (int32_t)v28, v26, v27);
              v50.fields._dateData = (uint64_t)&dateData;
              Day = System_DateTime__get_Day(v50, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Day);
              v31 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B64204(Instance, v24->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v24->max_length <= 1 )
                goto LABEL_48;
              v24->m_Items[1] = v31;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[1], (int32_t)v31, v29, v30);
              v51.fields._dateData = (uint64_t)&dateData;
              Hour = System_DateTime__get_Hour(v51, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Hour);
              v34 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B64204(Instance, v24->obj.klass->_1.element_class);
                if ( !Instance )
                  goto LABEL_49;
              }
              if ( v24->max_length <= 2 )
                goto LABEL_48;
              v24->m_Items[2] = v34;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[2], (int32_t)v34, v32, v33);
              v52.fields._dateData = (uint64_t)&dateData;
              Minute = System_DateTime__get_Minute(v52, 0LL);
              Instance = j_il2cpp_value_box_0(int_TypeInfo, &Minute);
              v37 = (Il2CppObject *)Instance;
              if ( Instance )
              {
                Instance = sub_1B64204(Instance, v24->obj.klass->_1.element_class);
                if ( !Instance )
                {
LABEL_49:
                  v41 = sub_1B64348(Instance);
                  sub_1B641F0(v41, 0LL);
                }
              }
              if ( v24->max_length <= 3 )
LABEL_48:
                sub_1B6432C(Instance, v25);
              v24->m_Items[3] = v37;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&v24->m_Items[3], (int32_t)v37, v35, v36);
              v21 = System_String__Format_61389904(monitor, v24, 0LL);
LABEL_39:
              monitor = v21;
LABEL_40:
              Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_47;
              Instance = (__int64)DataManager__GetMasterData_object_(
                                    (DataManager_o *)Instance,
                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_QuestReleaseOverwriteMaster___);
              if ( !questEnt || !Instance )
                goto LABEL_47;
              EntityByQuestIdAndTime = QuestReleaseOverwriteMaster__GetEntityByQuestIdAndTime(
                                         (QuestReleaseOverwriteMaster_o *)Instance,
                                         questEnt->fields.id,
                                         0LL,
                                         0LL);
              if ( EntityByQuestIdAndTime )
              {
                v39 = EntityByQuestIdAndTime;
                if ( !System_String__IsNullOrEmpty(EntityByQuestIdAndTime->fields.overlayClosedMessage, 0LL) )
                  monitor = v39->fields.overlayClosedMessage;
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
    sub_1B64324(Instance);
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
    sub_1B64324(0LL);
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
  struct MissionNaviTransitionConfirmDialog_CloseDelegate_o *closeFunc; // x8

  if ( (byte_49FF74C & 1) == 0 )
  {
    sub_1B640C8(&Method_MissionNaviTransitionConfirmDialog_OnClickClose__, method);
    byte_49FF74C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_MissionNaviTransitionConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_MissionNaviTransitionConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_MissionNaviTransitionConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    closeFunc = this->fields.closeFunc;
    if ( !closeFunc )
      sub_1B64324(v5);
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
  UILabel_o *titleLabel; // x24
  System_String_o *limitedMissionItemDraw; // x0
  UILabel_o *choiceMessageLabel; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppClass *v33; // x8
  __int64 methodPtr_low; // x9
  MissionListViewItem_o *v35; // x10
  int32_t v36; // w1
  struct MasterMissionListViewItem_o **p_missionListViewItem; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  Il2CppClass *v40; // x8
  __int64 v41; // x9
  MissionListViewManager_o *v42; // x10
  int32_t v43; // w1
  struct MasterMissionListViewManager_o **p_missionListViewManager; // x23
  const MethodInfo *v45; // x2
  UnityEngine_Object_o *v46; // x21
  float messageHeight; // s8
  float messageTopOffset; // s9
  UnityEngine_GameObject_o *v49; // x22
  UnityEngine_Transform_o *v50; // x21
  float v51; // s8
  __int64 v52; // x1
  UnityEngine_Transform_o *v53; // x23
  __int64 v54; // x1
  UnityEngine_Transform_o *v55; // x23
  float v56; // s9
  float v57; // s8
  UnityEngine_GameObject_o *challengeGrid; // x0
  Il2CppObject *current; // x23
  Il2CppObject *missionNaviTransitionBoardItemDrawPrefab; // x20
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v62; // x0
  UnityEngine_GameObject_o *v63; // x20
  Il2CppObject *ComponentInChildren_object; // x0
  UnityEngine_Transform_o *v65; // x0
  float v66; // s8
  __int64 v67; // x0
  __int64 v68; // x1
  UnityEngine_Transform_o *v69; // x23
  __int64 v70; // x0
  __int64 v71; // x1
  UnityEngine_Transform_o *v72; // x20
  UILabel_o *closeBtnLabel; // x20
  UILabel_o *warningMessageLabel; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  System_Action_o *v77; // x20
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF74B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, missionItem);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__get_Current__, v15);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&MasterMissionListViewItem_TypeInfo, v19);
    sub_1B640C8(&MasterMissionListViewManager_TypeInfo, v20);
    sub_1B640C8(&Method_MissionNaviTransitionConfirmDialog_EndOpen__, v21);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v22);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v23);
    sub_1B640C8(&StringLiteral_8616/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, v24);
    sub_1B640C8(&StringLiteral_8618/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, v25);
    sub_1B640C8(&StringLiteral_8622/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, v26);
    sub_1B640C8(&StringLiteral_8621/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, v27);
    byte_49FF74B = 1;
  }
  memset(&v79, 0, sizeof(v79));
  this->fields.closeFunc = closeDelegate;
  this->fields.isSetUpMissionListView = 0;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeFunc,
    (int32_t)closeDelegate,
    (int32_t)listViewManager,
    missionBoardType);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8621/*"MISSION_NAVI_CONFIRM_DIALOG_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_89;
  UILabel__set_text(titleLabel, limitedMissionItemDraw, 0LL);
  choiceMessageLabel = this->fields.choiceMessageLabel;
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8616/*"MISSION_NAVI_CONFIRM_CHOICE_MESSAGE"*/, 0LL);
  if ( !choiceMessageLabel )
    goto LABEL_89;
  UILabel__set_text(choiceMessageLabel, limitedMissionItemDraw, 0LL);
  if ( missionBoardType == 1 )
  {
    if ( missionItem )
    {
      v33 = (Il2CppClass *)MasterMissionListViewItem_TypeInfo;
      methodPtr_low = LOBYTE(MasterMissionListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (MasterMissionListViewItem_c *)missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == MasterMissionListViewItem_TypeInfo )
          v35 = missionItem;
        else
          v35 = 0LL;
      }
      else
      {
        v35 = 0LL;
      }
      this->fields.missionListViewItem = (struct MasterMissionListViewItem_o *)v35;
      p_missionListViewItem = &this->fields.missionListViewItem;
      if ( LOBYTE(missionItem->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( missionItem->klass->_2.typeHierarchy[methodPtr_low - 1] == v33 )
          v36 = (int)missionItem;
        else
          v36 = 0;
      }
      else
      {
        v36 = 0;
      }
    }
    else
    {
      v36 = 0;
      this->fields.missionListViewItem = 0LL;
      p_missionListViewItem = &this->fields.missionListViewItem;
    }
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_missionListViewItem, v36, v31, v32);
    if ( listViewManager )
    {
      v40 = (Il2CppClass *)MasterMissionListViewManager_TypeInfo;
      v41 = LOBYTE(MasterMissionListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v41 )
      {
        if ( (MasterMissionListViewManager_c *)listViewManager->klass->_2.typeHierarchy[v41 - 1] == MasterMissionListViewManager_TypeInfo )
          v42 = listViewManager;
        else
          v42 = 0LL;
      }
      else
      {
        v42 = 0LL;
      }
      this->fields.missionListViewManager = (struct MasterMissionListViewManager_o *)v42;
      p_missionListViewManager = &this->fields.missionListViewManager;
      if ( LOBYTE(listViewManager->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v41 )
      {
        if ( listViewManager->klass->_2.typeHierarchy[v41 - 1] == v40 )
          v43 = (int)listViewManager;
        else
          v43 = 0;
      }
      else
      {
        v43 = 0;
      }
    }
    else
    {
      v43 = 0;
      this->fields.missionListViewManager = 0LL;
      p_missionListViewManager = &this->fields.missionListViewManager;
    }
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_missionListViewManager, v43, v38, v39);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                  0LL);
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 1, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    ((void (__fastcall *)(System_String_o *, MissionListViewItem_o *, __int64, MissionListViewManager_o *, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._4_CompareTo.method)(
      limitedMissionItemDraw,
      missionItem,
      1LL,
      listViewManager,
      limitedMissionItemDraw->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr);
    limitedMissionItemDraw = (System_String_o *)this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    MissionListViewItemDraw__SetChallengeButtonActive((MissionListViewItemDraw_o *)limitedMissionItemDraw, 0, v45);
    if ( missionItem )
    {
      v46 = (UnityEngine_Object_o *)*p_missionListViewManager;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v46, 0LL, 0LL) )
        this->fields.isSetUpMissionListView = 1;
    }
  }
  limitedMissionItemDraw = (System_String_o *)this->fields.choiceMessageLabel;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  messageHeight = this->fields.messageHeight;
  messageTopOffset = this->fields.messageTopOffset;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  v49 = (UnityEngine_GameObject_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !this->fields.challengeGrid )
    goto LABEL_89;
  v50 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(this->fields.challengeGrid, 0LL);
  if ( !v50 )
    goto LABEL_89;
  UnityEngine_Transform__set_parent(v50, (UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v49, 0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  v51 = 0.0 - (float)((float)(messageHeight * 0.5) + messageTopOffset);
  v80.fields.x = 0.0;
  v80.fields.z = 0.0;
  v80.fields.y = v51;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)limitedMissionItemDraw, v80, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v49, 0LL);
  v53 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_49F7117 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v52);
    byte_49F7117 = 1;
  }
  if ( !v53 )
    goto LABEL_89;
  UnityEngine_Transform__set_localRotation(v53, UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion, 0LL);
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(v49, 0LL);
  v55 = (UnityEngine_Transform_o *)limitedMissionItemDraw;
  if ( !byte_49F7116 )
  {
    limitedMissionItemDraw = (System_String_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v54);
    byte_49F7116 = 1;
  }
  if ( !v55 )
    goto LABEL_89;
  UnityEngine_Transform__set_localScale(v55, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  if ( !boardItemList )
    goto LABEL_89;
  v56 = this->fields.boardHeight * 0.5;
  v57 = v51 - (float)((float)(this->fields.messageHeight * 0.5) + this->fields.messageBottomOffset);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v78,
    (System_Collections_Generic_List_object__o *)boardItemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_MissionNaviTransitionBoardItem__GetEnumerator__);
  v79 = v78;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v79,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__MoveNext__) )
  {
    challengeGrid = this->fields.challengeGrid;
    if ( !challengeGrid )
      sub_1B64324(0LL);
    current = v79.fields._current;
    missionNaviTransitionBoardItemDrawPrefab = (Il2CppObject *)this->fields.missionNaviTransitionBoardItemDrawPrefab;
    transform = UnityEngine_GameObject__get_transform(challengeGrid, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v62 = UnityEngine_Object__Instantiate_object__49003980(
            missionNaviTransitionBoardItemDrawPrefab,
            transform,
            (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
    v63 = (UnityEngine_GameObject_o *)v62;
    if ( !v62 )
      sub_1B64324(0LL);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v62,
                                   (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_MissionNaviTransitionBoardItemDraw___);
    if ( !ComponentInChildren_object )
      sub_1B64324(0LL);
    ((void (__fastcall *)(Il2CppObject *, Il2CppObject *, _QWORD, Il2CppMethodPointer))ComponentInChildren_object->klass->vtable[4].method)(
      ComponentInChildren_object,
      current,
      0LL,
      ComponentInChildren_object->klass->vtable[5].methodPtr);
    v65 = UnityEngine_GameObject__get_transform(v63, 0LL);
    if ( !v65 )
      sub_1B64324(0LL);
    v66 = v57 - v56;
    v81.fields.x = 0.0;
    v81.fields.z = 0.0;
    v81.fields.y = v66;
    UnityEngine_Transform__set_localPosition(v65, v81, 0LL);
    v67 = (__int64)UnityEngine_GameObject__get_transform(v63, 0LL);
    v69 = (UnityEngine_Transform_o *)v67;
    if ( !byte_49F7117 )
    {
      v67 = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v68);
      byte_49F7117 = 1;
    }
    if ( !v69 )
      sub_1B64324(v67);
    UnityEngine_Transform__set_localRotation(
      v69,
      UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
      0LL);
    v70 = (__int64)UnityEngine_GameObject__get_transform(v63, 0LL);
    v72 = (UnityEngine_Transform_o *)v70;
    if ( !byte_49F7116 )
    {
      v70 = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v71);
      byte_49F7116 = 1;
    }
    if ( !v72 )
      sub_1B64324(v70);
    UnityEngine_Transform__set_localScale(v72, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    v57 = v66 - v56;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v79,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_MissionNaviTransitionBoardItem__Dispose__);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  UIScrollView__ResetPosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  ((void (__fastcall *)(System_String_o *, _QWORD, Il2CppMethodPointer, float, float))limitedMissionItemDraw->klass->vtable._9_GetTypeCode.method)(
    limitedMissionItemDraw,
    0LL,
    limitedMissionItemDraw->klass->vtable._10_System_IConvertible_ToBoolean.methodPtr,
    0.0,
    0.0);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))limitedMissionItemDraw->klass->vtable._8_Equals.method)(
    limitedMissionItemDraw,
    1LL,
    limitedMissionItemDraw->klass->vtable._9_GetTypeCode.methodPtr);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  UIScrollView__UpdatePosition((UIScrollView_o *)limitedMissionItemDraw, 0LL);
  limitedMissionItemDraw = (System_String_o *)this->fields.challengeGrid;
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  limitedMissionItemDraw = (System_String_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)limitedMissionItemDraw,
                                                0LL);
  if ( !limitedMissionItemDraw )
    goto LABEL_89;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)limitedMissionItemDraw, 0LL) <= 3 )
  {
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollView;
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)limitedMissionItemDraw, 0, 0LL);
    limitedMissionItemDraw = (System_String_o *)this->fields.challengeTargetScrollBar;
    if ( !limitedMissionItemDraw )
      goto LABEL_89;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)limitedMissionItemDraw, 0, 0LL);
  }
  closeBtnLabel = this->fields.closeBtnLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8618/*"MISSION_NAVI_CONFIRM_DIALOG_CLOSE"*/, 0LL);
  if ( !closeBtnLabel
    || (UILabel__set_text(closeBtnLabel, limitedMissionItemDraw, 0LL),
        warningMessageLabel = this->fields.warningMessageLabel,
        limitedMissionItemDraw = LocalizationManager__Get((System_String_o *)StringLiteral_8622/*"MISSION_NAVI_CONFIRM_WARNING_MESSAGE"*/, 0LL),
        !warningMessageLabel) )
  {
LABEL_89:
    sub_1B64324(limitedMissionItemDraw);
  }
  UILabel__set_text(warningMessageLabel, limitedMissionItemDraw, 0LL);
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, 0, 0LL);
  v77 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v75, v76);
  System_Action___ctor(v77, (Il2CppObject *)this, Method_MissionNaviTransitionConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
}


void __fastcall MissionNaviTransitionConfirmDialog__RedispResTime(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  struct MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x19
  struct MasterMissionListViewItem_o *missionListViewItem; // x20
  int64_t Time; // x0

  if ( (byte_49FF74F & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    byte_49FF74F = 1;
  }
  limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
  missionListViewItem = this->fields.missionListViewItem;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  if ( !limitedMissionItemDraw )
    sub_1B64324(Time);
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
    sub_1B64324(this);
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
  MasterMissionListViewItemDraw_o *limitedMissionItemDraw; // x0
  const MethodInfo *v4; // x1

  if ( this->fields.isSetUpMissionListView )
  {
    MissionNaviTransitionConfirmDialog__RedispResTime(this, method);
    limitedMissionItemDraw = this->fields.limitedMissionItemDraw;
    if ( !limitedMissionItemDraw )
      sub_1B64324(0LL);
    MasterMissionListViewItemDraw__UpdateItem(
      limitedMissionItemDraw,
      this->fields.missionListViewItem,
      1,
      this->fields.missionListViewManager,
      0LL);
    MissionNaviTransitionConfirmDialog__RewardUpdateAnim(this, v4);
  }
}


System_String_o *__fastcall MissionNaviTransitionConfirmDialog__get_closeBtnPath(
        MissionNaviTransitionConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF74D & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15582/*"Window/Objects/CancelButton"*/, method);
    byte_49FF74D = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/Objects/CancelButton"*/;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B00EC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B00AC;
}


System_IAsyncResult_o *__fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__BeginInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__EndInvoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall MissionNaviTransitionConfirmDialog_CloseDelegate__Invoke(
        MissionNaviTransitionConfirmDialog_CloseDelegate_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}