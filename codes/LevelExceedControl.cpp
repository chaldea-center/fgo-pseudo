void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  LevelExceedControl_o *v4; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *materialItemObjList; // x20
  signed int v6; // w22
  int v7; // w23
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_438A776 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    this = (LevelExceedControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    byte_438A776 = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_11;
    v6 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v6 >= 1 )
    {
      this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      if ( this )
      {
        v7 = 0;
        do
        {
          itemInfoPrefab = v4->fields.itemInfoPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (LevelExceedControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v4,
                                           itemInfoPrefab,
                                           transform,
                                           0LL,
                                           0LL);
          if ( !materialItemObjList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            materialItemObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
          if ( ++v7 >= v6 )
            return;
          this = (LevelExceedControl_o *)v4->fields.itemListGrid;
          materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.materialItemObjList;
        }
        while ( this );
      }
LABEL_11:
      sub_B7769C(this, consumeList);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_438A773 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3412/*"CONDUCTION_COMBINE"*/);
    sub_B775C4(&StringLiteral_3413/*"CONDUCTION_COMBINE_MSG"*/);
    byte_438A773 = 1;
  }
  conductionWireInfo = this->fields.conductionWireInfo;
  if ( !conductionWireInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  baseData = this->fields.baseData;
  if ( !baseData )
    return;
  if ( !UserServantEntity__isLimitCountMax(baseData, 0LL) )
    goto LABEL_9;
  conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.baseData;
  if ( !conductionWireInfo )
    goto LABEL_17;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)conductionWireInfo, 0LL) )
  {
LABEL_9:
    conductionWireInfo = (UnityEngine_GameObject_o *)this->fields.combineInfoComp;
    if ( conductionWireInfo )
    {
      CombineInfoComponent__HideResStatusInfo((CombineInfoComponent_o *)conductionWireInfo, 0LL);
      conductionWireLabel = this->fields.conductionWireLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_3413/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3412/*"CONDUCTION_COMBINE"*/,
                                                           0LL);
        if ( conductionButtonLabel )
        {
          UILabel__set_text(conductionButtonLabel, (System_String_o *)conductionWireInfo, 0LL);
          conductionWireInfo = this->fields.conductionWireInfo;
          if ( conductionWireInfo )
          {
            UnityEngine_GameObject__SetActive(conductionWireInfo, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B7769C(conductionWireInfo, method);
  }
}


void __fastcall LevelExceedControl__CheckIsSelectBaseSvt(
        LevelExceedControl_o *this,
        UserServantEntity_o *selectBase,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct UserServantEntity_o *baseUserServantEntity; // x8
  BattleServantConfConponent_o *p_baseUserServantEntity; // x21
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  const MethodInfo *v15; // x1
  __int64 v16; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+40h] [xbp-40h]

  if ( (byte_438A771 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438A771 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v20.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v20.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v19 = v20;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v19, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v18, 0LL) )
        LevelExceedControl__InitDispInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B7769C(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B77560(
    p_baseUserServantEntity,
    (System_Int32_array **)selectBase,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


bool __fastcall LevelExceedControl__CheckItemHaveNum(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v4; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v6; // x8

  v2 = this;
  if ( (byte_438A778 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__);
    this = (LevelExceedControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__);
    byte_438A778 = 1;
  }
  itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B7769C(this, method);
  v4 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v4 >= size )
      return 1;
    if ( size <= (unsigned int)v4 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v6 = itemInfoList_k__BackingField->fields._items->m_Items[v4];
    if ( !v6 )
      goto LABEL_11;
    if ( !v6->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
    ++v4;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_11;
  }
}


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int32_t v5; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_438A77A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A77A = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0LL);
  v5 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
      if ( !itemListGrid )
        break;
      itemListGrid = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)itemListGrid,
                                                  v5,
                                                  0LL);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_B7769C(itemListGrid, method);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v5; // x20
  int32_t v6; // w21
  const MethodInfo *v7; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438A774 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_CommonConsumeMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438A774 = 1;
  }
  consumeList = 0LL;
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_12;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v5 = SvtExceedEnt;
  v6 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_12:
    sub_B7769C(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v6, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v5, &consumeList, v7);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v5; // x1
  UIWidget_o *v6; // x20
  int v7; // s0
  const MethodInfo *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v27; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_438A76F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438A76F = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  itemListGrid = System_Int32__ToString((int)this + 232, 0LL);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, itemListGrid, 0LL);
  v6 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
  if ( !v6 )
    goto LABEL_19;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v7, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v11);
  this->fields.itemIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.itemIdList, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v18;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.materialItemObjList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_19;
  itemInfoPrefab = this->fields.itemInfoPrefab;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)itemListGrid, 0LL);
  itemListGrid = (System_String_o *)BaseMonoBehaviour__createObject(
                                      (BaseMonoBehaviour_o *)this,
                                      itemInfoPrefab,
                                      transform,
                                      0LL,
                                      0LL);
  if ( !this->fields.materialItemObjList )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.materialItemObjList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)itemListGrid,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_19;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v27);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    itemListGrid = (System_String_o *)*p_charaGraph;
    if ( !*p_charaGraph )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)itemListGrid,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v31, v32, v33, v34, v35, v36);
  }
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_19:
    sub_B7769C(itemListGrid, v5);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, 0LL);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_438A76E & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_9003/*"MSG_PRESELECT_BASE_SVT"*/);
    byte_438A76E = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v5);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v6);
  helpBtn = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9003/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_12:
    sub_B7769C(helpBtn, v3);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438A77C & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_438A77C = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B7769C(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_438A77B & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/);
    byte_438A77B = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v3 = LocalizationManager__Get((System_String_o *)StringLiteral_3457/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B7769C(v3, v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v3,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExecute(LevelExceedControl_o *this, const MethodInfo *method)
{
  SetRarityDialogControl_o *exeCombineDlg; // x0

  exeCombineDlg = this->fields.exeCombineDlg;
  if ( !exeCombineDlg )
    sub_B7769C(0LL, method);
  SetRarityDialogControl__SetConfirmLvExceed_29921676(
    exeCombineDlg,
    this->fields.materialItemObjList,
    this->fields.itemIdList,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    0LL);
}


void __fastcall LevelExceedControl__SetAddConsumeItem(
        LevelExceedControl_o *this,
        ServantExceedEntity_o *svtExceedEnt,
        CommonConsumeEntity_array **consumeList,
        const MethodInfo *method)
{
  CommonConsumeEntity_o *v7; // x21
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  CommonConsumeEntity_array *v14; // x19
  __int64 v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x8
  char *v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_438A775 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Resize_CommonConsumeEntity___);
    sub_B775C4(&CommonConsumeEntity_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_SvtCoinMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438A775 = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v7 = (CommonConsumeEntity_o *)sub_B77694(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v7, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_22;
    v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v13 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v26.fields.currentCryptoKey = v13;
    *(_QWORD *)&v26.fields.fakeValue = v12;
    Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                               v26,
                                               0LL);
    if ( !v11
      || (Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v11,
                                             (int32_t)Master_WarQuestSelectionMaster,
                                             (const MethodInfo_21FB894 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v7
      || (v7->fields.objectId = *((_DWORD *)Master_WarQuestSelectionMaster + 6),
          v7->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_WarBoardSquareIndexData_(
            (WarBoardSquareIndexData_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_223C85C *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v14 = *consumeList) == 0LL) )
    {
LABEL_22:
      sub_B7769C(Master_WarQuestSelectionMaster, v9);
    }
    v15 = sub_B77684(v7, v14->obj.klass->_1.element_class);
    if ( !v15 )
    {
      v24 = sub_B776BC(0LL);
      sub_B77668(v24, 0LL);
    }
    v22 = *(_QWORD *)&v14->max_length;
    if ( !(_DWORD)v22 )
    {
      v25 = sub_B776C8(v15);
      sub_B77668(v25, 0LL);
    }
    v23 = (char *)v14 + (((v22 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v23 + 4) = v7;
    sub_B77560((BattleServantConfConponent_o *)(v23 + 32), (System_Int32_array **)v7, v16, v17, v18, v19, v20, v21);
  }
}


void __fastcall LevelExceedControl__SetBaseSvtCardImg(
        LevelExceedControl_o *this,
        UserServantEntity_o *usrSvtData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x23
  __int64 v15; // x24
  ServantLimitImageMaster_o *v16; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v20; // w22
  struct UICharaGraphTexture_o *TexturePrefab_31047328; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_438A772 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438A772 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseData,
    (System_Int32_array **)usrSvtData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !usrSvtData )
    goto LABEL_16;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(usrSvtData, 0, 0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v15 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v14 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v16 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v15;
  *(_QWORD *)&v28.fields.fakeValue = v14;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v28, 0LL);
  if ( !v16 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v16,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v20 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_31047328 = CharaGraphManager__CreateTexturePrefab_31047328(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v20,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_31047328;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_31047328,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B7769C(Instance, v11);
  UICharaGraphTexture__SetCharacter_36683416((UICharaGraphTexture_o *)Instance, usrSvtData, v20, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  struct UserServantEntity_o *baseData; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  struct UserServantEntity_o *v14; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v15; // x8
  struct UserServantEntity_o *v16; // x8
  struct UserServantEntity_o *v17; // x8
  struct UserServantEntity_o *v18; // x8
  struct UserServantEntity_o *v19; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v21; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v23; // x2
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  int size; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x26
  int v42; // w27
  struct System_Collections_Generic_List_GameObject__o *v43; // x22
  LevelExceedControl_o *v44; // x22
  unsigned int max_length; // w8
  _BOOL4 v46; // w9
  CommonConsumeEntity_o *v47; // x8
  int32_t objectId; // w23
  struct System_Int32_array *itemIdList; // x9
  int32_t num; // w24
  struct UserServantEntity_o *v51; // x8
  __int128 v52; // q0
  const MethodInfo *v53; // x4
  UIWidget_o *v54; // x20
  int v55; // s0
  const MethodInfo *v59; // x1
  UIWidget_o *v60; // x20
  int v61; // s0
  const MethodInfo *v65; // x1
  const MethodInfo *v66; // x1
  __int64 v67; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+30h] [xbp-80h]
  float barExp; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t lateExp; // [xsp+58h] [xbp-58h] BYREF
  int32_t exp; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  v2 = this;
  if ( (byte_438A777 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CombineSvtData_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (LevelExceedControl_o *)sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438A777 = 1;
  }
  exp = 0;
  barExp = 0.0;
  lateExp = 0;
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_69;
  v5 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v73.fields.currentCryptoKey = v5;
  *(_QWORD *)&v73.fields.fakeValue = v4;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v73, 0LL);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, 0LL);
  v6 = sub_B77694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v6, 0LL);
  if ( !v6 )
    goto LABEL_69;
  v13 = (System_Int32_array **)v2->fields.baseData;
  *(_QWORD *)(v6 + 16) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v6 + 16), v13, v7, v8, v9, v10, v11, v12);
  v14 = v2->fields.baseData;
  if ( !v14 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 24) = v14->fields.lv;
  v15 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v15 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15[6], 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  *(_DWORD *)(v6 + 32) = UserServantEntity__getExceedLvMax(
                           (UserServantEntity_o *)this,
                           LODWORD(this->fields.conductionWireLabel) + 1,
                           0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  this = (LevelExceedControl_o *)UserServantEntity__getExpInfo(
                                   (UserServantEntity_o *)this,
                                   &exp,
                                   &lateExp,
                                   &barExp,
                                   0LL);
  *(float *)(v6 + 36) = barExp;
  *(_DWORD *)(v6 + 40) = lateExp;
  v16 = v2->fields.baseData;
  if ( !v16 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 44) = v16->fields.hp;
  v17 = v2->fields.baseData;
  if ( !v17 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 48) = v17->fields.adjustHp;
  v18 = v2->fields.baseData;
  if ( !v18 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 52) = v18->fields.atk;
  v19 = v2->fields.baseData;
  if ( !v19 )
    goto LABEL_69;
  *(_DWORD *)(v6 + 56) = v19->fields.adjustAtk;
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v6, 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  v2->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v2->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_39547236(
                                   (int)v2 + 232,
                                   (System_String_o *)StringLiteral_9434/*"N0"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_69;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v21);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v23);
  if ( ConsumeItemList )
  {
    v24 = (System_Int32_array **)sub_B775DC(int___TypeInfo, ConsumeItemList->max_length);
    v2->fields.itemIdList = (struct System_Int32_array *)v24;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.itemIdList, v24, v25, v26, v27, v28, v29, v30);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_69;
  size = materialItemObjList->fields._size;
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v2->fields._itemInfoList_k__BackingField;
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v33;
  sub_B77560(
    (BattleServantConfConponent_o *)&v2->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)v33,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( size >= 1 )
  {
    v41 = 0LL;
    v42 = 0;
    while ( 1 )
    {
      v43 = v2->fields.materialItemObjList;
      if ( !v43 )
        goto LABEL_69;
      if ( v43->fields._size <= (unsigned int)v41 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (LevelExceedControl_o *)v43->fields._items->m_Items[v41];
      if ( !this )
        goto LABEL_69;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v44 = this;
      if ( !ConsumeItemList )
        break;
      max_length = ConsumeItemList->max_length;
      v46 = max_length != 0;
      if ( !max_length )
        v46 = v42;
      if ( !max_length )
        break;
      if ( (unsigned int)v41 >= max_length )
        goto LABEL_70;
      v47 = ConsumeItemList->m_Items[v41];
      if ( !v47 )
        goto LABEL_69;
      objectId = v47->fields.objectId;
      if ( !v46 )
      {
        v42 = 0;
        this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
LABEL_44:
        if ( (BYTE3(this->fields.conductionButtonLabel) & 4) != 0 && !*(_DWORD *)&this->fields.isSelectBase )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
        }
        num = *(_DWORD *)(&this->fields.itemListGrid[4].fields.mReposition + 3);
        goto LABEL_48;
      }
      itemIdList = v2->fields.itemIdList;
      if ( !itemIdList )
        goto LABEL_69;
      if ( (unsigned int)v41 >= itemIdList->max_length )
      {
LABEL_70:
        v67 = sub_B776C8(this);
        sub_B77668(v67, 0LL);
      }
      num = v47->fields.num;
      v42 = 1;
      itemIdList->m_Items[v41 + 1] = objectId;
LABEL_48:
      v51 = v2->fields.baseData;
      if ( !v51 )
        goto LABEL_69;
      v52 = *(_OWORD *)&v51->fields.userId.fields.fakeValue;
      *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&v51->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v69.fields.fakeValue = v52;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v68 = v69;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v68, 0LL);
      if ( !v44 )
        goto LABEL_69;
      LimitCntUpItemComponent__setLimitUpItemInfo((LimitCntUpItemComponent_o *)v44, (int64_t)this, objectId, num, v53);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        goto LABEL_69;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v44,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
      if ( (int)++v41 >= size )
        goto LABEL_55;
    }
    this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
    }
    objectId = *(_DWORD *)&this->fields.itemListGrid[4].fields.sorted;
    goto LABEL_44;
  }
LABEL_55:
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  v54 = (UIWidget_o *)v2->fields.needQpLb;
  *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
  if ( !v54 )
    goto LABEL_69;
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  v2->fields._IsExeCombine_k__BackingField = 1;
  if ( !this )
    goto LABEL_69;
  if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL) )
  {
    v2->fields.isMaxLimitCnt = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0LL) )
  {
    v2->fields.isMaxLv = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v2->fields.haveQpVal < v2->fields.spendQpVal )
  {
    v60 = (UIWidget_o *)v2->fields.needQpLb;
    v2->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_red(0LL);
    if ( v60 )
    {
      UIWidget__set_color(v60, *(UnityEngine_Color_o *)&v61, 0LL);
      v2->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_66;
    }
LABEL_69:
    sub_B7769C(this, method);
  }
LABEL_66:
  if ( !LevelExceedControl__CheckItemHaveNum(v2, v59) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v65);
  LevelExceedControl__CheckConductionWire(v2, v66);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v4; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v7; // x19
  int v8; // s0
  int v12; // s0

  if ( (byte_438A779 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TweenScale___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_438A779 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v4 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v7 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    if ( v4 )
    {
      UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v8, 0LL);
      if ( v7 )
      {
        UnityEngine_Behaviour__set_enabled(v7, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v7, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7769C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_gray(0LL);
  if ( !v4 )
    goto LABEL_12;
  UIWidget__set_color(v4, *(UnityEngine_Color_o *)&v12, 0LL);
  if ( !v7 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v7, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v4; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v6; // x20

  if ( (byte_438A770 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9434/*"N0"*/);
    byte_438A770 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v6 = *(UILabel_o **)(p_haveQpVal - 9),
        SelfUserGame = System_Int32__ToString_39547236((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9434/*"N0"*/, 0LL),
        !v6) )
  {
    sub_B7769C(SelfUserGame, v4);
  }
  UILabel__set_text(v6, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetStateInfoMsg(
        LevelExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  int32_t v3; // w21
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v7; // x20
  float v8; // s4
  float v9; // s5
  float v10; // s6
  __int64 *v11; // x8
  UnityEngine_Color_o v12; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = state;
  if ( (byte_438A77D & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_8999/*"MSG_MAX_LVEXCEED"*/);
    sub_B775C4(&StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/);
    sub_B775C4(&StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_7433/*"INFO_MSG_LVEXCEED"*/);
    byte_438A77D = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v13.fields.g = 0.87891;
  v13.fields.b = 0.98828;
  v7 = (UIWidget_o *)Component_WebViewObject;
  v13.fields.r = 0.0;
  *(_QWORD *)&v12.fields.r = 0LL;
  *(_QWORD *)&v12.fields.b = 0LL;
  UnityEngine_Color___ctor_41410832(v13, v8, v9, v10, (const MethodInfo *)&v12);
  if ( !v7 )
LABEL_36:
    sub_B7769C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v7, v12, 0LL);
  if ( v3 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_39;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v7, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_8999/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_29;
    }
    if ( !this->fields.isItemNum )
    {
      v16 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v7, v16, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_12446/*"SHORT_ITEM_INFO_MSG"*/;
      goto LABEL_29;
    }
    if ( this->fields.isQpNum )
    {
LABEL_39:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_5907/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v14 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v7, v14, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v11 = &StringLiteral_12447/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else
  {
    if ( v3 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = &StringLiteral_7433/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_29:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v11, 0LL);
LABEL_30:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)detailInfoLb, *(System_String_o **)&state, 0LL);
}


void __fastcall LevelExceedControl__ShowItemListInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *preSelectBaseObj; // x0
  const MethodInfo *v4; // x1

  preSelectBaseObj = this->fields.preSelectBaseObj;
  if ( !preSelectBaseObj
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0LL),
        (preSelectBaseObj = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0LL),
        (preSelectBaseObj = this->fields.itemListInfo) == 0LL) )
  {
    sub_B7769C(preSelectBaseObj, method);
  }
  UnityEngine_GameObject__SetActive(preSelectBaseObj, 1, 0LL);
  if ( this->fields.isSelectBase )
    LevelExceedControl__SetExceedInfo(this, v4);
}


System_Collections_Generic_List_LimitCntUpItemComponent__o *__fastcall LevelExceedControl__get_itemInfoList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  return this->fields._itemInfoList_k__BackingField;
}


void __fastcall LevelExceedControl__set_itemInfoList(
        LevelExceedControl_o *this,
        System_Collections_Generic_List_LimitCntUpItemComponent__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._itemInfoList_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}