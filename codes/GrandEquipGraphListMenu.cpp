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

  if ( (byte_4C3DD52 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__);
    byte_4C3DD52 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_8;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v6 )
    BYTE4(v6[9].monitor) = 1;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
LABEL_8:
    sub_1C372B4(listViewManager);
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
  GrandEquipGraphListMenu_o *v8; // x19
  int64_t v9; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v10; // x23
  GrandEquipGraphListMenu___c_c *v11; // x8
  System_Func_object__bool__o *_9__26_0; // x24
  Il2CppObject *v13; // x25
  struct GrandEquipGraphListMenu___c_StaticFields *static_fields; // x0
  Il2CppObject *v15; // x0
  CharaGraphListViewItemBase_c *klass; // x8
  bool v17; // w1

  v8 = this;
  if ( (byte_4C3DD58 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__);
    this = (GrandEquipGraphListMenu_o *)sub_1C37058(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_4C3DD58 = 1;
  }
  if ( !selectItem )
    goto LABEL_23;
  if ( selectItem->fields._IsBase_k__BackingField )
  {
    v9 = 0;
    selectItem->fields._IsBase_k__BackingField = 0;
  }
  else
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.listViewManager;
    if ( !this )
      goto LABEL_23;
    v10 = CharaGraphListViewManager__EnumerateItems((CharaGraphListViewManager_o *)this, 0);
    v11 = GrandEquipGraphListMenu___c_TypeInfo;
    if ( !GrandEquipGraphListMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandEquipGraphListMenu___c_TypeInfo);
      v11 = GrandEquipGraphListMenu___c_TypeInfo;
    }
    _9__26_0 = (System_Func_object__bool__o *)v11->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v11->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v11);
        v11 = GrandEquipGraphListMenu___c_TypeInfo;
      }
      v13 = (Il2CppObject *)v11->static_fields->__9;
      _9__26_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__26_0,
        v13,
        Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__,
        0);
      static_fields = GrandEquipGraphListMenu___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__26_0;
      sub_1C36FFC(&static_fields->__9__26_0, _9__26_0);
    }
    v15 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
            (System_Collections_Generic_IEnumerable_TSource__o *)v10,
            (System_Func_TSource__bool__o *)_9__26_0,
            (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    if ( v15 )
      BYTE4(v15[9].monitor) = 0;
    klass = selectItem->klass;
    selectItem->fields._IsBase_k__BackingField = 1;
    v9 = ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))klass->vtable._6_unknown.methodPtr)(
           selectItem,
           klass->vtable._6_unknown.method);
  }
  if ( (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemInfo, v8->fields.selectedEquipUserSvtId = v9, !this)
    || (SupportServantEquipServantItem__SetEquipTarget((SupportServantEquipServantItem_o *)this, v9, 0),
        (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw) == 0)
    || ((SupportServantEquipServantItemDraw__SetItem(
           (SupportServantEquipServantItemDraw_o *)this,
           v8->fields.servantItemInfo,
           v8->fields.otherUsedEquipHpSum - temporarySubEquipHp,
           v8->fields.otherUsedEquipAtkSum - temporarySubEquipAtk,
           0),
         this = (GrandEquipGraphListMenu_o *)v8->fields.bondSkillChangeMessageLabel,
         v8->fields.equipType != 1)
      ? (v17 = 0)
      : (v17 = v8->fields.selectedEquipUserSvtId > 0),
        !this) )
  {
LABEL_23:
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v17, 0);
  CharaGraphListMenuBase__ToInputState((CharaGraphListMenuBase_o *)v8, 1, 0);
}


CharaGraphListViewPatternBase_o *GrandEquipGraphListMenu__CreateListViewPattern(
        GrandEquipGraphListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v6; // x21
  int32_t equipType; // w8
  System_Int64_array *v8; // x23
  GrandServantListSlotData_o *v9; // x24
  __int64 v10; // x22
  const MethodInfo *v11; // x3
  System_Int64_array *otherUsedEquipUserSvtIds; // x23
  GrandServantListSlotData_o *grandSvtData; // x24
  const MethodInfo *v14; // x3
  GrandServantListSlotData_o *v15; // x23
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  System_Int64_array *v17; // x24
  __int64 v18; // x22
  __int64 v19; // x25
  int32_t v20; // w25
  const MethodInfo *v21; // x4
  struct CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x1
  struct CharaGraphDefine_CharaGraphRootInfo_o *RootInfo_k__BackingField; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v6 = this;
  if ( (byte_4C3DD5A & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    sub_1C37058(&CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    sub_1C37058(&CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3DD5A = 1;
  }
  equipType = v6->fields.equipType;
  if ( equipType == 2 )
  {
    otherUsedEquipUserSvtIds = v6->fields.otherUsedEquipUserSvtIds;
    grandSvtData = v6->fields.grandSvtData;
    v10 = sub_1C372A4(CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    CharaGraphListViewPatternGrandEquipRewardUp___ctor(
      (CharaGraphListViewPatternGrandEquipRewardUp_o *)v10,
      otherUsedEquipUserSvtIds,
      grandSvtData,
      v14);
  }
  else if ( equipType == 1 )
  {
    v15 = v6->fields.grandSvtData;
    if ( !v15 || (UserServantEntity_k__BackingField = v15->fields._UserServantEntity_k__BackingField) == 0 )
LABEL_15:
      sub_1C372B4(this);
    v17 = v6->fields.otherUsedEquipUserSvtIds;
    v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v19;
    *(_QWORD *)&v25.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v25, 0);
    v10 = sub_1C372A4(CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    CharaGraphListViewPatternGrandEquipBond___ctor((CharaGraphListViewPatternGrandEquipBond_o *)v10, v17, v15, v20, v21);
  }
  else
  {
    v8 = v6->fields.otherUsedEquipUserSvtIds;
    v9 = v6->fields.grandSvtData;
    v10 = sub_1C372A4(CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    CharaGraphListViewPatternGrandEquipNormal___ctor((CharaGraphListViewPatternGrandEquipNormal_o *)v10, v8, v9, v11);
  }
  if ( !v10 )
    goto LABEL_15;
  SortOwner_k__BackingField = v6->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v10 + 16) = SortOwner_k__BackingField;
  sub_1C36FFC(v10 + 16, SortOwner_k__BackingField);
  RootInfo_k__BackingField = v6->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v10 + 24) = RootInfo_k__BackingField;
  sub_1C36FFC(v10 + 24, RootInfo_k__BackingField);
  *(_QWORD *)(v10 + 32) = setupInfo;
  sub_1C36FFC(v10 + 32, setupInfo);
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
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v8; // x3
  int32_t equipType; // w8
  int32_t v10; // w20
  Il2CppObject *Instance; // x0
  int64_t selectedEquipUserSvtId; // x21
  CommonUI_o *v13; // x22
  System_Action_bool__int__o *v14; // x23
  _QWORD *v15; // x0
  System_Reflection_MethodBase_o *v16; // x0
  const MethodInfo *v17; // x2
  struct GrandServantListSlotData_o *v18; // x8
  int32_t equipTypeIndex; // w1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w2
  GrandEquipGraphListMenu_o *v21; // x0
  Il2CppObject *Entity; // x22
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v25; // x21
  __int64 v26; // x23
  __int64 v27; // x24
  ServantEntity_o *v28; // x23
  int32_t v29; // w0
  Il2CppObject *v30; // x0
  struct GrandServantListSlotData_o *v31; // x8
  int32_t v32; // w23
  int64_t v33; // x22
  CommonUI_o *v34; // x21
  System_Action_bool__bool__int__o *v35; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v36; // 0:x0.16

  if ( (byte_4C3DD53 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__int__TypeInfo);
    sub_1C37058(&System_Action_bool__bool__int__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_1C37058(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__);
    sub_1C37058(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_4C3DD53 = 1;
  }
  if ( result )
  {
    if ( result == 1 )
    {
      v5 = Method_GrandEquipGraphListMenu_ExitMenu__;
      if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_GrandEquipGraphListMenu_ExitMenu__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      servantItemDraw = this->fields.servantItemDraw;
      if ( !servantItemDraw )
        goto LABEL_36;
      SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 0, 0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ConstantMaster__getValue(
                                                                  (System_String_o *)StringLiteral_7001/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/,
                                                                  0);
      equipType = this->fields.equipType;
      v10 = (int)servantItemDraw;
      if ( (int)servantItemDraw >= 1 && equipType == 1 )
      {
        if ( this->fields.selectedEquipUserSvtId >= 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
          v13 = (CommonUI_o *)Instance;
          v14 = (System_Action_bool__int__o *)sub_1C372A4(System_Action_bool__int__TypeInfo);
          System_Action_bool__int____ctor(
            v14,
            (Il2CppObject *)this,
            Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__,
            0);
          if ( v13 )
          {
            CommonUI__OpenGrandBondEquipSkillSelectDialog(v13, selectedEquipUserSvtId, v10, v14, 0);
            return;
          }
LABEL_36:
          sub_1C372B4(servantItemDraw);
        }
        equipTypeIndex = this->fields.equipTypeIndex;
        v21 = this;
        EquipFriendShipSkillChange_k__BackingField = 0;
        goto LABEL_21;
      }
      if ( equipType || this->fields.selectedEquipUserSvtId < 1 )
        goto LABEL_18;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !servantItemDraw )
        goto LABEL_36;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)servantItemDraw,
                 this->fields.selectedEquipUserSvtId,
                 (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantMaster___);
      grandSvtData = this->fields.grandSvtData;
      if ( !grandSvtData )
        goto LABEL_36;
      UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_36;
      v25 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantItemDraw;
      v27 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
      v26 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v36.fields.currentCryptoKey = v27;
      *(_QWORD *)&v36.fields.fakeValue = v26;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                                  v36,
                                                                  0);
      if ( !v25 )
        goto LABEL_36;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v25,
                                                                  (int32_t)servantItemDraw,
                                                                  (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_36;
      v28 = (ServantEntity_o *)servantItemDraw;
      v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
              0);
      v30 = DataMasterBase_object__object__int___GetEntity(
              v25,
              v29,
              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ServantMaster__CheckFriendShipSvtEquip(
                                                                  (ServantMaster_o *)v25,
                                                                  v28,
                                                                  (ServantEntity_o *)v30,
                                                                  0);
      if ( ((unsigned __int8)servantItemDraw & 1) == 0 )
      {
LABEL_18:
        v18 = this->fields.grandSvtData;
        if ( !v18 )
          goto LABEL_36;
        equipTypeIndex = this->fields.equipTypeIndex;
        EquipFriendShipSkillChange_k__BackingField = v18->fields._EquipFriendShipSkillChange_k__BackingField;
        v21 = this;
LABEL_21:
        GrandEquipGraphListMenu__RequestSetupEquip(v21, equipTypeIndex, EquipFriendShipSkillChange_k__BackingField, v8);
        return;
      }
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v31 = this->fields.grandSvtData;
      if ( !v31 )
        goto LABEL_36;
      v32 = v31->fields._EquipFriendShipSkillChange_k__BackingField;
      v33 = this->fields.selectedEquipUserSvtId;
      v34 = (CommonUI_o *)servantItemDraw;
      v35 = (System_Action_bool__bool__int__o *)sub_1C372A4(System_Action_bool__bool__int__TypeInfo);
      System_Action_bool__bool__int____ctor(
        v35,
        (Il2CppObject *)this,
        Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__,
        0);
      if ( !v34 )
        goto LABEL_36;
      CommonUI__OpenGrandBondEquipTargetConfirmDialog(v34, v33, v10, v32, v35, 0);
    }
  }
  else
  {
    v15 = Method_GrandEquipGraphListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
      v15 = (_QWORD *)sub_1C37070(Method_GrandEquipGraphListMenu_ExitMenu__);
    v16 = (System_Reflection_MethodBase_o *)sub_1C3703C(v15, v15[4]);
    OverwriteAssetSoundName__PlaySystemSe(v16, 1, 0, 0);
    GrandEquipGraphListMenu__ExitMenuCallback(this, 0, v17);
  }
}


void GrandEquipGraphListMenu__ExitMenuCallback(
        GrandEquipGraphListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_Action_T__o *exitMenuCallback; // x21
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0

  if ( (byte_4C3DD55 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int__Clear__);
    byte_4C3DD55 = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_1C36FFC(&this->fields.exitMenuCallback, 0);
  ActionExtensions__Call_bool_(
    exitMenuCallback,
    result == 1,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo
    || (System_Collections_Generic_Dictionary_long__int___Clear(
          otherUsedEquipInfo,
          (const MethodInfo_3439840 *)Method_System_Collections_Generic_Dictionary_long__int__Clear__),
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
    sub_1C372B4(otherUsedEquipInfo);
  }
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)otherUsedEquipInfo, 0);
}


System_String_o *GrandEquipGraphListMenu__GetLocalizationKeyForModeKindMain(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C3DD4F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11626/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4C3DD4F = 1;
  }
  return (System_String_o *)StringLiteral_11626/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
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
  if ( (byte_4C3DD57 & 1) == 0 )
  {
    this = (GrandEquipGraphListMenu_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    byte_4C3DD57 = 1;
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
                                        (const MethodInfo_3439618 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_10;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_10;
  if ( (unsigned int)this >= LODWORD(EquipUserServantEntities_k__BackingField->max_length) )
    sub_1C372BC(this);
  v9 = EquipUserServantEntities_k__BackingField->m_Items[(int)this];
  if ( !v9 )
LABEL_10:
    sub_1C372B4(this);
  GrandEquipGraphListMenu__ChangeSelectEquip(v4, selectItem, v9->fields.hp, v9->fields.atk, v6);
}


void GrandEquipGraphListMenu__Init(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20

  if ( (byte_4C3DD50 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    byte_4C3DD50 = 1;
  }
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 1, 0);
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_3438CE4 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.otherUsedEquipInfo = v3;
  sub_1C36FFC(&this->fields.otherUsedEquipInfo, v3);
}


void GrandEquipGraphListMenu__OnClickEquipExplanation(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v4; // x20
  System_Func_object__bool__o *v5; // x21
  Il2CppObject *v6; // x0
  CharaGraphListViewItemBase_o *v7; // x20

  if ( (byte_4C3DD59 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__);
    byte_4C3DD59 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
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
    sub_1C372B4(listViewManager);
  }
}


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
    sub_1C372B4(servantItemDraw);
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
    sub_1C372B4(servantItemDraw);
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
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  CharaGraphCommandCodeListViewItem_o *commandCodeItem; // [xsp+8h] [xbp-38h] BYREF
  CharaGraphServantListViewItemBase_o *svtItem; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3DD56 & 1) == 0 )
  {
    sub_1C37058(&Method_GrandEquipGraphListMenu_OnSelectEquip__);
    byte_4C3DD56 = 1;
  }
  v5 = Method_GrandEquipGraphListMenu_OnSelectEquip__;
  svtItem = 0;
  commandCodeItem = 0;
  if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_OnSelectEquip__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_GrandEquipGraphListMenu_OnSelectEquip__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  CharaGraphListMenuBase__CastItem(selectItem, &svtItem, &commandCodeItem, 0);
  if ( !selectItem )
    sub_1C372B4(v7);
  if ( selectItem->fields._IsUse_k__BackingField && !selectItem->fields._IsBase_k__BackingField )
    GrandEquipGraphListMenu__GetRemoveOtherEquip(this, selectItem, v8);
  else
    GrandEquipGraphListMenu__ChangeSelectEquip(this, selectItem, 0, 0, v9);
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


void GrandEquipGraphListMenu__Open(
        GrandEquipGraphListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t equipIndex,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v13; // x8
  __int128 v14; // q0
  struct GrandServantListSlotData_o *v15; // x8
  System_Collections_Generic_IEnumerable_T__o *v16; // x22
  System_Action_T1__T2__o *v17; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Int64_array *v19; // x0
  int32_t equipType; // w8
  int v21; // w9
  int32_t v22; // w4
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  int64_t selectedEquipUserSvtId; // x21
  SupportServantEquipServantItem_o *v25; // x22
  bool v26; // w1
  int32_t v27; // w8
  CharaGraphSortOwnerGrandEquipRewardUp_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  CharaGraphListMenuBase_CallbackFunc_o *v32; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  if ( (byte_4C3DD51 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__UserServantEntity__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_UserServantEntity___);
    sub_1C37058(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C37058(&CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    sub_1C37058(&CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    sub_1C37058(&CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C37058(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_1C37058(&Method_GrandEquipGraphListMenu__Open_b__19_0__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&SupportServantEquipServantItem_TypeInfo);
    byte_4C3DD51 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  p_grandSvtData = &this->fields.grandSvtData;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C36FFC(
                                                                               &this->fields.grandSvtData,
                                                                               grandSvtSlotData);
  grandSvtData = this->fields.grandSvtData;
  this->fields.equipType = equipIndex;
  this->fields.equipTypeIndex = equipIndex;
  if ( !grandSvtData )
    goto LABEL_40;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_40;
  if ( LODWORD(EquipUserServantEntities_k__BackingField->max_length) <= equipIndex )
    sub_1C372BC(otherUsedEquipInfo);
  v13 = EquipUserServantEntities_k__BackingField->m_Items[equipIndex];
  if ( v13 )
  {
    v14 = *(_OWORD *)&v13->fields.id.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v13->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v14;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v34, 0, 0);
    v35 = v34;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v33 = v35;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(
                                                                               &v33,
                                                                               0);
  v15 = this->fields.grandSvtData;
  this->fields.selectedEquipUserSvtId = (int64_t)otherUsedEquipInfo;
  if ( !v15 )
    goto LABEL_40;
  v16 = (System_Collections_Generic_IEnumerable_T__o *)v15->fields._EquipUserServantEntities_k__BackingField;
  v17 = (System_Action_T1__T2__o *)sub_1C372A4(System_Action_int__UserServantEntity__TypeInfo);
  System_Action_int__object____ctor(v17, (Il2CppObject *)this, Method_GrandEquipGraphListMenu__Open_b__19_0__, 0);
  BasicHelper__ForEach_object__51199768(
    v16,
    (System_Action_int__T__o *)v17,
    (const MethodInfo_30D3F18 *)Method_BasicHelper_ForEach_UserServantEntity___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  Keys = System_Collections_Generic_Dictionary_long__int___get_Keys(
           otherUsedEquipInfo,
           (const MethodInfo_3439378 *)Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
  v19 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.otherUsedEquipUserSvtIds = v19;
  sub_1C36FFC(&this->fields.otherUsedEquipUserSvtIds, v19);
  this->fields.exitMenuCallback = callback;
  sub_1C36FFC(&this->fields.exitMenuCallback, callback);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  equipType = this->fields.equipType;
  v21 = equipType == 1 ? 24 : 23;
  v22 = equipType == 2 ? 25 : v21;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)otherUsedEquipInfo, 0, 1, 0, v22, 0);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  TitleInfoControl__setBackBtnSprite_39841600((TitleInfoControl_o *)otherUsedEquipInfo, 1, 0, 0, 0);
  if ( !*p_grandSvtData )
    goto LABEL_40;
  UserServantEntity_k__BackingField = (*p_grandSvtData)->fields._UserServantEntity_k__BackingField;
  selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
  v25 = (SupportServantEquipServantItem_o *)sub_1C372A4(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v25, UserServantEntity_k__BackingField, selectedEquipUserSvtId, 0);
  this->fields.servantItemInfo = v25;
  sub_1C36FFC(&this->fields.servantItemInfo, v25);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo,
    this->fields.servantItemInfo,
    this->fields.otherUsedEquipHpSum,
    this->fields.otherUsedEquipAtkSum,
    0);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.bondSkillChangeMessageLabel;
  v26 = this->fields.equipType == 1 && this->fields.selectedEquipUserSvtId > 0;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, v26, 0);
  v27 = this->fields.equipType;
  if ( v27 == 2 )
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C372A4(CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    CharaGraphSortOwnerGrandEquipRewardUp___ctor(v28, v30);
  }
  else if ( v27 == 1 )
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C372A4(CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    CharaGraphSortOwnerGrandEquipBond___ctor((CharaGraphSortOwnerGrandEquipBond_o *)v28, v31);
  }
  else
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C372A4(CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    CharaGraphSortOwnerGrandEquipNormal___ctor((CharaGraphSortOwnerGrandEquipNormal_o *)v28, v29);
  }
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v28;
  sub_1C36FFC(&this->fields._SortOwner_k__BackingField, v28);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v32 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C372A4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v32,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
    0);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v32, 0);
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
        goto LABEL_38;
      }
    }
LABEL_40:
    sub_1C372B4(otherUsedEquipInfo);
  }
LABEL_38:
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo, 1, 0);
}


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
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  _DWORD *v13; // x8

  v6 = (Il2CppObject *)this;
  if ( (byte_4C3DD54 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_long__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C37058(&System_Func_long__long__TypeInfo);
    sub_1C37058(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__);
    sub_1C37058(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__);
    sub_1C37058(&Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3DD54 = 1;
  }
  monitor = v6[14].monitor;
  if ( !monitor )
    goto LABEL_11;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 4);
  v9 = (System_Func_long__long__o *)sub_1C372A4(System_Func_long__long__TypeInfo);
  System_Func_long__long____ctor(v9, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__, 0);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__long_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_311CB14 *)Method_System_Linq_Enumerable_Select_long__long___);
  this = (GrandEquipGraphListMenu_o *)System_Linq_Enumerable__ToArray_long_(
                                        v10,
                                        (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !this )
    goto LABEL_11;
  v11 = this;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= index )
    sub_1C372BC(this);
  *((_QWORD *)&this->fields.basePanelList + index) = v6[15].monitor;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v12, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (GrandEquipGraphListMenu_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
  v13 = v6[14].monitor;
  if ( !v13 || !this )
LABEL_11:
    sub_1C372B4(this);
  SetupGrandServantEquipRequest__BeginRequest(
    (SetupGrandServantEquipRequest_o *)this,
    v13[10],
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
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method,
           method) == this->fields.selectedEquipUserSvtId;
}


void GrandEquipGraphListMenu___ExitMenu_b__21_0(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v8; // x20

  if ( (byte_4C3DD5C & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_4C3DD5C = 1;
  }
  if ( isDecide )
  {
    GrandEquipGraphListMenu__RequestSetupEquip(this, this->fields.equipTypeIndex, equipBondSkillChange, method);
  }
  else
  {
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      sub_1C372B4(0);
    SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 1, 0);
    this->fields.state = 2;
    v8 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C372A4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
  int32_t equipTypeIndex; // w1
  GrandEquipGraphListMenu_o *v10; // x0
  int32_t EquipFriendShipSkillChange_k__BackingField; // w2
  CharaGraphListMenuBase_CallbackFunc_o *v12; // x20
  struct GrandServantListSlotData_o *grandSvtData; // x8

  v8 = this;
  if ( (byte_4C3DD5D & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C37058(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_4C3DD5D = 1;
  }
  if ( !isDecide )
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw;
    if ( this )
    {
      SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 1, 0);
      v8->fields.state = 2;
      v12 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C372A4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
      v10 = v8;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(this);
  }
  equipTypeIndex = 1;
  v10 = v8;
  EquipFriendShipSkillChange_k__BackingField = equipBondSkillChange;
LABEL_10:
  GrandEquipGraphListMenu__RequestSetupEquip(
    v10,
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
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method,
           method) == this->fields.selectedEquipUserSvtId;
}


void GrandEquipGraphListMenu___Open_b__19_0(
        GrandEquipGraphListMenu_o *this,
        int32_t i,
        UserServantEntity_o *elem,
        const MethodInfo *method)
{
  __int128 v7; // q1
  __int128 v8; // q0
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x22
  int64_t v10; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+40h] [xbp-50h]

  if ( (byte_4C3DD5B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4C3DD5B = 1;
  }
  if ( elem )
  {
    v7 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
    *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v13.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v12 = v13;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v12, 0) != this->fields.selectedEquipUserSvtId )
    {
      v8 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
      otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
      *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v13.fields.fakeValue = v8;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v11 = v13;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v11, 0);
      if ( !otherUsedEquipInfo )
        sub_1C372B4(v10);
      System_Collections_Generic_Dictionary_long__int___Add(
        otherUsedEquipInfo,
        v10,
        i,
        (const MethodInfo_34396B8 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
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

  if ( (byte_4C3DD5E & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_22215/*"ng"*/);
    byte_4C3DD5E = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_22215/*"ng"*/, 0) )
    GrandEquipGraphListMenu__ExitMenuCallback(this, 1, v5);
}


void GrandEquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3DD5F & 1) == 0 )
  {
    sub_1C37058(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_4C3DD5F = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(GrandEquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandEquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct GrandEquipGraphListMenu___c_o *)v1;
  sub_1C36FFC(GrandEquipGraphListMenu___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
  return x->fields._IsBase_k__BackingField;
}