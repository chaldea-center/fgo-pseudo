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
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *materialItemObjList; // x20
  signed int v7; // w22
  int v8; // w23
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0

  v4 = this;
  if ( (byte_4213EBC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, consumeList);
    this = (LevelExceedControl_o *)sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    byte_4213EBC = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_11;
    v7 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v7 >= 1 )
    {
      this = (LevelExceedControl_o *)v4->fields.itemListGrid;
      if ( this )
      {
        v8 = 0;
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
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          if ( ++v8 >= v7 )
            return;
          this = (LevelExceedControl_o *)v4->fields.itemListGrid;
          materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.materialItemObjList;
        }
        while ( this );
      }
LABEL_11:
      sub_B0D97C(this);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_4213EB9 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3299/*"CONDUCTION_COMBINE"*/, v3);
    sub_B0D8A4(&StringLiteral_3300/*"CONDUCTION_COMBINE_MSG"*/, v4);
    byte_4213EB9 = 1;
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
                                                         (System_String_o *)StringLiteral_3300/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3299/*"CONDUCTION_COMBINE"*/,
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
    sub_B0D97C(conductionWireInfo);
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
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v19; // [xsp+40h] [xbp-40h]

  if ( (byte_4213EB7 & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_4213EB7 = 1;
  }
  if ( selectBase )
  {
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    baseUserServantEntity = this->fields.baseUserServantEntity;
    if ( baseUserServantEntity )
    {
      v12 = *(_OWORD *)&baseUserServantEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v19.fields.currentCryptoKey = *(_OWORD *)&baseUserServantEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v19.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v18 = v19;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v17, 0LL) )
        LevelExceedControl__InitDispInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B0D840(
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
  __int64 v3; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v5; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v7; // x8

  v2 = this;
  if ( (byte_4213EBE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    this = (LevelExceedControl_o *)sub_B0D8A4(
                                     &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                     v3);
    byte_4213EBE = 1;
  }
  itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B0D97C(this);
  v5 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v5 >= size )
      return 1;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v7 = itemInfoList_k__BackingField->fields._items->m_Items[v5];
    if ( !v7 )
      goto LABEL_11;
    if ( !v7->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v2->fields._itemInfoList_k__BackingField;
    ++v5;
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

  if ( (byte_4213EC0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4213EC0 = 1;
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
      UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      if ( --v5 < 0 )
        return;
    }
LABEL_14:
    sub_B0D97C(itemListGrid);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v6; // x20
  int32_t v7; // w21
  const MethodInfo *v8; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213EBA & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213EBA = 1;
  }
  consumeList = 0LL;
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_12;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v6 = SvtExceedEnt;
  v7 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_12:
    sub_B0D97C(baseData);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v7, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v6, &consumeList, v8);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  UIWidget_o *v8; // x20
  int v9; // s0
  const MethodInfo *v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v31; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_4213EB5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4213EB5 = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  itemListGrid = System_Int32__ToString((int)this + 208, 0LL);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, itemListGrid, 0LL);
  v8 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_19;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v13);
  this->fields.itemIdList = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.itemIdList, 0LL, v14, v15, v16, v17, v18, v19);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v20,
                                                                                                  v21);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.materialItemObjList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_19;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v31);
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
    UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v35, v36, v37, v38, v39, v40);
  }
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_19:
    sub_B0D97C(itemListGrid);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, 0LL);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_4213EB4 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, v3);
    byte_4213EB4 = 1;
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8864/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_12:
    sub_B0D97C(helpBtn);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_4213EC2 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v3);
    byte_4213EC2 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B0D97C(v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v4,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_4213EC1 & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v3);
    byte_4213EC1 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3344/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B0D97C(v4);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v4,
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
    sub_B0D97C(0LL);
  SetRarityDialogControl__SetConfirmLvExceed_30068208(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  CommonConsumeEntity_o *v12; // x21
  void *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v15; // x22
  __int64 v16; // x23
  __int64 v17; // x24
  CommonConsumeEntity_array *v18; // x19
  __int64 v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x8
  char *v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4213EBB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Resize_CommonConsumeEntity___, svtExceedEnt);
    sub_B0D8A4(&CommonConsumeEntity_TypeInfo, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_SvtCoinMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    byte_4213EBB = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v12 = (CommonConsumeEntity_o *)sub_B0D974(CommonConsumeEntity_TypeInfo, svtExceedEnt, consumeList);
    CommonConsumeEntity___ctor(v12, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_22;
    v15 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v17 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v16 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v17;
    *(_QWORD *)&v30.fields.fakeValue = v16;
    Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                               v30,
                                               0LL);
    if ( !v15
      || (Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v15,
                                             (int32_t)Master_WarQuestSelectionMaster,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v12
      || (v12->fields.objectId = *((_DWORD *)Master_WarQuestSelectionMaster + 6),
          v12->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_WarBoardSquareIndexData_(
            (WarBoardSquareIndexData_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_232FE10 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v18 = *consumeList) == 0LL) )
    {
LABEL_22:
      sub_B0D97C(Master_WarQuestSelectionMaster);
    }
    v19 = sub_B0D964(v12, v18->obj.klass->_1.element_class);
    if ( !v19 )
    {
      v28 = sub_B0D99C(0LL);
      sub_B0D948(v28, 0LL);
    }
    v26 = *(_QWORD *)&v18->max_length;
    if ( !(_DWORD)v26 )
    {
      v29 = sub_B0D9A8(v19);
      sub_B0D948(v29, 0LL);
    }
    v27 = (char *)v18 + (((v26 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v27 + 4) = v12;
    sub_B0D840((BattleServantConfConponent_o *)(v27 + 32), (System_Int32_array **)v12, v20, v21, v22, v23, v24, v25);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *Instance; // x0
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v22; // w22
  struct UICharaGraphTexture_o *TexturePrefab_24036516; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_4213EB8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_4213EB8 = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B0D840(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = v17;
  *(_QWORD *)&v30.fields.fakeValue = v16;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v30, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v22 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_24036516 = CharaGraphManager__CreateTexturePrefab_24036516(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v22,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_24036516;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_24036516,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B0D97C(Instance);
  UICharaGraphTexture__SetCharacter_35242912((UICharaGraphTexture_o *)Instance, usrSvtData, v22, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  LevelExceedControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct UserServantEntity_o *baseData; // x8
  __int64 v15; // x20
  __int64 v16; // x21
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  struct UserServantEntity_o *v27; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v28; // x8
  struct UserServantEntity_o *v29; // x8
  struct UserServantEntity_o *v30; // x8
  struct UserServantEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v34; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  int size; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v48; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x26
  int v57; // w27
  struct System_Collections_Generic_List_GameObject__o *v58; // x22
  LevelExceedControl_o *v59; // x22
  unsigned int max_length; // w8
  _BOOL4 v61; // w9
  CommonConsumeEntity_o *v62; // x8
  float m_Height; // w23
  struct System_Int32_array *itemIdList; // x9
  float m_XMin; // w24
  struct UserServantEntity_o *v66; // x8
  __int128 v67; // q0
  const MethodInfo *v68; // x4
  UIWidget_o *v69; // x20
  int v70; // s0
  const MethodInfo *v74; // x1
  UIWidget_o *v75; // x20
  int v76; // s0
  const MethodInfo *v80; // x1
  const MethodInfo *v81; // x1
  __int64 v82; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+30h] [xbp-80h]
  float barExp; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t lateExp; // [xsp+58h] [xbp-58h] BYREF
  int32_t exp; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v88; // 0:x0.16

  v2 = this;
  if ( (byte_4213EBD & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, method);
    sub_B0D8A4(&CombineSvtData_TypeInfo, v3);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v4);
    sub_B0D8A4(&int___TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v10);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    this = (LevelExceedControl_o *)sub_B0D8A4(&StringLiteral_9289/*"N0"*/, v13);
    byte_4213EBD = 1;
  }
  exp = 0;
  barExp = 0.0;
  lateExp = 0;
  baseData = v2->fields.baseData;
  if ( !baseData )
    goto LABEL_69;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v88.fields.currentCryptoKey = v16;
  *(_QWORD *)&v88.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v88, 0LL);
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v2->fields.baseData, 0LL);
  v19 = sub_B0D974(CombineSvtData_TypeInfo, v17, v18);
  CombineSvtData___ctor((CombineSvtData_o *)v19, 0LL);
  if ( !v19 )
    goto LABEL_69;
  v26 = (System_Int32_array **)v2->fields.baseData;
  *(_QWORD *)(v19 + 16) = v26;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), v26, v20, v21, v22, v23, v24, v25);
  v27 = v2->fields.baseData;
  if ( !v27 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 24) = v27->fields.lv;
  v28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v2->fields.baseData;
  if ( !v28 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v28[6], 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  *(_DWORD *)(v19 + 32) = UserServantEntity__getExceedLvMax(
                            (UserServantEntity_o *)this,
                            LODWORD(this[1].monitor) + 1,
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
  *(float *)(v19 + 36) = barExp;
  *(_DWORD *)(v19 + 40) = lateExp;
  v29 = v2->fields.baseData;
  if ( !v29 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 44) = v29->fields.hp;
  v30 = v2->fields.baseData;
  if ( !v30 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 48) = v30->fields.adjustHp;
  v31 = v2->fields.baseData;
  if ( !v31 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 52) = v31->fields.atk;
  v32 = v2->fields.baseData;
  if ( !v32 )
    goto LABEL_69;
  *(_DWORD *)(v19 + 56) = v32->fields.adjustAtk;
  this = (LevelExceedControl_o *)v2->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v19, 0LL);
  this = (LevelExceedControl_o *)v2->fields.baseData;
  if ( !this )
    goto LABEL_69;
  v2->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v2->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_38473032(
                                   (int)v2 + 208,
                                   (System_String_o *)StringLiteral_9289/*"N0"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_69;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v2, v34);
  LevelExceedControl__AdjustMaterialItemObjList(v2, ConsumeItemList, v36);
  if ( ConsumeItemList )
  {
    v39 = (System_Int32_array **)sub_B0D8BC(int___TypeInfo, ConsumeItemList->max_length);
    v2->fields.itemIdList = (struct System_Int32_array *)v39;
    sub_B0D840((BattleServantConfConponent_o *)&v2->fields.itemIdList, v39, v40, v41, v42, v43, v44, v45);
  }
  materialItemObjList = v2->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_69;
  size = materialItemObjList->fields._size;
  v48 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                  v37,
                                                                                                  v38);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v48,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  v2->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v48;
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v2->fields._itemInfoList_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v2->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  if ( size >= 1 )
  {
    v56 = 0LL;
    v57 = 0;
    while ( 1 )
    {
      v58 = v2->fields.materialItemObjList;
      if ( !v58 )
        goto LABEL_69;
      if ( v58->fields._size <= (unsigned int)v56 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (LevelExceedControl_o *)v58->fields._items->m_Items[v56];
      if ( !this )
        goto LABEL_69;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v59 = this;
      if ( !ConsumeItemList )
        break;
      max_length = ConsumeItemList->max_length;
      v61 = max_length != 0;
      if ( !max_length )
        v61 = v57;
      if ( !max_length )
        break;
      if ( (unsigned int)v56 >= max_length )
        goto LABEL_70;
      v62 = ConsumeItemList->m_Items[v56];
      if ( !v62 )
        goto LABEL_69;
      m_Height = *(float *)&v62->fields.objectId;
      if ( !v61 )
      {
        v57 = 0;
        this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
LABEL_44:
        if ( (this[1].fields.m_CachedPtr & 0x4000000) != 0 && !LODWORD(this->fields.charaGraph) )
        {
          j_il2cpp_runtime_class_init_0(this);
          this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
        }
        m_XMin = this->fields.combineBtnBg->fields.mOuterUV.fields.m_XMin;
        goto LABEL_48;
      }
      itemIdList = v2->fields.itemIdList;
      if ( !itemIdList )
        goto LABEL_69;
      if ( (unsigned int)v56 >= itemIdList->max_length )
      {
LABEL_70:
        v82 = sub_B0D9A8(this);
        sub_B0D948(v82, 0LL);
      }
      m_XMin = *(float *)&v62->fields.num;
      v57 = 1;
      *(float *)&itemIdList->m_Items[v56 + 1] = m_Height;
LABEL_48:
      v66 = v2->fields.baseData;
      if ( !v66 )
        goto LABEL_69;
      v67 = *(_OWORD *)&v66->fields.userId.fields.fakeValue;
      *(_OWORD *)&v84.fields.currentCryptoKey = *(_OWORD *)&v66->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v84.fields.fakeValue = v67;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v83 = v84;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v83, 0LL);
      if ( !v59 )
        goto LABEL_69;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)v59,
        (int64_t)this,
        SLODWORD(m_Height),
        SLODWORD(m_XMin),
        v68);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        goto LABEL_69;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
      if ( (int)++v56 >= size )
        goto LABEL_55;
    }
    this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      this = (LevelExceedControl_o *)BalanceConfig_TypeInfo;
    }
    m_Height = this->fields.combineBtnBg->fields.mInnerUV.fields.m_Height;
    goto LABEL_44;
  }
LABEL_55:
  this = (LevelExceedControl_o *)v2->fields.itemListGrid;
  if ( !this )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  v69 = (UIWidget_o *)v2->fields.needQpLb;
  *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
  if ( !v69 )
    goto LABEL_69;
  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
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
    v75 = (UIWidget_o *)v2->fields.needQpLb;
    v2->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v76 = UnityEngine_Color__get_red(0LL);
    if ( v75 )
    {
      UIWidget__set_color(v75, *(UnityEngine_Color_o *)&v76, 0LL);
      v2->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_66;
    }
LABEL_69:
    sub_B0D97C(this);
  }
LABEL_66:
  if ( !LevelExceedControl__CheckItemHaveNum(v2, v74) )
  {
    v2->fields.isItemNum = 0;
    v2->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v2, v80);
  LevelExceedControl__CheckConductionWire(v2, v81);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v5; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v8; // x19
  int v9; // s0
  int v13; // s0

  if ( (byte_4213EBF & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_4213EBF = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v5 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v8 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
    if ( v5 )
    {
      UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v9, 0LL);
      if ( v8 )
      {
        UnityEngine_Behaviour__set_enabled(v8, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v8, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(combineBtnBg);
  }
  *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_gray(0LL);
  if ( !v5 )
    goto LABEL_12;
  UIWidget__set_color(v5, *(UnityEngine_Color_o *)&v13, 0LL);
  if ( !v8 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v8, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20

  if ( (byte_4213EB6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_9289/*"N0"*/, method);
    byte_4213EB6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 9),
        SelfUserGame = System_Int32__ToString_38473032((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9289/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B0D97C(SelfUserGame);
  }
  UILabel__set_text(v5, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetStateInfoMsg(
        LevelExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v14; // x20
  float v15; // s4
  float v16; // s5
  float v17; // s6
  __int64 *v18; // x8
  System_String_o *v19; // x1
  UnityEngine_Color_o v20; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4213EC3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_8860/*"MSG_MAX_LVEXCEED"*/, v6);
    sub_B0D8A4(&StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_B0D8A4(&StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/, v8);
    sub_B0D8A4(&StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    sub_B0D8A4(&StringLiteral_7300/*"INFO_MSG_LVEXCEED"*/, v11);
    byte_4213EC3 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_170E6A4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v21.fields.g = 0.87891;
  v21.fields.b = 0.98828;
  v14 = (UIWidget_o *)Component_WebViewObject;
  v21.fields.r = 0.0;
  *(_QWORD *)&v20.fields.r = 0LL;
  *(_QWORD *)&v20.fields.b = 0LL;
  UnityEngine_Color___ctor_40757524(v21, v15, v16, v17, (const MethodInfo *)&v20);
  if ( !v14 )
LABEL_36:
    sub_B0D97C(detailInfoLb);
  UIWidget__set_color(v14, v20, 0LL);
  if ( state == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_39;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v14, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_8860/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_29;
    }
    if ( !this->fields.isItemNum )
    {
      v24 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v14, v24, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_12252/*"SHORT_ITEM_INFO_MSG"*/;
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
      v18 = &StringLiteral_5779/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v22 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v14, v22, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_12253/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else
  {
    if ( state )
    {
      v19 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = &StringLiteral_7300/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_29:
  v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
LABEL_30:
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  UILabel__set_text((UILabel_o *)detailInfoLb, v19, 0LL);
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
    sub_B0D97C(preSelectBaseObj);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}