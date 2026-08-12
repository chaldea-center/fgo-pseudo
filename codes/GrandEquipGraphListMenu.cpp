void GrandEquipGraphListMenu___ctor(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0);
}


void GrandEquipGraphListMenu__AfterCreateList(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v4; // x20
  System_Func_object__bool__o *v5; // x21
  Il2CppObject *v6; // x0

  if ( (byte_596B2EE & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_2213A60(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_2213A60(&Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__);
    byte_596B2EE = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_8;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v6 )
    BYTE4(v6[9].monitor) = 1;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
LABEL_8:
    sub_2213CDC(listViewManager, method);
  ListViewManager__SortItem((ListViewManager_o *)listViewManager, -1, 0, -1, 0);
}


void GrandEquipGraphListMenu__AssertionForSerializeField(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase__AssertionForSerializeField((CharaGraphListMenuBase_o *)this, 0);
}


void GrandEquipGraphListMenu__ChangeSelectEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        int32_t temporarySubEquipHp,
        int32_t temporarySubEquipAtk,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *v7; // x22
  GrandEquipGraphListMenu_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v11; // x23
  GrandEquipGraphListMenu___c_c *v12; // x8
  struct GrandEquipGraphListMenu___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__26_0; // x24
  Il2CppObject *v15; // x25
  struct GrandEquipGraphListMenu___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x0
  CharaGraphListViewItemBase_c *klass; // x8

  v7 = selectItem;
  v8 = this;
  if ( (byte_596B2F4 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_2213A60(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_2213A60(&Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__);
    this = (GrandEquipGraphListMenu_o *)sub_2213A60(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_596B2F4 = 1;
  }
  if ( !v7 )
    goto LABEL_22;
  if ( v7->fields._IsBase_k__BackingField )
  {
    selectItem = 0;
    v7->fields._IsBase_k__BackingField = 0;
  }
  else
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.listViewManager;
    if ( !this )
      goto LABEL_22;
    v11 = CharaGraphListViewManager__EnumerateItems((CharaGraphListViewManager_o *)this, 0);
    v12 = GrandEquipGraphListMenu___c_TypeInfo;
    if ( !*(&GrandEquipGraphListMenu___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(GrandEquipGraphListMenu___c_TypeInfo, v9, v10);
      v12 = GrandEquipGraphListMenu___c_TypeInfo;
    }
    static_fields = v12->static_fields;
    _9__26_0 = (System_Func_object__bool__o *)static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !*(&v12->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v12, v9, v10);
        static_fields = GrandEquipGraphListMenu___c_TypeInfo->static_fields;
      }
      v15 = (Il2CppObject *)static_fields->__9;
      _9__26_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__26_0,
        v15,
        Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__,
        0);
      v16 = GrandEquipGraphListMenu___c_TypeInfo->static_fields;
      v16->__9__26_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__26_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v16->__9__26_0, (int32_t)_9__26_0, v17, v18, v19, v20, v21, v22);
    }
    v23 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
            (System_Collections_Generic_IEnumerable_TSource__o *)v11,
            (System_Func_TSource__bool__o *)_9__26_0,
            (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    if ( v23 )
      BYTE4(v23[9].monitor) = 0;
    klass = v7->klass;
    v7->fields._IsBase_k__BackingField = 1;
    selectItem = (CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))klass->vtable._6_unknown.methodPtr)(
                                                   v7,
                                                   klass->vtable._6_unknown.method);
  }
  this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemInfo;
  v8->fields.selectedEquipUserSvtId = (int64_t)selectItem;
  if ( !this )
    goto LABEL_22;
  SupportServantEquipServantItem__SetEquipTarget((SupportServantEquipServantItem_o *)this, (int64_t)selectItem, 0);
  this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw;
  if ( !this )
    goto LABEL_22;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)this,
    v8->fields.servantItemInfo,
    v8->fields.otherUsedEquipHpSum - temporarySubEquipHp,
    v8->fields.otherUsedEquipAtkSum - temporarySubEquipAtk,
    0,
    0);
  this = (GrandEquipGraphListMenu_o *)v8->fields.bondSkillChangeMessageLabel;
  selectItem = 0;
  if ( v8->fields.equipType == 1 )
    selectItem = (CharaGraphListViewItemBase_o *)(v8->fields.selectedEquipUserSvtId > 0);
  if ( !this )
LABEL_22:
    sub_2213CDC(this, selectItem);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)selectItem, 0);
  CharaGraphListMenuBase__ToInputState((CharaGraphListMenuBase_o *)v8, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *GrandEquipGraphListMenu__CreateListViewPattern(
        GrandEquipGraphListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v6; // x21
  int32_t equipType; // w8
  System_Int64_array *otherUsedEquipUserSvtIds; // x23
  GrandServantListSlotData_o *grandSvtData; // x22
  __int64 v10; // x24
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int64 v18; // x24
  __int64 v19; // x25
  int32_t v20; // w25
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  v6 = this;
  if ( (byte_596B2F6 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    sub_2213A60(&CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    sub_2213A60(&CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_596B2F6 = 1;
  }
  equipType = v6->fields.equipType;
  otherUsedEquipUserSvtIds = v6->fields.otherUsedEquipUserSvtIds;
  grandSvtData = v6->fields.grandSvtData;
  if ( equipType == 2 )
  {
    v10 = sub_2213CCC(CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    CharaGraphListViewPatternGrandEquipRewardUp___ctor(
      (CharaGraphListViewPatternGrandEquipRewardUp_o *)v10,
      otherUsedEquipUserSvtIds,
      grandSvtData,
      0);
  }
  else if ( equipType == 1 )
  {
    if ( !grandSvtData
      || (UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField) == 0 )
    {
LABEL_15:
      sub_2213CDC(this, *(_QWORD *)&kind);
    }
    v18 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, *(_QWORD *)&kind, setupInfo);
    *(_QWORD *)&v36.fields.currentCryptoKey = v18;
    *(_QWORD *)&v36.fields.fakeValue = v19;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v36, 0);
    v10 = sub_2213CCC(CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    CharaGraphListViewPatternGrandEquipBond___ctor(
      (CharaGraphListViewPatternGrandEquipBond_o *)v10,
      otherUsedEquipUserSvtIds,
      grandSvtData,
      v20,
      0);
  }
  else
  {
    v10 = sub_2213CCC(CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    CharaGraphListViewPatternGrandEquipNormal___ctor(
      (CharaGraphListViewPatternGrandEquipNormal_o *)v10,
      otherUsedEquipUserSvtIds,
      grandSvtData,
      0);
  }
  if ( !v10 )
    goto LABEL_15;
  SortOwner_k__BackingField = v6->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v10 + 16) = SortOwner_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v10 + 16),
    (int32_t)SortOwner_k__BackingField,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  RootInfo_k__BackingField = v6->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v10 + 24) = RootInfo_k__BackingField;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v10 + 24),
    (int32_t)RootInfo_k__BackingField,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  *(_QWORD *)(v10 + 32) = setupInfo;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 32), (int32_t)setupInfo, v29, v30, v31, v32, v33, v34);
  this = *(GrandEquipGraphListMenu_o **)(v10 + 16);
  if ( !this )
    goto LABEL_15;
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit((CharaGraphSortOwnerBase_o *)this, kind, 0);
  return (CharaGraphListViewPatternBase_o *)v10;
}


void GrandEquipGraphListMenu__ExitMenu(GrandEquipGraphListMenu_o *this, int32_t result, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  __int64 v9; // x2
  const MethodInfo *v10; // x3
  int32_t equipType; // w8
  int32_t v12; // w20
  Il2CppObject *Instance; // x22
  int64_t selectedEquipUserSvtId; // x21
  System_Action_bool__int__o *v15; // x23
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  struct GrandServantListSlotData_o *v19; // x8
  int32_t equipTypeIndex; // w1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w2
  GrandEquipGraphListMenu_o *v22; // x0
  struct GrandServantListSlotData_o *grandSvtData; // x9
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  struct System_Int64_array *EquipUserServantIds_k__BackingField; // x9
  __int64 v26; // x25
  __int64 v27; // x26
  struct UIIconLabel_o *hpIconLabel; // x23
  struct UIIconLabel_o *differHpIconLabel; // x24
  int64_t v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  Il2CppObject *v33; // x22
  int32_t v34; // w25
  struct GrandServantListSlotData_o *v35; // x8
  ServantEntity_o *ServantEntity; // x25
  struct GrandServantListSlotData_o *v37; // x8
  CommonUI_o *v38; // x21
  int64_t v39; // x23
  int32_t v40; // w22
  System_Action_bool__bool__int__o *v41; // x24
  struct GrandServantListSlotData_o *v42; // x8
  PartyOrganizationUtility_o *v43; // x26
  __int64 v44; // x2
  intptr_t m_CachedPtr; // x27
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x28
  int32_t v47; // w27
  System_String_o *ServantShortName; // x26
  struct GrandServantListSlotData_o *v49; // x8
  System_String_o *v50; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16

  if ( (byte_596B2EF & 1) == 0 )
  {
    sub_2213A60(&System_Action_bool__int__TypeInfo);
    sub_2213A60(&System_Action_bool__bool__int__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_2213A60(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_2213A60(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__);
    sub_2213A60(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_2213A60(&StringLiteral_7296/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_596B2EF = 1;
  }
  if ( result )
  {
    if ( result == 1 )
    {
      v5 = Method_GrandEquipGraphListMenu_ExitMenu__;
      if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_2213A78(Method_GrandEquipGraphListMenu_ExitMenu__);
      v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      servantItemDraw = this->fields.servantItemDraw;
      if ( !servantItemDraw )
        goto LABEL_49;
      SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 0, 0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ConstantMaster__getValue(
                                                                  (System_String_o *)StringLiteral_7296/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/,
                                                                  0);
      equipType = this->fields.equipType;
      v12 = (int)servantItemDraw;
      if ( equipType == 1 && (int)servantItemDraw >= 1 )
      {
        if ( this->fields.selectedEquipUserSvtId >= 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
          v15 = (System_Action_bool__int__o *)sub_2213CCC(System_Action_bool__int__TypeInfo);
          System_Action_bool__int____ctor(
            v15,
            (Il2CppObject *)this,
            Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__,
            0);
          if ( Instance )
          {
            CommonUI__OpenGrandBondEquipSkillSelectDialog((CommonUI_o *)Instance, selectedEquipUserSvtId, v12, v15, 0);
            return;
          }
LABEL_49:
          sub_2213CDC(servantItemDraw, v7);
        }
        equipTypeIndex = this->fields.equipTypeIndex;
        v22 = this;
        EquipFriendShipSkillChange_k__BackingField = 0;
        goto LABEL_48;
      }
      if ( equipType || this->fields.selectedEquipUserSvtId < 1 )
        goto LABEL_17;
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v7, v9);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !servantItemDraw )
        goto LABEL_49;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataMasterBase_object__object__long___GetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)servantItemDraw,
                                                                  this->fields.selectedEquipUserSvtId,
                                                                  (const MethodInfo_3F13190 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      grandSvtData = this->fields.grandSvtData;
      if ( !grandSvtData )
        goto LABEL_49;
      UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_49;
      if ( !servantItemDraw )
        goto LABEL_49;
      EquipUserServantIds_k__BackingField = grandSvtData->fields._EquipUserServantIds_k__BackingField;
      if ( !EquipUserServantIds_k__BackingField )
        goto LABEL_49;
      if ( (EquipUserServantIds_k__BackingField->max_length & 0xFFFFFFFE) == 0 )
        sub_2213CE4(servantItemDraw);
      v26 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
      hpIconLabel = servantItemDraw->fields.hpIconLabel;
      differHpIconLabel = servantItemDraw->fields.differHpIconLabel;
      v30 = EquipUserServantIds_k__BackingField->m_Items[1];
      v33 = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
      *(_QWORD *)&v51.fields.currentCryptoKey = v26;
      *(_QWORD *)&v51.fields.fakeValue = v27;
      v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v51, 0);
      *(_QWORD *)&v52.fields.currentCryptoKey = hpIconLabel;
      *(_QWORD *)&v52.fields.fakeValue = differHpIconLabel;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v52,
                                                                  0);
      if ( !v33 )
        goto LABEL_49;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)PartyOrganizationUtility__IsShowBondEquipGuideDialog(
                                                                  (PartyOrganizationUtility_o *)v33,
                                                                  v34,
                                                                  (int32_t)servantItemDraw,
                                                                  v30,
                                                                  0);
      if ( ((unsigned __int8)servantItemDraw & 1) == 0 )
      {
LABEL_17:
        v19 = this->fields.grandSvtData;
        if ( !v19 )
          goto LABEL_49;
        equipTypeIndex = this->fields.equipTypeIndex;
        EquipFriendShipSkillChange_k__BackingField = v19->fields._EquipFriendShipSkillChange_k__BackingField;
        v22 = this;
LABEL_48:
        GrandEquipGraphListMenu__RequestSetupEquip(v22, equipTypeIndex, EquipFriendShipSkillChange_k__BackingField, v10);
        return;
      }
      v35 = this->fields.grandSvtData;
      if ( !v35 )
        goto LABEL_49;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)v35->fields._UserServantEntity_k__BackingField;
      if ( !servantItemDraw )
        goto LABEL_49;
      ServantEntity = UserServantEntity__GetServantEntity((UserServantEntity_o *)servantItemDraw, -1, 0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v37 = this->fields.grandSvtData;
      if ( !v37 )
        goto LABEL_49;
      v38 = (CommonUI_o *)servantItemDraw;
      v39 = this->fields.selectedEquipUserSvtId;
      v40 = v37->fields._EquipFriendShipSkillChange_k__BackingField;
      v41 = (System_Action_bool__bool__int__o *)sub_2213CCC(System_Action_bool__bool__int__TypeInfo);
      System_Action_bool__bool__int____ctor(
        v41,
        (Il2CppObject *)this,
        Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__,
        0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      v42 = this->fields.grandSvtData;
      if ( !v42 )
        goto LABEL_49;
      v43 = (PartyOrganizationUtility_o *)servantItemDraw;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)v42->fields._UserServantEntity_k__BackingField;
      if ( !servantItemDraw )
        goto LABEL_49;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)UserServantEntity__get_BaseServantEntity(
                                                                  (UserServantEntity_o *)servantItemDraw,
                                                                  0);
      if ( !servantItemDraw )
        goto LABEL_49;
      m_CachedPtr = servantItemDraw->fields.m_CachedPtr;
      m_CancellationTokenSource = servantItemDraw->fields.m_CancellationTokenSource;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v44);
      *(_QWORD *)&v53.fields.currentCryptoKey = m_CachedPtr;
      *(_QWORD *)&v53.fields.fakeValue = m_CancellationTokenSource;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  v53,
                                                                  0);
      if ( !ServantEntity )
        goto LABEL_49;
      v47 = (int)servantItemDraw;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(
                                                                  ServantEntity->fields.id,
                                                                  0);
      if ( !v43 )
        goto LABEL_49;
      ServantShortName = PartyOrganizationUtility__GetServantShortName(v43, v47, (int32_t)servantItemDraw, 1, 0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ServantEntity__getClassName(ServantEntity, 0);
      v49 = this->fields.grandSvtData;
      if ( !v49 )
        goto LABEL_49;
      v50 = (System_String_o *)servantItemDraw;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)v49->fields._UserServantEntity_k__BackingField;
      if ( !servantItemDraw )
        goto LABEL_49;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)UserServantEntity__GetRarity(
                                                                  (UserServantEntity_o *)servantItemDraw,
                                                                  1,
                                                                  0);
      if ( !v38 )
        goto LABEL_49;
      CommonUI__OpenGrandBondEquipTargetConfirmDialog(
        v38,
        v39,
        v12,
        v40,
        v41,
        ServantShortName,
        v50,
        (int32_t)servantItemDraw,
        0);
    }
  }
  else
  {
    v16 = Method_GrandEquipGraphListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_2213A78(Method_GrandEquipGraphListMenu_ExitMenu__);
    v17 = (System_Reflection_MethodBase_o *)sub_2213A44(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
    GrandEquipGraphListMenu__ExitMenuCallback(this, 0, v18);
  }
}


void GrandEquipGraphListMenu__ExitMenuCallback(
        GrandEquipGraphListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_T__o *exitMenuCallback; // x21
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0

  if ( (byte_596B2F1 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_bool___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__Clear__);
    byte_596B2F1 = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exitMenuCallback,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  ActionExtensions__Call_bool_(
    exitMenuCallback,
    result == 1,
    (const MethodInfo_36FFD8C *)Method_ActionExtensions_Call_bool___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo
    || (System_Collections_Generic_Dictionary_long__int___Clear(
          otherUsedEquipInfo,
          (const MethodInfo_3FC95AC *)Method_System_Collections_Generic_Dictionary_long__int__Clear__),
        *(_QWORD *)&this->fields.otherUsedEquipHpSum = 0,
        (otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, 0, 0),
        CharaGraphListMenuBase__Close((CharaGraphListMenuBase_o *)this, 0, 0),
        otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.listViewManager,
        this->fields.state = 0,
        !otherUsedEquipInfo) )
  {
    sub_2213CDC(otherUsedEquipInfo, v11);
  }
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)otherUsedEquipInfo, 0);
}


System_String_o *GrandEquipGraphListMenu__GetLocalizationKeyForModeKindMain(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_596B2EB & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_12134/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_596B2EB = 1;
  }
  return (System_String_o *)StringLiteral_12134/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
}


void GrandEquipGraphListMenu__GetRemoveOtherEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v4; // x20
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x21
  const MethodInfo *v6; // x4
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v9; // x8

  v4 = this;
  if ( (byte_596B2F3 & 1) == 0 )
  {
    this = (GrandEquipGraphListMenu_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    byte_596B2F3 = 1;
  }
  if ( !selectItem )
    goto LABEL_10;
  otherUsedEquipInfo = v4->fields.otherUsedEquipInfo;
  this = (GrandEquipGraphListMenu_o *)((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))selectItem->klass->vtable._6_unknown.methodPtr)(
                                        selectItem,
                                        selectItem->klass->vtable._6_unknown.method,
                                        method);
  if ( !otherUsedEquipInfo )
    goto LABEL_10;
  this = (GrandEquipGraphListMenu_o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                        otherUsedEquipInfo,
                                        (int64_t)this,
                                        (const MethodInfo_3FC9384 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_10;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_10;
  if ( (unsigned int)this >= LODWORD(EquipUserServantEntities_k__BackingField->max_length) )
    sub_2213CE4(this);
  v9 = EquipUserServantEntities_k__BackingField->m_Items[(int)this];
  if ( !v9 )
LABEL_10:
    sub_2213CDC(this, selectItem);
  GrandEquipGraphListMenu__ChangeSelectEquip(v4, selectItem, v9->fields.hp, v9->fields.atk, v6);
}


void GrandEquipGraphListMenu__Init(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B2EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    byte_596B2EC = 1;
  }
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 1, 0);
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_3FC8A70 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.otherUsedEquipInfo = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.otherUsedEquipInfo, (int32_t)v3, v4, v5, v6, v7, v8, v9);
}


void GrandEquipGraphListMenu__OnClickEquipExplanation(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v4; // x20
  System_Func_object__bool__o *v5; // x21
  Il2CppObject *v6; // x0
  CharaGraphListViewItemBase_o *v7; // x20

  if ( (byte_596B2F5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_2213A60(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_2213A60(&Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__);
    byte_596B2F5 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__59254852(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v6 )
  {
    v7 = (CharaGraphListViewItemBase_o *)v6;
    listViewManager = (CharaGraphListViewManager_o *)this->fields.servantItemDraw;
    if ( listViewManager )
    {
      listViewManager = (CharaGraphListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)listViewManager,
                                                         0);
      if ( listViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0);
        CharaGraphListMenuBase__OnSelectServantAtKindStatus((CharaGraphListMenuBase_o *)this, v7, 0);
        return;
      }
    }
LABEL_9:
    sub_2213CDC(listViewManager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu__OnEndSelectServantStatus(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantItemDraw; // x0

  servantItemDraw = (UnityEngine_Component_o *)this->fields.servantItemDraw;
  if ( !servantItemDraw
    || (servantItemDraw = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantItemDraw, 0)) == 0 )
  {
    sub_2213CDC(servantItemDraw, isDecide);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, 1, 0);
  CharaGraphListMenuBase__OnEndSelectServantStatus((CharaGraphListMenuBase_o *)this, isDecide, isNeedSort, questId, 0);
}


void GrandEquipGraphListMenu__OnLongPressEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantItemDraw; // x0

  servantItemDraw = (UnityEngine_Component_o *)this->fields.servantItemDraw;
  if ( !servantItemDraw
    || (servantItemDraw = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantItemDraw, 0)) == 0 )
  {
    sub_2213CDC(servantItemDraw, selectItem);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, 0, 0);
  CharaGraphListMenuBase__OnSelectServantAtKindStatus((CharaGraphListMenuBase_o *)this, selectItem, 0);
}


void GrandEquipGraphListMenu__OnSelectEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x4
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_596B2F2 & 1) == 0 )
  {
    sub_2213A60(&Method_GrandEquipGraphListMenu_OnSelectEquip__);
    byte_596B2F2 = 1;
  }
  v5 = Method_GrandEquipGraphListMenu_OnSelectEquip__;
  svtItem = 0;
  commandCodeItem = 0;
  if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_OnSelectEquip__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_2213A78(Method_GrandEquipGraphListMenu_OnSelectEquip__);
  v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  CharaGraphListMenuBase__CastItem(selectItem, &svtItem, &commandCodeItem, 0);
  if ( !selectItem )
    sub_2213CDC(v7, v8);
  if ( selectItem->fields._IsUse_k__BackingField && !selectItem->fields._IsBase_k__BackingField )
    GrandEquipGraphListMenu__GetRemoveOtherEquip(this, selectItem, v9);
  else
    GrandEquipGraphListMenu__ChangeSelectEquip(this, selectItem, 0, 0, v10);
}


// attributes: thunk
void GrandEquipGraphListMenu__OnSelectServantAtKindMain(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu__OnSelectEquip(this, item, method);
}


// attributes: thunk
void GrandEquipGraphListMenu__OnSelectServantAtKindStatus(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu__OnLongPressEquip(this, item, method);
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu__Open(
        GrandEquipGraphListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t equipIndex,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0
  _BOOL8 v14; // x1
  __int64 v15; // x2
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v18; // x8
  __int128 v19; // q1
  struct GrandServantListSlotData_o *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x22
  System_Action_T1__T2__o *v22; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Int64_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t equipType; // w8
  int v38; // w9
  int32_t v39; // w4
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  int64_t selectedEquipUserSvtId; // x21
  SupportServantEquipServantItem_o *v42; // x22
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  int32_t v49; // w8
  CharaGraphSortOwnerGrandEquipRewardUp_o *v50; // x20
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  CharaGraphListMenuBase_CallbackFunc_o *v57; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596B2ED & 1) == 0 )
  {
    sub_2213A60(&System_Action_int__UserServantEntity__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_UserServantEntity___);
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_2213A60(&CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    sub_2213A60(&CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    sub_2213A60(&CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_2213A60(&Method_GrandEquipGraphListMenu__Open_b__19_0__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_2213A60(&SupportServantEquipServantItem_TypeInfo);
    byte_596B2ED = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  p_grandSvtData = &this->fields.grandSvtData;
  memset(&v59, 0, sizeof(v59));
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandSvtData,
    (int32_t)grandSvtSlotData,
    *(System_String_o **)&equipIndex,
    (System_String_o *)callback,
    (int32_t)method,
    v5,
    v6,
    v7);
  grandSvtData = this->fields.grandSvtData;
  this->fields.equipType = equipIndex;
  this->fields.equipTypeIndex = equipIndex;
  if ( !grandSvtData )
    goto LABEL_39;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_39;
  if ( LODWORD(EquipUserServantEntities_k__BackingField->max_length) <= equipIndex )
    sub_2213CE4(otherUsedEquipInfo);
  v18 = EquipUserServantEntities_k__BackingField->m_Items[equipIndex];
  if ( v18 )
  {
    v19 = *(_OWORD *)&v18->fields.id.fields.fakeValue;
    *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&v18->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v59.fields.fakeValue = v19;
  }
  else
  {
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v59, 0, 0);
  }
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v15);
  v58 = v59;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(
                                                                               &v58,
                                                                               0);
  v20 = this->fields.grandSvtData;
  this->fields.selectedEquipUserSvtId = (int64_t)otherUsedEquipInfo;
  if ( !v20 )
    goto LABEL_39;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v20->fields._EquipUserServantEntities_k__BackingField;
  v22 = (System_Action_T1__T2__o *)sub_2213CCC(System_Action_int__UserServantEntity__TypeInfo);
  System_Action_int__object____ctor(v22, (Il2CppObject *)this, Method_GrandEquipGraphListMenu__Open_b__19_0__, 0);
  BasicHelper__ForEach_object__58796788(
    v21,
    (System_Action_int__T__o *)v22,
    (const MethodInfo_3812AF4 *)Method_BasicHelper_ForEach_UserServantEntity___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  Keys = System_Collections_Generic_Dictionary_long__int___get_Keys(
           otherUsedEquipInfo,
           (const MethodInfo_3FC90CC *)Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
  v24 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.otherUsedEquipUserSvtIds = v24;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.otherUsedEquipUserSvtIds,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.exitMenuCallback = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.exitMenuCallback,
    (int32_t)callback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  equipType = this->fields.equipType;
  v38 = equipType == 1 ? 25 : 24;
  v39 = equipType == 2 ? 26 : v38;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)otherUsedEquipInfo, 0, 1, 0, v39, 0);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  TitleInfoControl__setBackBtnSprite_46859020((TitleInfoControl_o *)otherUsedEquipInfo, 1, 0, 0, 0);
  if ( !*p_grandSvtData )
    goto LABEL_39;
  UserServantEntity_k__BackingField = (*p_grandSvtData)->fields._UserServantEntity_k__BackingField;
  selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
  v42 = (SupportServantEquipServantItem_o *)sub_2213CCC(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v42, UserServantEntity_k__BackingField, selectedEquipUserSvtId, 0);
  this->fields.servantItemInfo = v42;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.servantItemInfo,
    (int32_t)v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo,
    this->fields.servantItemInfo,
    this->fields.otherUsedEquipHpSum,
    this->fields.otherUsedEquipAtkSum,
    0,
    0);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.bondSkillChangeMessageLabel;
  v14 = 0;
  if ( this->fields.equipType == 1 )
    v14 = this->fields.selectedEquipUserSvtId > 0;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, v14, 0);
  v49 = this->fields.equipType;
  if ( v49 == 2 )
  {
    v50 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_2213CCC(CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    CharaGraphSortOwnerGrandEquipRewardUp___ctor(v50, 0);
  }
  else if ( v49 == 1 )
  {
    v50 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_2213CCC(CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    CharaGraphSortOwnerGrandEquipBond___ctor((CharaGraphSortOwnerGrandEquipBond_o *)v50, 0);
  }
  else
  {
    v50 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_2213CCC(CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    CharaGraphSortOwnerGrandEquipNormal___ctor((CharaGraphSortOwnerGrandEquipNormal_o *)v50, 0);
  }
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v50;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._SortOwner_k__BackingField,
    (int32_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v57 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v57,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
    0);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v57, 0);
  if ( this->fields.equipType == 1 )
  {
    otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.charaGraphSortButtonGroup;
    if ( otherUsedEquipInfo )
    {
      CharaGraphSortButtonGroup__SetBonusFilterButtonState((CharaGraphSortButtonGroup_o *)otherUsedEquipInfo, 3, 1, 0);
      otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.charaGraphSortButtonGroup;
      if ( otherUsedEquipInfo )
      {
        CharaGraphSortButtonGroup__SetFilterButtonState((CharaGraphSortButtonGroup_o *)otherUsedEquipInfo, 3, 1, 0);
        goto LABEL_37;
      }
    }
LABEL_39:
    sub_2213CDC(otherUsedEquipInfo, v14);
  }
LABEL_37:
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_39;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu__RequestSetupEquip(
        GrandEquipGraphListMenu_o *this,
        int32_t index,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x20
  void *monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x22
  System_Func_long__long__o *v9; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0
  GrandEquipGraphListMenu_o *v11; // x22
  GrandEquipGraphListMenu_c **v12; // x10
  NetworkManager_ResultCallbackFunc_c *v13; // x0
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  _DWORD *v17; // x8

  v6 = (Il2CppObject *)this;
  if ( (byte_596B2F0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Select_long__long___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_2213A60(&System_Func_long__long__TypeInfo);
    sub_2213A60(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__);
    sub_2213A60(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__);
    sub_2213A60(&Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
    sub_2213A60(&NetworkManager_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596B2F0 = 1;
  }
  monitor = v6[14].monitor;
  if ( !monitor )
    goto LABEL_11;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 4);
  v9 = (System_Func_long__long__o *)sub_2213CCC(System_Func_long__long__TypeInfo);
  System_Func_long__long____ctor(v9, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__, 0);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__long_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_388F514 *)Method_System_Linq_Enumerable_Select_long__long___);
  this = (GrandEquipGraphListMenu_o *)System_Linq_Enumerable__ToArray_long_(
                                        v10,
                                        (const MethodInfo_389BAA4 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !this )
    goto LABEL_11;
  v11 = this;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= index )
    sub_2213CE4(this);
  v12 = &this->klass + index;
  v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
  v12[4] = (GrandEquipGraphListMenu_c *)v6[15].monitor;
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(v13);
  NetworkManager_ResultCallbackFunc___ctor(v14, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15, v16);
  this = (GrandEquipGraphListMenu_o *)NetworkManager__getRequest_object_(
                                        v14,
                                        (const MethodInfo_38F1B78 *)Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
  v17 = v6[14].monitor;
  if ( !v17 || !this )
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&index);
  SetupGrandServantEquipRequest__BeginRequest(
    (SetupGrandServantEquipRequest_o *)this,
    v17[10],
    (System_Int64_array *)v11,
    equipBondSkillChange,
    0);
}


bool GrandEquipGraphListMenu___AfterCreateList_b__20_0(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method,
           method) == this->fields.selectedEquipUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu___ExitMenu_b__21_0(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v8; // x20

  if ( (byte_596B2F8 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_596B2F8 = 1;
  }
  if ( isDecide )
  {
    GrandEquipGraphListMenu__RequestSetupEquip(this, this->fields.equipTypeIndex, equipBondSkillChange, method);
  }
  else
  {
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      sub_2213CDC(0, isDecide);
    SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 1, 0);
    this->fields.state = 2;
    v8 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    CharaGraphListMenuBase_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
      0);
    CharaGraphListMenuBase__add_CallbackOnExit((CharaGraphListMenuBase_o *)this, v8, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu___ExitMenu_b__21_1(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        bool changeBond,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v8; // x19
  GrandEquipGraphListMenu_o *v9; // x0
  int32_t equipTypeIndex; // w1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w2
  CharaGraphListMenuBase_CallbackFunc_o *v12; // x20
  struct GrandServantListSlotData_o *grandSvtData; // x8

  v8 = this;
  if ( (byte_596B2F9 & 1) == 0 )
  {
    sub_2213A60(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_2213A60(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_596B2F9 = 1;
  }
  if ( !isDecide )
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw;
    if ( this )
    {
      SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 1, 0);
      v8->fields.state = 2;
      v12 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_2213CCC(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
      CharaGraphListMenuBase_CallbackFunc___ctor(
        v12,
        (Il2CppObject *)v8,
        (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
        0);
      CharaGraphListMenuBase__add_CallbackOnExit((CharaGraphListMenuBase_o *)v8, v12, 0);
      return;
    }
    goto LABEL_11;
  }
  if ( !changeBond )
  {
    grandSvtData = v8->fields.grandSvtData;
    if ( grandSvtData )
    {
      equipTypeIndex = v8->fields.equipTypeIndex;
      EquipFriendShipSkillChange_k__BackingField = grandSvtData->fields._EquipFriendShipSkillChange_k__BackingField;
      v9 = v8;
      goto LABEL_10;
    }
LABEL_11:
    sub_2213CDC(this, isDecide);
  }
  v9 = v8;
  equipTypeIndex = 1;
  EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
LABEL_10:
  GrandEquipGraphListMenu__RequestSetupEquip(
    v9,
    equipTypeIndex,
    EquipFriendShipSkillChange_k__BackingField,
    *(const MethodInfo **)&equipBondSkillChange);
}


bool GrandEquipGraphListMenu___OnClickEquipExplanation_b__28_0(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method,
           method) == this->fields.selectedEquipUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void GrandEquipGraphListMenu___Open_b__19_0(
        GrandEquipGraphListMenu_o *this,
        int32_t i,
        UserServantEntity_o *elem,
        const MethodInfo *method)
{
  __int128 v7; // q1
  __int64 v8; // x1
  __int64 v9; // x2
  __int128 v10; // q1
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x22
  int v12; // w8
  int64_t v13; // x0
  __int64 v14; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+40h] [xbp-50h]

  if ( (byte_596B2F7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_596B2F7 = 1;
  }
  if ( elem )
  {
    v7 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
    *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v17.fields.fakeValue = v7;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, *(_QWORD *)&i, elem);
    v16 = v17;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v16, 0) != this->fields.selectedEquipUserSvtId )
    {
      v10 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
      otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
      v12 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v10;
      if ( !v12 )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8, v9);
      v15 = v17;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_56000612(&v15, 0);
      if ( !otherUsedEquipInfo )
        sub_2213CDC(v13, v14);
      System_Collections_Generic_Dictionary_long__int___Add(
        otherUsedEquipInfo,
        v13,
        i,
        (const MethodInfo_3FC9424 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
      *(int32x2_t *)&this->fields.otherUsedEquipHpSum = vadd_s32(
                                                          vrev64_s32(*(int32x2_t *)&elem->fields.atk),
                                                          *(int32x2_t *)&this->fields.otherUsedEquipHpSum);
    }
  }
}


int64_t GrandEquipGraphListMenu___RequestSetupEquip_b__22_0(
        GrandEquipGraphListMenu_o *this,
        int64_t id,
        const MethodInfo *method)
{
  if ( this->fields.selectedEquipUserSvtId == id )
    return 0;
  else
    return id;
}


void GrandEquipGraphListMenu___RequestSetupEquip_b__22_1(
        GrandEquipGraphListMenu_o *this,
        System_String_o *requestResult,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_596B2FA & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_596B2FA = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_23336/*"ng"*/, 0) )
    GrandEquipGraphListMenu__ExitMenuCallback(this, 1, v5);
}


void GrandEquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596B300 & 1) == 0 )
  {
    sub_2213A60(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_596B300 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(GrandEquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandEquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct GrandEquipGraphListMenu___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)GrandEquipGraphListMenu___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void GrandEquipGraphListMenu___c___ctor(GrandEquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool GrandEquipGraphListMenu___c___ChangeSelectEquip_b__26_0(
        GrandEquipGraphListMenu___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields._IsBase_k__BackingField;
}