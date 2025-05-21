void __fastcall GrandEquipGraphListMenu___ctor(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  CharaGraphListMenuBase___ctor((CharaGraphListMenuBase_o *)this, 0LL);
}


void __fastcall GrandEquipGraphListMenu__AfterCreateList(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v6; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x0

  if ( (byte_4B3F948 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, method);
    sub_1BDB878(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v3);
    sub_1BDB878(&Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__, v4);
    byte_4B3F948 = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_8;
  v6 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0LL);
  v7 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__AfterCreateList_b__20_0__,
    0LL);
  v8 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v8 )
    BYTE4(v8[9].klass) = 1;
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
LABEL_8:
    sub_1BDBAD4(listViewManager, method);
  ListViewManager__SortItem((ListViewManager_o *)listViewManager, -1, 0, -1, 0LL);
}


void __fastcall GrandEquipGraphListMenu__AssertionForSerializeField(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  CharaGraphListMenuBase__AssertionForSerializeField((CharaGraphListMenuBase_o *)this, 0LL);
}


void __fastcall GrandEquipGraphListMenu__ChangeSelectEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        int32_t temporarySubEquipHp,
        int32_t temporarySubEquipAtk,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *v7; // x22
  GrandEquipGraphListMenu_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v12; // x23
  GrandEquipGraphListMenu___c_c *v13; // x8
  System_Func_object__bool__o *_9__26_0; // x24
  Il2CppObject *v15; // x25
  struct GrandEquipGraphListMenu___c_StaticFields *static_fields; // x0
  Il2CppObject *v17; // x0
  CharaGraphListViewItemBase_c *klass; // x8

  v7 = selectItem;
  v8 = this;
  if ( (byte_4B3F94E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, selectItem);
    sub_1BDB878(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v9);
    sub_1BDB878(&Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__, v10);
    this = (GrandEquipGraphListMenu_o *)sub_1BDB878(&GrandEquipGraphListMenu___c_TypeInfo, v11);
    byte_4B3F94E = 1;
  }
  if ( !v7 )
    goto LABEL_23;
  if ( v7->fields._IsBase_k__BackingField )
  {
    selectItem = 0LL;
    v7->fields._IsBase_k__BackingField = 0;
  }
  else
  {
    this = (GrandEquipGraphListMenu_o *)v8->fields.listViewManager;
    if ( !this )
      goto LABEL_23;
    v12 = CharaGraphListViewManager__EnumerateItems((CharaGraphListViewManager_o *)this, 0LL);
    v13 = GrandEquipGraphListMenu___c_TypeInfo;
    if ( !GrandEquipGraphListMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(GrandEquipGraphListMenu___c_TypeInfo);
      v13 = GrandEquipGraphListMenu___c_TypeInfo;
    }
    _9__26_0 = (System_Func_object__bool__o *)v13->static_fields->__9__26_0;
    if ( !_9__26_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = GrandEquipGraphListMenu___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__26_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__26_0,
        v15,
        Method_GrandEquipGraphListMenu___c__ChangeSelectEquip_b__26_0__,
        0LL);
      static_fields = GrandEquipGraphListMenu___c_TypeInfo->static_fields;
      static_fields->__9__26_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__26_0;
      sub_1BDB81C(&static_fields->__9__26_0);
    }
    v17 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
            (System_Func_TSource__bool__o *)_9__26_0,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    if ( v17 )
      BYTE4(v17[9].klass) = 0;
    klass = v7->klass;
    v7->fields._IsBase_k__BackingField = 1;
    selectItem = (CharaGraphListViewItemBase_o *)((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))klass->vtable._6_unknown.method)(
                                                   v7,
                                                   klass->vtable._7_get_IsCanNotSelect.methodPtr);
  }
  if ( (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemInfo,
        v8->fields.selectedEquipUserSvtId = (int64_t)selectItem,
        !this)
    || (SupportServantEquipServantItem__SetEquipTarget(
          (SupportServantEquipServantItem_o *)this,
          (int64_t)selectItem,
          0LL),
        (this = (GrandEquipGraphListMenu_o *)v8->fields.servantItemDraw) == 0LL)
    || ((SupportServantEquipServantItemDraw__SetItem(
           (SupportServantEquipServantItemDraw_o *)this,
           v8->fields.servantItemInfo,
           v8->fields.otherUsedEquipHpSum - temporarySubEquipHp,
           v8->fields.otherUsedEquipAtkSum - temporarySubEquipAtk,
           0LL),
         this = (GrandEquipGraphListMenu_o *)v8->fields.bondSkillChangeMessageLabel,
         v8->fields.equipType != 1)
      ? (selectItem = 0LL)
      : (selectItem = (CharaGraphListViewItemBase_o *)(v8->fields.selectedEquipUserSvtId > 0)),
        !this) )
  {
LABEL_23:
    sub_1BDBAD4(this, selectItem);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, (bool)selectItem, 0LL);
  CharaGraphListMenuBase__ToInputState((CharaGraphListMenuBase_o *)v8, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewPatternBase_o *__fastcall GrandEquipGraphListMenu__CreateListViewPattern(
        GrandEquipGraphListMenu_o *this,
        int32_t kind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t equipType; // w8
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  System_Int64_array *v13; // x24
  int64_t v14; // x23
  __int64 v15; // x22
  __int64 v16; // x25
  int32_t v17; // w25
  __int64 v18; // x22
  const MethodInfo *v19; // x4
  System_Int64_array *otherUsedEquipUserSvtIds; // x23
  int64_t selectedEquipUserSvtId; // x24
  const MethodInfo *v22; // x3
  struct System_Int64_array *v23; // x23
  int64_t v24; // x24
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  v6 = this;
  if ( (byte_4B3F950 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphListViewPatternGrandEquipBond_TypeInfo, *(_QWORD *)&kind);
    sub_1BDB878(&CharaGraphListViewPatternGrandEquipNormal_TypeInfo, v7);
    sub_1BDB878(&CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo, v8);
    this = (GrandEquipGraphListMenu_o *)sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    byte_4B3F950 = 1;
  }
  equipType = v6->fields.equipType;
  if ( equipType == 2 )
  {
    otherUsedEquipUserSvtIds = v6->fields.otherUsedEquipUserSvtIds;
    selectedEquipUserSvtId = v6->fields.selectedEquipUserSvtId;
    v18 = sub_1BDBAC4(CharaGraphListViewPatternGrandEquipRewardUp_TypeInfo);
    CharaGraphListViewPatternGrandEquipRewardUp___ctor(
      (CharaGraphListViewPatternGrandEquipRewardUp_o *)v18,
      otherUsedEquipUserSvtIds,
      selectedEquipUserSvtId,
      v22);
  }
  else
  {
    if ( equipType != 1 )
    {
      v23 = v6->fields.otherUsedEquipUserSvtIds;
      v24 = v6->fields.selectedEquipUserSvtId;
      v18 = sub_1BDBAC4(CharaGraphListViewPatternGrandEquipNormal_TypeInfo);
      CharaGraphListViewPatternServantEquip___ctor((CharaGraphListViewPatternServantEquip_o *)v18, 0LL);
      *(_QWORD *)(v18 + 56) = v23;
      sub_1BDB81C(v18 + 56);
      *(_QWORD *)(v18 + 64) = v24;
      goto LABEL_14;
    }
    grandSvtData = v6->fields.grandSvtData;
    if ( !grandSvtData
      || (UserServantEntity_k__BackingField = grandSvtData->fields._UserServantEntity_k__BackingField) == 0LL )
    {
LABEL_16:
      sub_1BDBAD4(this, *(_QWORD *)&kind);
    }
    v13 = v6->fields.otherUsedEquipUserSvtIds;
    v14 = v6->fields.selectedEquipUserSvtId;
    v16 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
    v15 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v26.fields.currentCryptoKey = v16;
    *(_QWORD *)&v26.fields.fakeValue = v15;
    v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48227716(v26, 0LL);
    v18 = sub_1BDBAC4(CharaGraphListViewPatternGrandEquipBond_TypeInfo);
    CharaGraphListViewPatternGrandEquipBond___ctor((CharaGraphListViewPatternGrandEquipBond_o *)v18, v13, v14, v17, v19);
  }
  if ( !v18 )
    goto LABEL_16;
LABEL_14:
  *(_QWORD *)(v18 + 16) = v6->fields._SortOwner_k__BackingField;
  sub_1BDB81C(v18 + 16);
  *(_QWORD *)(v18 + 24) = v6->fields._RootInfo_k__BackingField;
  sub_1BDB81C(v18 + 24);
  *(_QWORD *)(v18 + 32) = setupInfo;
  sub_1BDB81C(v18 + 32);
  this = *(GrandEquipGraphListMenu_o **)(v18 + 16);
  if ( !this )
    goto LABEL_16;
  CharaGraphSortOwnerBase__SwitchCurrentViewSortUnit((CharaGraphSortOwnerBase_o *)this, kind, 0LL);
  return (CharaGraphListViewPatternBase_o *)v18;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu__ExitMenu(
        GrandEquipGraphListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  const MethodInfo *v13; // x2
  int32_t v14; // w20
  Il2CppObject *Instance; // x0
  int64_t selectedEquipUserSvtId; // x21
  CommonUI_o *v17; // x22
  System_Action_bool__int__o *v18; // x23
  _QWORD *v19; // x0
  System_Reflection_MethodBase_o *v20; // x0
  const MethodInfo *v21; // x2
  struct GrandServantListSlotData_o *grandSvtData; // x8
  int32_t EquipFriendShipSkillChange_k__BackingField; // w1
  GrandEquipGraphListMenu_o *v24; // x0

  if ( (byte_4B3F949 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_bool__int__TypeInfo, *(_QWORD *)&result);
    sub_1BDB878(&Method_GrandEquipGraphListMenu_ExitMenu__, v5);
    sub_1BDB878(&Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1BDB878(&StringLiteral_7005/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/, v8);
    byte_4B3F949 = 1;
  }
  if ( result )
  {
    if ( result == 1 )
    {
      v9 = Method_GrandEquipGraphListMenu_ExitMenu__;
      if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1BDB890(Method_GrandEquipGraphListMenu_ExitMenu__);
      v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 8, 0, 0LL);
      servantItemDraw = this->fields.servantItemDraw;
      if ( !servantItemDraw )
        goto LABEL_21;
      SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 0, 0LL);
      servantItemDraw = (SupportServantEquipServantItemDraw_o *)ConstantMaster__getValue(
                                                                  (System_String_o *)StringLiteral_7005/*"GRAND_FRIENDSHIP_EQUIP_SKILL_ID"*/,
                                                                  0LL);
      if ( (int)servantItemDraw >= 1 && this->fields.equipType == 1 )
      {
        if ( this->fields.selectedEquipUserSvtId >= 1 )
        {
          v14 = (int)servantItemDraw;
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
          v17 = (CommonUI_o *)Instance;
          v18 = (System_Action_bool__int__o *)sub_1BDBAC4(System_Action_bool__int__TypeInfo);
          System_Action_bool__int____ctor(
            v18,
            (Il2CppObject *)this,
            Method_GrandEquipGraphListMenu__ExitMenu_b__21_0__,
            0LL);
          if ( v17 )
          {
            CommonUI__OpenGrandBondEquipSkillSelectDialog(v17, selectedEquipUserSvtId, v14, v18, 0LL);
            return;
          }
LABEL_21:
          sub_1BDBAD4(servantItemDraw, v11);
        }
        v24 = this;
        EquipFriendShipSkillChange_k__BackingField = 0;
      }
      else
      {
        grandSvtData = this->fields.grandSvtData;
        if ( !grandSvtData )
          goto LABEL_21;
        EquipFriendShipSkillChange_k__BackingField = grandSvtData->fields._EquipFriendShipSkillChange_k__BackingField;
        v24 = this;
      }
      GrandEquipGraphListMenu__RequestSetupEquip(v24, EquipFriendShipSkillChange_k__BackingField, v13);
    }
  }
  else
  {
    v19 = Method_GrandEquipGraphListMenu_ExitMenu__;
    if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_ExitMenu__ + 83) & 2) != 0 )
      v19 = (_QWORD *)sub_1BDB890(Method_GrandEquipGraphListMenu_ExitMenu__);
    v20 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v19, v19[4]);
    OverwriteAssetSoundName__PlaySystemSe(v20, 1, 0, 0LL);
    GrandEquipGraphListMenu__ExitMenuCallback(this, 0, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu__ExitMenuCallback(
        GrandEquipGraphListMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_T__o *exitMenuCallback; // x21
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0

  if ( (byte_4B3F94B & 1) == 0 )
  {
    sub_1BDB878(&Method_ActionExtensions_Call_bool___, *(_QWORD *)&result);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__int__Clear__, v5);
    byte_4B3F94B = 1;
  }
  exitMenuCallback = (System_Action_T__o *)this->fields.exitMenuCallback;
  this->fields.exitMenuCallback = 0LL;
  sub_1BDB81C(&this->fields.exitMenuCallback);
  ActionExtensions__Call_bool_(
    exitMenuCallback,
    result == 1,
    (const MethodInfo_2F82EDC *)Method_ActionExtensions_Call_bool___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo
    || (System_Collections_Generic_Dictionary_long__int___Clear(
          otherUsedEquipInfo,
          (const MethodInfo_33793D0 *)Method_System_Collections_Generic_Dictionary_long__int__Clear__),
        *(_QWORD *)&this->fields.otherUsedEquipHpSum = 0LL,
        (otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, 0, 0LL),
        CharaGraphListMenuBase__Close((CharaGraphListMenuBase_o *)this, 0LL, 0LL),
        otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.listViewManager,
        this->fields.state = 0,
        !otherUsedEquipInfo) )
  {
    sub_1BDBAD4(otherUsedEquipInfo, v7);
  }
  CharaGraphListViewManager__SaveSortInfo((CharaGraphListViewManager_o *)otherUsedEquipInfo, 0LL);
}


System_String_o *__fastcall GrandEquipGraphListMenu__GetLocalizationKeyForModeKindMain(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B3F945 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_11595/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, method);
    byte_4B3F945 = 1;
  }
  return (System_String_o *)StringLiteral_11595/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
}


void __fastcall GrandEquipGraphListMenu__GetRemoveOtherEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v4; // x20
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x21
  __int64 v6; // x2
  const MethodInfo *v7; // x4
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v10; // x8

  v4 = this;
  if ( (byte_4B3F94D & 1) == 0 )
  {
    this = (GrandEquipGraphListMenu_o *)sub_1BDB878(
                                          &Method_System_Collections_Generic_Dictionary_long__int__get_Item__,
                                          selectItem);
    byte_4B3F94D = 1;
  }
  if ( !selectItem )
    goto LABEL_10;
  otherUsedEquipInfo = v4->fields.otherUsedEquipInfo;
  this = (GrandEquipGraphListMenu_o *)((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))selectItem->klass->vtable._6_unknown.method)(
                                        selectItem,
                                        selectItem->klass->vtable._7_get_IsCanNotSelect.methodPtr,
                                        method);
  if ( !otherUsedEquipInfo )
    goto LABEL_10;
  this = (GrandEquipGraphListMenu_o *)System_Collections_Generic_Dictionary_long__int___get_Item(
                                        otherUsedEquipInfo,
                                        (int64_t)this,
                                        (const MethodInfo_33791A8 *)Method_System_Collections_Generic_Dictionary_long__int__get_Item__);
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData )
    goto LABEL_10;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_10;
  if ( (unsigned int)this >= EquipUserServantEntities_k__BackingField->max_length )
    sub_1BDBADC(this, selectItem, v6);
  v10 = EquipUserServantEntities_k__BackingField->m_Items[(int)this];
  if ( !v10 )
LABEL_10:
    sub_1BDBAD4(this, selectItem);
  GrandEquipGraphListMenu__ChangeSelectEquip(v4, selectItem, v10->fields.hp, v10->fields.atk, v7);
}


void __fastcall GrandEquipGraphListMenu__Init(GrandEquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_long__int__o *v4; // x20

  if ( (byte_4B3F946 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__int___ctor__, method);
    sub_1BDB878(&System_Collections_Generic_Dictionary_long__int__TypeInfo, v3);
    byte_4B3F946 = 1;
  }
  CharaGraphListMenuBase__Init((CharaGraphListMenuBase_o *)this, 1, 0LL);
  v4 = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_long__int__TypeInfo);
  System_Collections_Generic_Dictionary_long__int____ctor(
    v4,
    (const MethodInfo_3378874 *)Method_System_Collections_Generic_Dictionary_long__int___ctor__);
  this->fields.otherUsedEquipInfo = v4;
  sub_1BDB81C(&this->fields.otherUsedEquipInfo);
}


void __fastcall GrandEquipGraphListMenu__OnClickEquipExplanation(
        GrandEquipGraphListMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListViewManager_o *listViewManager; // x0
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v6; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x0
  CharaGraphListViewItemBase_o *v9; // x20

  if ( (byte_4B3F94F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, method);
    sub_1BDB878(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v3);
    sub_1BDB878(&Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__, v4);
    byte_4B3F94F = 1;
  }
  listViewManager = this->fields.listViewManager;
  if ( !listViewManager )
    goto LABEL_9;
  v6 = CharaGraphListViewManager__EnumerateItems(listViewManager, 0LL);
  v7 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_GrandEquipGraphListMenu__OnClickEquipExplanation_b__28_0__,
    0LL);
  v8 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v8 )
  {
    v9 = (CharaGraphListViewItemBase_o *)v8;
    listViewManager = (CharaGraphListViewManager_o *)this->fields.servantItemDraw;
    if ( listViewManager )
    {
      listViewManager = (CharaGraphListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)listViewManager,
                                                         0LL);
      if ( listViewManager )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listViewManager, 0, 0LL);
        CharaGraphListMenuBase__OnSelectServantAtKindStatus((CharaGraphListMenuBase_o *)this, v9, 0LL);
        return;
      }
    }
LABEL_9:
    sub_1BDBAD4(listViewManager, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu__OnEndSelectServantStatus(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        bool isNeedSort,
        int32_t questId,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantItemDraw; // x0

  servantItemDraw = (UnityEngine_Component_o *)this->fields.servantItemDraw;
  if ( !servantItemDraw
    || (servantItemDraw = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantItemDraw, 0LL)) == 0LL )
  {
    sub_1BDBAD4(servantItemDraw, isDecide);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, 1, 0LL);
  CharaGraphListMenuBase__OnEndSelectServantStatus((CharaGraphListMenuBase_o *)this, isDecide, isNeedSort, questId, 0LL);
}


void __fastcall GrandEquipGraphListMenu__OnLongPressEquip(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *selectItem,
        const MethodInfo *method)
{
  UnityEngine_Component_o *servantItemDraw; // x0

  servantItemDraw = (UnityEngine_Component_o *)this->fields.servantItemDraw;
  if ( !servantItemDraw
    || (servantItemDraw = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(servantItemDraw, 0LL)) == 0LL )
  {
    sub_1BDBAD4(servantItemDraw, selectItem);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servantItemDraw, 0, 0LL);
  CharaGraphListMenuBase__OnSelectServantAtKindStatus((CharaGraphListMenuBase_o *)this, selectItem, 0LL);
}


void __fastcall GrandEquipGraphListMenu__OnSelectEquip(
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

  if ( (byte_4B3F94C & 1) == 0 )
  {
    sub_1BDB878(&Method_GrandEquipGraphListMenu_OnSelectEquip__, selectItem);
    byte_4B3F94C = 1;
  }
  v5 = Method_GrandEquipGraphListMenu_OnSelectEquip__;
  svtItem = 0LL;
  commandCodeItem = 0LL;
  if ( (*((_BYTE *)Method_GrandEquipGraphListMenu_OnSelectEquip__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_GrandEquipGraphListMenu_OnSelectEquip__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
  CharaGraphListMenuBase__CastItem(selectItem, &svtItem, &commandCodeItem, 0LL);
  if ( !selectItem )
    sub_1BDBAD4(v7, v8);
  if ( selectItem->fields._IsUse_k__BackingField && !selectItem->fields._IsBase_k__BackingField )
    GrandEquipGraphListMenu__GetRemoveOtherEquip(this, selectItem, v9);
  else
    GrandEquipGraphListMenu__ChangeSelectEquip(this, selectItem, 0, 0, v10);
}


// attributes: thunk
void __fastcall GrandEquipGraphListMenu__OnSelectServantAtKindMain(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu__OnSelectEquip(this, item, method);
}


// attributes: thunk
void __fastcall GrandEquipGraphListMenu__OnSelectServantAtKindStatus(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *item,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu__OnLongPressEquip(this, item, method);
}


void __fastcall GrandEquipGraphListMenu__Open(
        GrandEquipGraphListMenu_o *this,
        GrandServantListSlotData_o *grandSvtSlotData,
        int32_t equipIndex,
        System_Action_bool__o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct GrandServantListSlotData_o **p_grandSvtData; // x21
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x0
  _BOOL8 v22; // x1
  __int64 v23; // x2
  struct GrandServantListSlotData_o *grandSvtData; // x8
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x8
  UserServantEntity_o *v26; // x8
  __int128 v27; // q0
  struct GrandServantListSlotData_o *v28; // x8
  System_Collections_Generic_IEnumerable_T__o *v29; // x22
  System_Action_T1__T2__o *v30; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  int32_t equipType; // w8
  int v33; // w9
  int32_t v34; // w4
  UserServantEntity_o *UserServantEntity_k__BackingField; // x20
  int64_t selectedEquipUserSvtId; // x21
  SupportServantEquipServantItem_o *v37; // x22
  int32_t v38; // w8
  CharaGraphSortOwnerGrandEquipRewardUp_o *v39; // x20
  const MethodInfo *v40; // x1
  const MethodInfo *v41; // x1
  const MethodInfo *v42; // x1
  CharaGraphListMenuBase_CallbackFunc_o *v43; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+40h] [xbp-60h]

  if ( (byte_4B3F947 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__UserServantEntity__TypeInfo, grandSvtSlotData);
    sub_1BDB878(&Method_BasicHelper_ForEach_UserServantEntity___, v9);
    sub_1BDB878(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, v10);
    sub_1BDB878(&CharaGraphSortOwnerGrandEquipBond_TypeInfo, v11);
    sub_1BDB878(&CharaGraphSortOwnerGrandEquipNormal_TypeInfo, v12);
    sub_1BDB878(&CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo, v13);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__int__get_Keys__, v14);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_long___, v15);
    sub_1BDB878(&Method_GrandEquipGraphListMenu_ExitMenu__, v16);
    sub_1BDB878(&Method_GrandEquipGraphListMenu__Open_b__19_0__, v17);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1BDB878(&SupportServantEquipServantItem_TypeInfo, v19);
    byte_4B3F947 = 1;
  }
  this->fields.grandSvtData = grandSvtSlotData;
  p_grandSvtData = &this->fields.grandSvtData;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)sub_1BDB81C(&this->fields.grandSvtData);
  grandSvtData = this->fields.grandSvtData;
  this->fields.equipType = equipIndex;
  this->fields.equipTypeIndex = equipIndex;
  if ( !grandSvtData )
    goto LABEL_40;
  EquipUserServantEntities_k__BackingField = grandSvtData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
    goto LABEL_40;
  if ( EquipUserServantEntities_k__BackingField->max_length <= equipIndex )
    sub_1BDBADC(otherUsedEquipInfo, v22, v23);
  v26 = EquipUserServantEntities_k__BackingField->m_Items[equipIndex];
  if ( v26 )
  {
    v27 = *(_OWORD *)&v26->fields.id.fields.fakeValue;
    *(_OWORD *)&v46.fields.currentCryptoKey = *(_OWORD *)&v26->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v46.fields.fakeValue = v27;
  }
  else
  {
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v45, 0LL, 0LL);
    v46 = v45;
  }
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v44 = v46;
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(
                                                                               &v44,
                                                                               0LL);
  v28 = this->fields.grandSvtData;
  this->fields.selectedEquipUserSvtId = (int64_t)otherUsedEquipInfo;
  if ( !v28 )
    goto LABEL_40;
  v29 = (System_Collections_Generic_IEnumerable_T__o *)v28->fields._EquipUserServantEntities_k__BackingField;
  v30 = (System_Action_T1__T2__o *)sub_1BDBAC4(System_Action_int__UserServantEntity__TypeInfo);
  System_Action_int__object____ctor(v30, (Il2CppObject *)this, Method_GrandEquipGraphListMenu__Open_b__19_0__, 0LL);
  BasicHelper__ForEach_object__50461980(
    v29,
    (System_Action_int__T__o *)v30,
    (const MethodInfo_301FD1C *)Method_BasicHelper_ForEach_UserServantEntity___);
  otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  Keys = System_Collections_Generic_Dictionary_long__int___get_Keys(
           otherUsedEquipInfo,
           (const MethodInfo_3378F08 *)Method_System_Collections_Generic_Dictionary_long__int__get_Keys__);
  this->fields.otherUsedEquipUserSvtIds = System_Linq_Enumerable__ToArray_long_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                            (const MethodInfo_3070720 *)Method_System_Linq_Enumerable_ToArray_long___);
  sub_1BDB81C(&this->fields.otherUsedEquipUserSvtIds);
  this->fields.exitMenuCallback = callback;
  sub_1BDB81C(&this->fields.exitMenuCallback);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  equipType = this->fields.equipType;
  v33 = equipType == 1 ? 24 : 23;
  v34 = equipType == 2 ? 25 : v33;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)otherUsedEquipInfo, 0LL, 1, 0LL, v34, 0LL);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.titleInfo;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  TitleInfoControl__setBackBtnSprite_38890076((TitleInfoControl_o *)otherUsedEquipInfo, 1, 0, 0, 0LL);
  if ( !*p_grandSvtData )
    goto LABEL_40;
  UserServantEntity_k__BackingField = (*p_grandSvtData)->fields._UserServantEntity_k__BackingField;
  selectedEquipUserSvtId = this->fields.selectedEquipUserSvtId;
  v37 = (SupportServantEquipServantItem_o *)sub_1BDBAC4(SupportServantEquipServantItem_TypeInfo);
  SupportServantEquipServantItem___ctor(v37, UserServantEntity_k__BackingField, selectedEquipUserSvtId, 0LL);
  this->fields.servantItemInfo = v37;
  sub_1BDB81C(&this->fields.servantItemInfo);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  SupportServantEquipServantItemDraw__SetItem(
    (SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo,
    this->fields.servantItemInfo,
    this->fields.otherUsedEquipHpSum,
    this->fields.otherUsedEquipAtkSum,
    0LL);
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.bondSkillChangeMessageLabel;
  v22 = this->fields.equipType == 1 && (unsigned __int64)(this->fields.selectedEquipUserSvtId > 0);
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)otherUsedEquipInfo, v22, 0LL);
  v38 = this->fields.equipType;
  if ( v38 == 2 )
  {
    v39 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1BDBAC4(CharaGraphSortOwnerGrandEquipRewardUp_TypeInfo);
    CharaGraphSortOwnerGrandEquipRewardUp___ctor(v39, v41);
  }
  else if ( v38 == 1 )
  {
    v39 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1BDBAC4(CharaGraphSortOwnerGrandEquipBond_TypeInfo);
    CharaGraphSortOwnerGrandEquipBond___ctor((CharaGraphSortOwnerGrandEquipBond_o *)v39, v42);
  }
  else
  {
    v39 = (CharaGraphSortOwnerGrandEquipRewardUp_o *)sub_1BDBAC4(CharaGraphSortOwnerGrandEquipNormal_TypeInfo);
    CharaGraphSortOwnerGrandEquipNormal___ctor((CharaGraphSortOwnerGrandEquipNormal_o *)v39, v40);
  }
  this->fields._SortOwner_k__BackingField = (struct CharaGraphSortOwnerBase_o *)v39;
  sub_1BDB81C(&this->fields._SortOwner_k__BackingField);
  CharaGraphListMenuBase__set_ModeKind((CharaGraphListMenuBase_o *)this, 0, 0LL);
  v43 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1BDBAC4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
  CharaGraphListMenuBase_CallbackFunc___ctor(
    v43,
    (Il2CppObject *)this,
    (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
    0LL);
  CharaGraphListMenuBase__Open((CharaGraphListMenuBase_o *)this, v43, 0LL);
  if ( this->fields.equipType == 1 )
  {
    otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.charaGraphSortButtonGroup;
    if ( otherUsedEquipInfo )
    {
      CharaGraphSortButtonGroup__SetBonusFilterButtonState((CharaGraphSortButtonGroup_o *)otherUsedEquipInfo, 3, 1, 0LL);
      otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.charaGraphSortButtonGroup;
      if ( otherUsedEquipInfo )
      {
        CharaGraphSortButtonGroup__SetFilterButtonState((CharaGraphSortButtonGroup_o *)otherUsedEquipInfo, 3, 1, 0LL);
        goto LABEL_38;
      }
    }
LABEL_40:
    sub_1BDBAD4(otherUsedEquipInfo, v22);
  }
LABEL_38:
  otherUsedEquipInfo = (System_Collections_Generic_Dictionary_long__int__o *)this->fields.servantItemDraw;
  if ( !otherUsedEquipInfo )
    goto LABEL_40;
  SupportServantEquipServantItemDraw__SetInput((SupportServantEquipServantItemDraw_o *)otherUsedEquipInfo, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu__RequestSetupEquip(
        GrandEquipGraphListMenu_o *this,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  GrandEquipGraphListMenu_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct GrandServantListSlotData_o *grandSvtData; // x8
  __int64 v11; // x2
  __int64 equipTypeIndex; // x8
  System_Int64_array *v13; // x21
  NetworkManager_ResultCallbackFunc_o *v14; // x22
  struct GrandServantListSlotData_o *v15; // x8
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4B3F94A & 1) == 0 )
  {
    sub_1BDB878(
      &Method_System_Collections_Generic_Dictionary_long__int__TryGetValue__,
      *(_QWORD *)&equipBondSkillChange);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_long___, v5);
    sub_1BDB878(&Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__, v6);
    sub_1BDB878(&Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___, v7);
    sub_1BDB878(&NetworkManager_TypeInfo, v8);
    this = (GrandEquipGraphListMenu_o *)sub_1BDB878(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4B3F94A = 1;
  }
  value = 0;
  grandSvtData = v4->fields.grandSvtData;
  if ( !grandSvtData
    || (this = (GrandEquipGraphListMenu_o *)System_Linq_Enumerable__ToArray_long_(
                                              (System_Collections_Generic_IEnumerable_TSource__o *)grandSvtData->fields._EquipUserServantIds_k__BackingField,
                                              (const MethodInfo_3070720 *)Method_System_Linq_Enumerable_ToArray_long___)) == 0LL )
  {
LABEL_15:
    sub_1BDBAD4(this, *(_QWORD *)&equipBondSkillChange);
  }
  equipTypeIndex = v4->fields.equipTypeIndex;
  v13 = (System_Int64_array *)this;
  if ( (unsigned int)equipTypeIndex >= LODWORD(this->fields.m_CancellationTokenSource) )
    goto LABEL_16;
  *((_QWORD *)&this->fields.basePanelList + equipTypeIndex) = v4->fields.selectedEquipUserSvtId;
  this = (GrandEquipGraphListMenu_o *)v4->fields.otherUsedEquipInfo;
  if ( !this )
    goto LABEL_15;
  this = (GrandEquipGraphListMenu_o *)System_Collections_Generic_Dictionary_long__int___TryGetValue(
                                        (System_Collections_Generic_Dictionary_long__int__o *)this,
                                        v4->fields.selectedEquipUserSvtId,
                                        &value,
                                        (const MethodInfo_337A954 *)Method_System_Collections_Generic_Dictionary_long__int__TryGetValue__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( value < v13->max_length )
    {
      v13->m_Items[value] = 0LL;
      goto LABEL_10;
    }
LABEL_16:
    sub_1BDBADC(this, *(_QWORD *)&equipBondSkillChange, v11);
  }
LABEL_10:
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BDBAC4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)v4,
    Method_GrandEquipGraphListMenu__RequestSetupEquip_b__22_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  this = (GrandEquipGraphListMenu_o *)NetworkManager__getRequest_object_(
                                        v14,
                                        (const MethodInfo_30BC7D4 *)Method_NetworkManager_getRequest_SetupGrandServantEquipRequest___);
  v15 = v4->fields.grandSvtData;
  if ( !v15 || !this )
    goto LABEL_15;
  SetupGrandServantEquipRequest__BeginRequest(
    (SetupGrandServantEquipRequest_o *)this,
    v15->fields._GrandGraphId_k__BackingField,
    v13,
    equipBondSkillChange,
    0LL);
}


bool __fastcall GrandEquipGraphListMenu___AfterCreateList_b__20_0(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr,
           method) == this->fields.selectedEquipUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu___ExitMenu_b__21_0(
        GrandEquipGraphListMenu_o *this,
        bool isDecide,
        int32_t equipBondSkillChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  SupportServantEquipServantItemDraw_o *servantItemDraw; // x0
  CharaGraphListMenuBase_CallbackFunc_o *v9; // x20

  if ( (byte_4B3F952 & 1) == 0 )
  {
    sub_1BDB878(&CharaGraphListMenuBase_CallbackFunc_TypeInfo, isDecide);
    sub_1BDB878(&Method_GrandEquipGraphListMenu_ExitMenu__, v7);
    byte_4B3F952 = 1;
  }
  if ( isDecide )
  {
    GrandEquipGraphListMenu__RequestSetupEquip(this, equipBondSkillChange, *(const MethodInfo **)&equipBondSkillChange);
  }
  else
  {
    servantItemDraw = this->fields.servantItemDraw;
    if ( !servantItemDraw )
      sub_1BDBAD4(0LL, isDecide);
    SupportServantEquipServantItemDraw__SetInput(servantItemDraw, 1, 0LL);
    this->fields.state = 2;
    v9 = (CharaGraphListMenuBase_CallbackFunc_o *)sub_1BDBAC4(CharaGraphListMenuBase_CallbackFunc_TypeInfo);
    CharaGraphListMenuBase_CallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      (intptr_t)Method_GrandEquipGraphListMenu_ExitMenu__,
      0LL);
    CharaGraphListMenuBase__add_CallbackOnExit((CharaGraphListMenuBase_o *)this, v9, 0LL);
  }
}


bool __fastcall GrandEquipGraphListMenu___OnClickEquipExplanation_b__28_0(
        GrandEquipGraphListMenu_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr,
           method) == this->fields.selectedEquipUserSvtId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandEquipGraphListMenu___Open_b__19_0(
        GrandEquipGraphListMenu_o *this,
        int32_t i,
        UserServantEntity_o *elem,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int128 v8; // q1
  __int128 v9; // q0
  System_Collections_Generic_Dictionary_long__int__o *otherUsedEquipInfo; // x22
  int64_t v11; // x0
  __int64 v12; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+40h] [xbp-50h]

  if ( (byte_4B3F951 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_long__int__Add__, *(_QWORD *)&i);
    sub_1BDB878(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v7);
    byte_4B3F951 = 1;
  }
  if ( elem )
  {
    v8 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
    *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v15.fields.fakeValue = v8;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v14 = v15;
    if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v14, 0LL) != this->fields.selectedEquipUserSvtId )
    {
      v9 = *(_OWORD *)&elem->fields.id.fields.fakeValue;
      otherUsedEquipInfo = this->fields.otherUsedEquipInfo;
      *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&elem->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v15.fields.fakeValue = v9;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v13 = v15;
      v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48231240(&v13, 0LL);
      if ( !otherUsedEquipInfo )
        sub_1BDBAD4(v11, v12);
      System_Collections_Generic_Dictionary_long__int___Add(
        otherUsedEquipInfo,
        v11,
        i,
        (const MethodInfo_3379248 *)Method_System_Collections_Generic_Dictionary_long__int__Add__);
      *(int32x2_t *)&this->fields.otherUsedEquipHpSum = vadd_s32(
                                                          vrev64_s32(*(int32x2_t *)&elem->fields.atk),
                                                          *(int32x2_t *)&this->fields.otherUsedEquipHpSum);
    }
  }
}


void __fastcall GrandEquipGraphListMenu___RequestSetupEquip_b__22_0(
        GrandEquipGraphListMenu_o *this,
        System_String_o *requestResult,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  if ( (byte_4B3F953 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, requestResult);
    byte_4B3F953 = 1;
  }
  if ( System_String__op_Inequality(requestResult, (System_String_o *)StringLiteral_22233/*"ng"*/, 0LL) )
    GrandEquipGraphListMenu__ExitMenuCallback(this, 1, v5);
}


void __fastcall GrandEquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B3F954 & 1) == 0 )
  {
    sub_1BDB878(&GrandEquipGraphListMenu___c_TypeInfo, v1);
    byte_4B3F954 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(GrandEquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandEquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct GrandEquipGraphListMenu___c_o *)v2;
  sub_1BDB81C(GrandEquipGraphListMenu___c_TypeInfo->static_fields);
}


void __fastcall GrandEquipGraphListMenu___c___ctor(GrandEquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandEquipGraphListMenu___c___ChangeSelectEquip_b__26_0(
        GrandEquipGraphListMenu___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields._IsBase_k__BackingField;
}