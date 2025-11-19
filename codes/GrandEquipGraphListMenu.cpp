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

  if ( (byte_4CB101A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__);
    byte_4CB101A = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_8;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v6 )
    BYTE4(v6[9].monitor) = 1;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
LABEL_8:
    sub_1C6BC60(listViewManager, method);
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
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v9; // x23
  GrandEquipGraphListMenu___c_c *v10; // x8
  System_Func_object__bool__o *_9__26_0; // x24
  Il2CppObject *v12; // x25
  struct GrandEquipGraphListMenu___c_StaticFields *static_fields; // x0
  Il2CppObject *v14; // x0
  CharaGraphListViewItemBase_c *klass; // x8

  v7 = selectItem;
  v8 = this;
  if ( (byte_4CB1020 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__);
    this = (GrandEquipGraphListMenu_o *)sub_1C6BA08(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_4CB1020 = 1;
  }
  if ( !v7 )
    goto LABEL_23;
  if ( v7->fields._IsBase_k__BackingField )
  {
    selectItem = 0;
    v7->fields._IsBase_k__BackingField = 0;
  }
  else
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.listViewManager;
    if ( !this )
      goto LABEL_23;
    v9 = CharaGraphListViewManager__EnumerateItems((CharaGraphListViewManager_o *)this, 0);
    v10 = GrandEquipGraphListMenu___c_TypeInfo;
    if ( !GrandEquipGraphListMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandEquipGraphListMenu___c_TypeInfo);
      v10 = GrandEquipGraphListMenu___c_TypeInfo;
    }
    _9__26_0 = (System_Func_object__bool__o *)v10->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = GrandEquipGraphListMenu___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__26_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__26_0,
        v12,
        Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__,
        0);
      static_fields = GrandEquipGraphListMenu___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__26_0;
      sub_1C6B9AC(&static_fields->__9__26_0, _9__26_0);
    }
    v14 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
            (System_Collections_Generic_IEnumerable_TSource__o *)v9,
            (System_Func_TSource__bool__o *)_9__26_0,
            (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    if ( v14 )
      BYTE4(v14[9].monitor) = 0;
    klass = v7->klass;
    v7->fields._IsBase_k__BackingField = 1;
    selectItem = (CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))klass->vtable._6_unknown.methodPtr)(
                                                   v7,
                                                   klass->vtable._6_unknown.method);
  }
  if ( (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemInfo,
        v8->fields.selectedEquipUserSvtId = (int64_t)selectItem,
        !this)
    || (SupportServantEquipServantItem__SetEquipTarget((SupportServantEquipServantItem_o *)this, (int64_t)selectItem, 0),
        (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw) == 0)
    || ((SupportServantEquipServantItemDraw__SetItem(
           (SupportServantEquipServantItemDraw_o *)this,
           v8->fields.servantItemInfo,
           v8->fields.otherUsedEquipHpSum - temporarySubEquipHp,
           v8->fields.otherUsedEquipAtkSum - temporarySubEquipAtk,
           0),
         this = (GrandEquipGraphListMenu_o *)v8->fields.bondSkillChangeMessageLabel,
         v8->fields.equipType != 1)
      ? (selectItem = 0)
      : (selectItem = (CharaGraphListViewItemBase_o *)(v8->fields.selectedEquipUserSvtId > 0)),
        !this) )
  {
LABEL_23:
    sub_1C6BC60(this, selectItem);
  }
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
  if ( (byte_4CB1022 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    sub_1C6BA08(&CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    sub_1C6BA08(&CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4CB1022 = 1;
  }
  equipType = v6->fields.equipType;
  if ( equipType == 2 )
  {
    otherUsedEquipUserSvtIds = v6->fields.otherUsedEquipUserSvtIds;
    grandSvtData = v6->fields.grandSvtData;
    v10 = sub_1C6BC54(CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
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
      sub_1C6BC60(this, *(_QWORD *)&kind);
    v17 = v6->fields.otherUsedEquipUserSvtIds;
    v19 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v18 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = v19;
    *(_QWORD *)&v25.fields.fakeValue = v18;
    v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(v25, 0);
    v10 = sub_1C6BC54(CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    CharaGraphListViewPatternGrandEquipBond___ctor((CharaGraphListViewPatternGrandEquipBond_o *)v10, v17, v15, v20, v21);
  }
  else
  {
    v8 = v6->fields.otherUsedEquipUserSvtIds;
    v9 = v6->fields.grandSvtData;
    v10 = sub_1C6BC54(CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
    CharaGraphListViewPatternGrandEquipNormal___ctor((CharaGraphListViewPatternGrandEquipNormal_o *)v10, v8, v9, v11);
  }
  if ( !v10 )
    goto LABEL_15;
  SortOwner_k__BackingField = v6->fields._SortOwner_k__BackingField;
  *(_QWORD *)(v10 + 16) = SortOwner_k__BackingField;
  sub_1C6B9AC(v10 + 16, SortOwner_k__BackingField);
  RootInfo_k__BackingField = v6->fields._RootInfo_k__BackingField;
  *(_QWORD *)(v10 + 24) = RootInfo_k__BackingField;
  sub_1C6B9AC(v10 + 24, RootInfo_k__BackingField);
  *(_QWORD *)(v10 + 32) = setupInfo;
  sub_1C6B9AC(v10 + 32, setupInfo);
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
  const MethodInfo *v9; // x3
  int32_t equipType; // w8
  int32_t v11; // w20
  Il2CppObject *Instance; // x0
  int64_t selectedEquipUserSvtId; // x21
  CommonUI_o *v14; // x22
  System_Action_bool__int__o *v15; // x23
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  const MethodInfo *v18; // x2
  struct GrandServantListSlotData_o *v19; // x8
  int32_t equipTypeIndex; // w1
  int32_t EquipFriendShipSkillChange_k__BackingField; // w2
  GrandEquipGraphListMenu_o *v22; // x0
  Il2CppObject *Entity; // x22
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x21
  __int64 v27; // x23
  __int64 v28; // x24
  ServantEntity_o *v29; // x23
  int32_t v30; // w0
  Il2CppObject *v31; // x0
  struct GrandServantListSlotData_o *v32; // x8
  int32_t v33; // w23
  int64_t v34; // x22
  CommonUI_o *v35; // x21
  System_Action_bool__bool__int__o *v36; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_4CB101B & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_bool__int__TypeInfo);
    sub_1C6BA08(&System_Action_bool__bool__int__TypeInfo);
    sub_1C6BA08(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C6BA08(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&StringLiteral_6994/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/);
    byte_4CB101B = 1;
  }
  if ( result )
  {
    if ( result == 1 )
    {
      v5 = Method_GrandEquipGraphListMenu_ExitMenu__;
      if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C6BA20(Method_GrandEquipGraphListMenu_ExitMenu__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0, 0);
      servantItemDraw = this->fields.servantItemDraw;
      if ( !servantItemDraw )
        goto LABEL_36;
      SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 0, 0);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ConstantMaster__getValue(
                                                                  (System_String_o *)StringLiteral_6994/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/,
                                                                  0);
      equipType = this->fields.equipType;
      v11 = (int)servantItemDraw;
      if ( (int)servantItemDraw >= 1 && equipType == 1 )
      {
        if ( this->fields.selectedEquipUserSvtId >= 1 )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
          v14 = (CommonUI_o *)Instance;
          v15 = (System_Action_bool__int__o *)sub_1C6BC54(System_Action_bool__int__TypeInfo);
          System_Action_bool__int____ctor(
            v15,
            (Il2CppObject *)this,
            Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__,
            0);
          if ( v14 )
          {
            CommonUI__OpenGrandBondEquipSkillSelectDialog(v14, selectedEquipUserSvtId, v11, v15, 0);
            return;
          }
LABEL_36:
          sub_1C6BC60(servantItemDraw, v7);
        }
        equipTypeIndex = this->fields.equipTypeIndex;
        v22 = this;
        EquipFriendShipSkillChange_k__BackingField = 0;
        goto LABEL_21;
      }
      if ( equipType || this->fields.selectedEquipUserSvtId < 1 )
        goto LABEL_18;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_UserServantMaster___);
      if ( !servantItemDraw )
        goto LABEL_36;
      Entity = DataMasterBase_object__object__long___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)servantItemDraw,
                 this->fields.selectedEquipUserSvtId,
                 (const MethodInfo_33FB638 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ServantMaster___);
      grandSvtData = this->fields.grandSvtData;
      if ( !grandSvtData )
        goto LABEL_36;
      UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField;
      if ( !UserServantEntity_k__BackingField )
        goto LABEL_36;
      v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)servantItemDraw;
      v28 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
      v27 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v37.fields.currentCryptoKey = v28;
      *(_QWORD *)&v37.fields.fakeValue = v27;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
                                                                  v37,
                                                                  0);
      if ( !v26 )
        goto LABEL_36;
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)DataMasterBase_object__object__int___GetEntity(
                                                                  v26,
                                                                  (int32_t)servantItemDraw,
                                                                  (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      if ( !Entity )
        goto LABEL_36;
      v29 = (ServantEntity_o *)servantItemDraw;
      v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49233020(
              (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)Entity[5],
              0);
      v31 = DataMasterBase_object__object__int___GetEntity(
              v26,
              v30,
              (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ServantMaster__CheckFriendShipSvtEquip(
                                                                  (ServantMaster_o *)v26,
                                                                  v29,
                                                                  (ServantEntity_o *)v31,
                                                                  0);
      if ( ((unsigned __int8)servantItemDraw & 1) == 0 )
      {
LABEL_18:
        v19 = this->fields.grandSvtData;
        if ( !v19 )
          goto LABEL_36;
        equipTypeIndex = this->fields.equipTypeIndex;
        EquipFriendShipSkillChange_k__BackingField = v19->fields._EquipFriendShipSkillChange_k__BackingField;
        v22 = this;
LABEL_21:
        GrandEquipGraphListMenu__RequestSetupEquip(v22, equipTypeIndex, EquipFriendShipSkillChange_k__BackingField, v9);
        return;
      }
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v32 = this->fields.grandSvtData;
      if ( !v32 )
        goto LABEL_36;
      v33 = v32->fields._EquipFriendShipSkillChange_k__BackingField;
      v34 = this->fields.selectedEquipUserSvtId;
      v35 = (CommonUI_o *)servantItemDraw;
      v36 = (System_Action_bool__bool__int__o *)sub_1C6BC54(System_Action_bool__bool__int__TypeInfo);
      System_Action_bool__bool__int____ctor(
        v36,
        (Il2CppObject *)this,
        Method_GrandEquipGraphListMenu__ExitMenu_b__21_1__,
        0);
      if ( !v35 )
        goto LABEL_36;
      CommonUI__OpenGrandBondEquipTargetConfirmDialog(v35, v34, v11, v33, v36, 0);
    }
  }
  else
  {
    v16 = Method_GrandEquipGraphListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C6BA20(Method_GrandEquipGraphListMenu_ExitMenu__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 1, 0, 0);
    GrandEquipGraphListMenu__ExitMenuCallback(this, 0, v18);
  }
}


void GrandEquipGraphListMenu__ExitMenuCallback(
        GrandEquipGraphListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_Action_T__o *exitMenuCallback; // x21
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0

  if ( (byte_4CB101D & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_bool___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__int__Clear__);
    byte_4CB101D = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0;
  sub_1C6B9AC(&this->fields.exitMenuCallback, 0);
  ActionExtensions__Call_bool_(
    exitMenuCallback,
    result == 1,
    (const MethodInfo_3085E74 *)Method_ActionExtensions_Call_bool___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo
    || (System_Collections_Generic_Dictionary_long__int___Clear(
          otherUsedEquipInfo,
          (const MethodInfo_3491B4C *)Method_System_Collections_Generic_Dictionary_long__int__Clear__),
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
    sub_1C6BC60(otherUsedEquipInfo, v6);
  }
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)otherUsedEquipInfo, 0);
}


System_String_o *GrandEquipGraphListMenu__GetLocalizationKeyForModeKindMain(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB1017 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_11625/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    byte_4CB1017 = 1;
  }
  return (System_String_o *)StringLiteral_11625/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
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
  if ( (byte_4CB101F & 1) == 0 )
  {
    this = (GrandEquipGraphListMenu_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
    byte_4CB101F = 1;
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
                                        (const MethodInfo_3491924 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_10;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_10;
  if ( (unsigned int)this >= LODWORD(EquipUserServantEntities_k__BackingField->max_length) )
    sub_1C6BC68(this);
  v9 = EquipUserServantEntities_k__BackingField->m_Items[(int)this];
  if ( !v9 )
LABEL_10:
    sub_1C6BC60(this, selectItem);
  GrandEquipGraphListMenu__ChangeSelectEquip(v4, selectItem, v9->fields.hp, v9->fields.atk, v6);
}


void GrandEquipGraphListMenu__Init(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_long__int__o *v3; // x20

  if ( (byte_4CB1018 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_long__int__TypeInfo);
    byte_4CB1018 = 1;
  }
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 1, 0);
  v3 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v3,
    (const MethodInfo_3490FF0 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.otherUsedEquipInfo = v3;
  sub_1C6B9AC(&this->fields.otherUsedEquipInfo, v3);
}


void GrandEquipGraphListMenu__OnClickEquipExplanation(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v4; // x20
  System_Func_object__bool__o *v5; // x21
  Il2CppObject *v6; // x0
  CharaGraphListViewItemBase_o *v7; // x20

  if ( (byte_4CB1021 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__);
    byte_4CB1021 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  v4 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0);
  v5 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__,
    0);
  v6 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
         (System_Collections_Generic_IEnumerable_TSource__o *)v4,
         (System_Func_TSource__bool__o *)v5,
         (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
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
    sub_1C6BC60(listViewManager, method);
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
    sub_1C6BC60(servantItemDraw, isDecide);
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
    sub_1C6BC60(servantItemDraw, selectItem);
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

  if ( (byte_4CB101E & 1) == 0 )
  {
    sub_1C6BA08(&Method_GrandEquipGraphListMenu_OnSelectEquip__);
    byte_4CB101E = 1;
  }
  v5 = Method_GrandEquipGraphListMenu_OnSelectEquip__;
  svtItem = 0;
  commandCodeItem = 0;
  if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_OnSelectEquip__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C6BA20(Method_GrandEquipGraphListMenu_OnSelectEquip__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  CharaGraphListMenuBase__CastItem(selectItem, &svtItem, &commandCodeItem, 0);
  if ( !selectItem )
    sub_1C6BC60(v7, v8);
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


void GrandEquipGraphListMenu__Open(
        GrandEquipGraphListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t equipIndex,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0
  _BOOL8 v11; // x1
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v14; // x8
  __int128 v15; // q0
  struct GrandServantListSlotData_o *v16; // x8
  System_Collections_Generic_IEnumerable_T__o *v17; // x22
  System_Action_T1__T2__o *v18; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Int64_array *v20; // x0
  int32_t equipType; // w8
  int v22; // w9
  int32_t v23; // w4
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  int64_t selectedEquipUserSvtId; // x21
  SupportServantEquipServantItem_o *v26; // x22
  int32_t v27; // w8
  CharaGraphSortOwnerGrandEquipRewardUp_o *v28; // x20
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  CharaGraphListMenuBase_CallbackFunc_o *v32; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+40h] [xbp-60h]

  if ( (byte_4CB1019 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_int__UserServantEntity__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_UserServantEntity___);
    sub_1C6BA08(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C6BA08(&CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    sub_1C6BA08(&CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    sub_1C6BA08(&CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu_ExitMenu__);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__Open_b__19_0__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C6BA08(&SupportServantEquipServantItem_TypeInfo);
    byte_4CB1019 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  p_grandSvtData = &this->fields.grandSvtData;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)sub_1C6B9AC(
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
    sub_1C6BC68(otherUsedEquipInfo);
  v14 = EquipUserServantEntities_k__BackingField->m_Items[equipIndex];
  if ( v14 )
  {
    v15 = *(_OWORD *)&v14->fields.id.fields.fakeValue;
    *(_OWORD *)&v35.fields.currentCryptoKey = *(_OWORD *)&v14->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v35.fields.fakeValue = v15;
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
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(
                                                                               &v33,
                                                                               0);
  v16 = this->fields.grandSvtData;
  this->fields.selectedEquipUserSvtId = (int64_t)otherUsedEquipInfo;
  if ( !v16 )
    goto LABEL_40;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)v16->fields._EquipUserServantEntities_k__BackingField;
  v18 = (System_Action_T1__T2__o *)sub_1C6BC54(System_Action_int__UserServantEntity__TypeInfo);
  System_Action_int__object____ctor(v18, (Il2CppObject *)this, Method_GrandEquipGraphListMenu__Open_b__19_0__, 0);
  BasicHelper__ForEach_object__51540816(
    v17,
    (System_Action_int__T__o *)v18,
    (const MethodInfo_3127350 *)Method_BasicHelper_ForEach_UserServantEntity___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  Keys = System_Collections_Generic_Dictionary_long__int___get_Keys(
           otherUsedEquipInfo,
           (const MethodInfo_3491684 *)Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
  v20 = System_Linq_Enumerable__ToArray_long_(
          (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
          (const MethodInfo_317B1C0 *)Method_System_Linq_Enumerable_ToArray_long___);
  this->fields.otherUsedEquipUserSvtIds = v20;
  sub_1C6B9AC(&this->fields.otherUsedEquipUserSvtIds, v20);
  this->fields.exitMenuCallback = callback;
  sub_1C6B9AC(&this->fields.exitMenuCallback, callback);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  equipType = this->fields.equipType;
  v22 = equipType == 1 ? 24 : 23;
  v23 = equipType == 2 ? 25 : v22;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)otherUsedEquipInfo, 0, 1, 0, v23, 0);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  TitleInfoControl__setBackBtnSprite_40069396((TitleInfoControl_o *)otherUsedEquipInfo, 1, 0, 0, 0);
  if ( !*p_grandSvtData )
    goto LABEL_40;
  UserServantEntity_k__BackingField = (*p_grandSvtData)->fields._UserServantEntity_k__BackingField;
  selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
  v26 = (SupportServantEquipServantItem_o *)sub_1C6BC54(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v26, UserServantEntity_k__BackingField, selectedEquipUserSvtId, 0);
  this->fields.servantItemInfo = v26;
  sub_1C6B9AC(&this->fields.servantItemInfo, v26);
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
  v11 = this->fields.equipType == 1 && (unsigned __int64)(this->fields.selectedEquipUserSvtId > 0);
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, v11, 0);
  v27 = this->fields.equipType;
  if ( v27 == 2 )
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C6BC54(CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    CharaGraphSortOwnerGrandEquipRewardUp___ctor(v28, v30);
  }
  else if ( v27 == 1 )
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C6BC54(CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    CharaGraphSortOwnerGrandEquipBond___ctor((CharaGraphSortOwnerGrandEquipBond_o *)v28, v31);
  }
  else
  {
    v28 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1C6BC54(CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    CharaGraphSortOwnerGrandEquipNormal___ctor((CharaGraphSortOwnerGrandEquipNormal_o *)v28, v29);
  }
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v28;
  sub_1C6B9AC(&this->fields._SortOwner_k__BackingField, v28);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0);
  v32 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C6BC54(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
    sub_1C6BC60(otherUsedEquipInfo, v11);
  }
LABEL_38:
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
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
  NetworkManager_ResultCallbackFunc_o *v12; // x21
  _DWORD *v13; // x8

  v6 = (Il2CppObject *)this;
  if ( (byte_4CB101C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_long__long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C6BA08(&System_Func_long__long__TypeInfo);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__);
    sub_1C6BA08(&Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C6BA08(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CB101C = 1;
  }
  monitor = v6[14].monitor;
  if ( !monitor )
    goto LABEL_11;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)*((_QWORD *)monitor + 4);
  v9 = (System_Func_long__long__o *)sub_1C6BC54(System_Func_long__long__TypeInfo);
  System_Func_long__long____ctor(v9, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__, 0);
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__long_(
                                                               v8,
                                                               (System_Func_TSource__TResult__o *)v9,
                                                               (const MethodInfo_3170300 *)Method_System_Linq_Enumerable_Select_long__long___);
  this = (GrandEquipGraphListMenu_o *)System_Linq_Enumerable__ToArray_long_(
                                        v10,
                                        (const MethodInfo_317B1C0 *)Method_System_Linq_Enumerable_ToArray_long___);
  if ( !this )
    goto LABEL_11;
  v11 = this;
  if ( LODWORD(this->fields.m_CancellationTokenSource) <= index )
    sub_1C6BC68(this);
  *((_QWORD *)&this->fields.basePanelList + index) = v6[15].monitor;
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C6BC54(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v12, v6, Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_1__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (GrandEquipGraphListMenu_o *)NetworkManager__getRequest_object_(
                                        v12,
                                        (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
  v13 = v6[14].monitor;
  if ( !v13 || !this )
LABEL_11:
    sub_1C6BC60(this, *(_QWORD *)&index);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB1024 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_4CB1024 = 1;
  }
  if ( isDecide )
  {
    GrandEquipGraphListMenu__RequestSetupEquip(this, this->fields.equipTypeIndex, equipBondSkillChange, method);
  }
  else
  {
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      sub_1C6BC60(0, isDecide);
    SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 1, 0);
    this->fields.state = 2;
    v8 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C6BC54(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
  if ( (byte_4CB1025 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    this = (GrandEquipGraphListMenu_o *)sub_1C6BA08(&Method_GrandEquipGraphListMenu_ExitMenu__);
    byte_4CB1025 = 1;
  }
  if ( !isDecide )
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw;
    if ( this )
    {
      SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)this, 1, 0);
      v8->fields.state = 2;
      v12 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1C6BC54(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
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
    sub_1C6BC60(this, isDecide);
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
    sub_1C6BC60(this, 0);
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
  __int64 v11; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+40h] [xbp-50h]

  if ( (byte_4CB1023 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_long__int__Add__);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4CB1023 = 1;
  }
  if ( elem )
  {
    v7 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
    *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v14.fields.fakeValue = v7;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v13 = v14;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v13, 0) != this->fields.selectedEquipUserSvtId )
    {
      v8 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
      otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
      *(_OWORD *)&v14.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v14.fields.fakeValue = v8;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v12 = v14;
      v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49236544(&v12, 0);
      if ( !otherUsedEquipInfo )
        sub_1C6BC60(v10, v11);
      System_Collections_Generic_Dictionary_long__int___Add(
        otherUsedEquipInfo,
        v10,
        i,
        (const MethodInfo_34919C4 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
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

  if ( (byte_4CB1026 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB1026 = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_22301/*"ng"*/, 0) )
    GrandEquipGraphListMenu__ExitMenuCallback(this, 1, v5);
}


void GrandEquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4CB1027 & 1) == 0 )
  {
    sub_1C6BA08(&GrandEquipGraphListMenu___c_TypeInfo);
    byte_4CB1027 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(GrandEquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  GrandEquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct GrandEquipGraphListMenu___c_o *)v1;
  sub_1C6B9AC(GrandEquipGraphListMenu___c_TypeInfo->static_fields, v1);
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
    sub_1C6BC60(this, 0);
  return x->fields._IsBase_k__BackingField;
}