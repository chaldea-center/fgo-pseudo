void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *materialItemObjList; // x20
  signed int v7; // w22
  UnityEngine_Component_o *itemListGrid; // x0
  int v9; // w23
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0

  if ( (byte_40FC22F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, consumeList);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v5);
    byte_40FC22F = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_11;
    v7 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v7 >= 1 )
    {
      itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( itemListGrid )
      {
        v9 = 0;
        do
        {
          itemInfoPrefab = this->fields.itemInfoPrefab;
          transform = UnityEngine_Component__get_transform(itemListGrid, 0LL);
          Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemInfoPrefab, transform, 0LL, 0LL);
          if ( !materialItemObjList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            materialItemObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
          if ( ++v9 >= v7 )
            return;
          itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
          materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.materialItemObjList;
        }
        while ( itemListGrid );
      }
LABEL_11:
      sub_B170D4();
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UserServantEntity_o *v7; // x0
  CombineInfoComponent_o *combineInfoComp; // x0
  UILabel_o *conductionWireLabel; // x20
  System_String_o *v10; // x0
  UILabel_o *conductionButtonLabel; // x20
  System_String_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0

  if ( (byte_40FC22C & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3277/*"CONDUCTION_COMBINE"*/, v3);
    sub_B16FFC(&StringLiteral_3278/*"CONDUCTION_COMBINE_MSG"*/, v4);
    byte_40FC22C = 1;
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
  v7 = this->fields.baseData;
  if ( !v7 )
    goto LABEL_17;
  if ( !UserServantEntity__isLevelMax(v7, 0LL) )
  {
LABEL_9:
    combineInfoComp = this->fields.combineInfoComp;
    if ( combineInfoComp )
    {
      CombineInfoComponent__HideResStatusInfo(combineInfoComp, 0LL);
      conductionWireLabel = this->fields.conductionWireLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3278/*"CONDUCTION_COMBINE_MSG"*/, 0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, v10, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3277/*"CONDUCTION_COMBINE"*/, 0LL);
        if ( conductionButtonLabel )
        {
          UILabel__set_text(conductionButtonLabel, v12, 0LL);
          v13 = this->fields.conductionWireInfo;
          if ( v13 )
          {
            UnityEngine_GameObject__SetActive(v13, 1, 0LL);
            return;
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
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

  if ( (byte_40FC22A & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, selectBase);
    byte_40FC22A = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v18, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v17.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v17, 0LL) )
        LevelExceedControl__InitDispInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B16F98(
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
  __int64 v3; // x1
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v5; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v7; // x8

  if ( (byte_40FC231 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__, v3);
    byte_40FC231 = 1;
  }
  itemInfoList_k__BackingField = this->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B170D4();
  v5 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v5 >= size )
      return 1;
    if ( size <= (unsigned int)v5 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v7 = itemInfoList_k__BackingField->fields._items->m_Items[v5];
    if ( !v7 )
      goto LABEL_11;
    if ( !v7->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = this->fields._itemInfoList_k__BackingField;
    ++v5;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_11;
  }
}


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *itemListGrid; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t childCount; // w0
  int32_t v6; // w20
  UnityEngine_Component_o *v7; // x0
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Component_o *Child; // x0
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_40FC233 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FC233 = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  transform = UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !transform )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount(transform, 0LL);
  v6 = childCount - 1;
  if ( childCount >= 1 )
  {
    while ( 1 )
    {
      v7 = (UnityEngine_Component_o *)this->fields.itemListGrid;
      if ( !v7 )
        break;
      v8 = UnityEngine_Component__get_transform(v7, 0LL);
      if ( !v8 )
        break;
      Child = (UnityEngine_Component_o *)UnityEngine_Transform__GetChild(v8, v6, 0LL);
      if ( !Child )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(Child, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      if ( --v6 < 0 )
        return;
    }
LABEL_14:
    sub_B170D4();
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
  CommonConsumeMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v9; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FC22D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_CommonConsumeMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FC22D = 1;
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
  Master_WarQuestSelectionMaster = (CommonConsumeMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_12:
    sub_B170D4();
  consumeList = CommonConsumeMaster__GetIdEntityList(Master_WarQuestSelectionMaster, v7, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v6, &consumeList, v9);
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
  System_String_o *v7; // x0
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Component_o *itemListGrid; // x0
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UIGrid_o *v35; // x0
  const MethodInfo *v36; // x1
  UnityEngine_Component_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CombineInfoComponent_o *combineInfoComp; // x0

  if ( (byte_40FC228 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FC228 = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  v7 = System_Int32__ToString((int)this + 208, 0LL);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, v7, 0LL);
  v8 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v9 = UnityEngine_Color__get_white(0LL);
  if ( !v8 )
    goto LABEL_19;
  UIWidget__set_color(v8, *(UnityEngine_Color_o *)&v9, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v13);
  this->fields.itemIdList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemIdList, 0LL, v14, v15, v16, v17, v18, v19);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                  v20,
                                                                                                  v21,
                                                                                                  v22,
                                                                                                  v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.materialItemObjList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_19;
  itemInfoPrefab = this->fields.itemInfoPrefab;
  transform = UnityEngine_Component__get_transform(itemListGrid, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, itemInfoPrefab, transform, 0LL, 0LL);
  if ( !this->fields.materialItemObjList )
    goto LABEL_19;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.materialItemObjList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
  v35 = this->fields.itemListGrid;
  if ( !v35 )
    goto LABEL_19;
  UIGrid__set_repositionNow(v35, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v36);
  p_charaGraph = (UnityEngine_Component_o **)&this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(charaGraph, 0LL, 0LL) )
  {
    if ( !*p_charaGraph )
      goto LABEL_19;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(*p_charaGraph, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v40, v41, v42, v43, v44, v45);
  }
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
LABEL_19:
    sub_B170D4();
  CombineInfoComponent__initStatusInfo(combineInfoComp, 1, 0LL);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UILabel_o *preSelectBaseLb; // x20
  System_String_o *v9; // x0
  UnityEngine_GameObject_o *preSelectBaseObj; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0

  if ( (byte_40FC227 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_8812/*"MSG_PRESELECT_BASE_SVT"*/, v3);
    byte_40FC227 = 1;
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
  conductionWireInfo = this->fields.conductionWireInfo;
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  if ( !conductionWireInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
  preSelectBaseLb = this->fields.preSelectBaseLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v9 = LocalizationManager__Get((System_String_o *)StringLiteral_8812/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, v9, 0LL), (preSelectBaseObj = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, 1, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_12:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(baseSelectInfoLb, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_String_o *v4; // x0

  if ( (byte_40FC235 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v3);
    byte_40FC235 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
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

  if ( (byte_40FC234 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v3);
    byte_40FC234 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_3322/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B170D4();
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
    sub_B170D4();
  SetRarityDialogControl__SetConfirmLvExceed_29181932(
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  CommonConsumeEntity_o *v13; // x21
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x22
  __int64 v17; // x23
  __int64 v18; // x24
  int32_t v19; // w0
  WarEntity_o *Entity; // x0
  CommonConsumeEntity_array *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x8
  char *v31; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_40FC22E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Resize_CommonConsumeEntity___, svtExceedEnt);
    sub_B16FFC(&CommonConsumeEntity_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_SvtCoinMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_40FC22E = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v13 = (CommonConsumeEntity_o *)sub_B170CC(CommonConsumeEntity_TypeInfo, svtExceedEnt, consumeList, method, v4);
    CommonConsumeEntity___ctor(v13, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_22;
    v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v18 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v17 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v32.fields.currentCryptoKey = v18;
    *(_QWORD *)&v32.fields.fakeValue = v17;
    v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v32, 0LL);
    if ( !v16
      || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v16,
                     v19,
                     (const MethodInfo_266F388 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v13
      || (v13->fields.objectId = (int32_t)Entity->fields.age,
          v13->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_WarBoardSquareIndexData_(
            (WarBoardSquareIndexData_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_24FD6E4 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v21 = *consumeList) == 0LL) )
    {
LABEL_22:
      sub_B170D4();
    }
    v22 = sub_B170BC(v13, v21->obj.klass->_1.element_class);
    if ( !v22 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    v30 = *(_QWORD *)&v21->max_length;
    if ( !(_DWORD)v30 )
    {
      sub_B17100(v22, v23, v24);
      sub_B170A0();
    }
    v31 = (char *)v21 + (((v30 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v31 + 4) = v13;
    sub_B16F98((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v13, v24, v25, v26, v27, v28, v29);
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
  int32_t CardImageLimitCount; // w21
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v16; // x23
  __int64 v17; // x24
  ServantLimitImageMaster_o *v18; // x22
  int32_t v19; // w0
  int32_t ServantImageLimitSealAfter; // w0
  UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v23; // w22
  struct UICharaGraphTexture_o *TexturePrefab_26882832; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16

  if ( (byte_40FC22B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, usrSvtData);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_40FC22B = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v17 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v16 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v18 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v31.fields.currentCryptoKey = v17;
  *(_QWORD *)&v31.fields.fakeValue = v16;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v31, 0LL);
  if ( !v18 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v18,
                                 v19,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v23 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26882832 = CharaGraphManager__CreateTexturePrefab_26882832(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v23,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26882832;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26882832,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    return;
  }
  if ( !*p_charaGraph )
LABEL_16:
    sub_B170D4();
  UICharaGraphTexture__SetCharacter_35080076(*p_charaGraph, usrSvtData, v23, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
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
  CombineInfoComponent_o *combineInfoComp; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x1
  struct UserServantEntity_o *v30; // x8
  struct UserServantEntity_o *v31; // x8
  struct UserServantEntity_o *v32; // x0
  UserServantEntity_o *v33; // x0
  struct UserServantEntity_o *v34; // x8
  struct UserServantEntity_o *v35; // x8
  struct UserServantEntity_o *v36; // x8
  struct UserServantEntity_o *v37; // x8
  CombineInfoComponent_o *v38; // x0
  UserServantEntity_o *v39; // x0
  UILabel_o *needQpLb; // x20
  System_String_o *v41; // x0
  const MethodInfo *v42; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  struct System_Int32_array *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  int size; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemInfoList_k__BackingField; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x26
  int v67; // w27
  BalanceConfig_c *v68; // x0
  struct System_Collections_Generic_List_GameObject__o *v69; // x22
  UnityEngine_GameObject_o *v70; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  LimitCntUpItemComponent_o *v74; // x22
  unsigned int max_length; // w8
  _BOOL4 v76; // w9
  CommonConsumeEntity_o *v77; // x8
  int32_t objectId; // w23
  struct System_Int32_array *itemIdList; // x9
  int32_t LvExceedNeedItemNum; // w24
  struct UserServantEntity_o *v81; // x8
  __int128 v82; // q0
  int64_t v83; // x0
  const MethodInfo *v84; // x4
  UIGrid_o *itemListGrid; // x0
  UIWidget_o *v86; // x20
  int v87; // s0
  UserServantEntity_o *v91; // x0
  UserServantEntity_o *v92; // x0
  const MethodInfo *v93; // x1
  UIWidget_o *v94; // x20
  int v95; // s0
  const MethodInfo *v99; // x1
  const MethodInfo *v100; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+30h] [xbp-80h]
  float barExp; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t lateExp; // [xsp+58h] [xbp-58h] BYREF
  int32_t exp; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  if ( (byte_40FC230 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, method);
    sub_B16FFC(&CombineSvtData_TypeInfo, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v4);
    sub_B16FFC(&int___TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v10);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, v13);
    byte_40FC230 = 1;
  }
  exp = 0;
  barExp = 0.0;
  lateExp = 0;
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_69;
  v16 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v106.fields.currentCryptoKey = v16;
  *(_QWORD *)&v106.fields.fakeValue = v15;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v106, 0LL);
  combineInfoComp = this->fields.combineInfoComp;
  if ( !combineInfoComp )
    goto LABEL_69;
  CombineInfoComponent__setCurrentStatusInfo(combineInfoComp, this->fields.baseData, 0LL);
  v22 = sub_B170CC(CombineSvtData_TypeInfo, v18, v19, v20, v21);
  CombineSvtData___ctor((CombineSvtData_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_69;
  v29 = (System_Int32_array **)this->fields.baseData;
  *(_QWORD *)(v22 + 16) = v29;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), v29, v23, v24, v25, v26, v27, v28);
  v30 = this->fields.baseData;
  if ( !v30 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 24) = v30->fields.lv;
  v31 = this->fields.baseData;
  if ( !v31 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                            v31->fields.limitCount,
                            0LL);
  v32 = this->fields.baseData;
  if ( !v32 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 32) = UserServantEntity__getExceedLvMax(v32, v32->fields.exceedCount + 1, 0LL);
  v33 = this->fields.baseData;
  if ( !v33 )
    goto LABEL_69;
  UserServantEntity__getExpInfo(v33, &exp, &lateExp, &barExp, 0LL);
  *(float *)(v22 + 36) = barExp;
  *(_DWORD *)(v22 + 40) = lateExp;
  v34 = this->fields.baseData;
  if ( !v34 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 44) = v34->fields.hp;
  v35 = this->fields.baseData;
  if ( !v35 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 48) = v35->fields.adjustHp;
  v36 = this->fields.baseData;
  if ( !v36 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 52) = v36->fields.atk;
  v37 = this->fields.baseData;
  if ( !v37 )
    goto LABEL_69;
  *(_DWORD *)(v22 + 56) = v37->fields.adjustAtk;
  v38 = this->fields.combineInfoComp;
  if ( !v38 )
    goto LABEL_69;
  CombineInfoComponent__setCombineResStatusInfo(v38, (CombineSvtData_o *)v22, 0LL);
  v39 = this->fields.baseData;
  if ( !v39 )
    goto LABEL_69;
  this->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed(v39, 0LL);
  needQpLb = this->fields.needQpLb;
  v41 = System_Int32__ToString_38275808((int)this + 208, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL);
  if ( !needQpLb )
    goto LABEL_69;
  UILabel__set_text(needQpLb, v41, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(this, v42);
  LevelExceedControl__AdjustMaterialItemObjList(this, ConsumeItemList, v44);
  if ( ConsumeItemList )
  {
    v49 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, ConsumeItemList->max_length, v46);
    this->fields.itemIdList = v49;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.itemIdList,
      (System_Int32_array **)v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  materialItemObjList = this->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_69;
  size = materialItemObjList->fields._size;
  v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo,
                                                                                                  v45,
                                                                                                  v46,
                                                                                                  v47,
                                                                                                  v48);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v58,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  this->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v58;
  p_itemInfoList_k__BackingField = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields._itemInfoList_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)v58,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( size >= 1 )
  {
    v66 = 0LL;
    v67 = 0;
    while ( 1 )
    {
      v69 = this->fields.materialItemObjList;
      if ( !v69 )
        goto LABEL_69;
      if ( v69->fields._size <= (unsigned int)v66 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v70 = v69->fields._items->m_Items[v66];
      if ( !v70 )
        goto LABEL_69;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  v70,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v74 = (LimitCntUpItemComponent_o *)Component_srcLineSprite;
      if ( !ConsumeItemList )
        break;
      max_length = ConsumeItemList->max_length;
      v76 = max_length != 0;
      if ( !max_length )
        v76 = v67;
      if ( !max_length )
        break;
      if ( (unsigned int)v66 >= max_length )
        goto LABEL_70;
      v77 = ConsumeItemList->m_Items[v66];
      if ( !v77 )
        goto LABEL_69;
      objectId = v77->fields.objectId;
      if ( !v76 )
      {
        v67 = 0;
        v68 = BalanceConfig_TypeInfo;
LABEL_44:
        if ( (BYTE3(v68->vtable._0_Equals.methodPtr) & 4) != 0 && !v68->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v68);
          v68 = BalanceConfig_TypeInfo;
        }
        LvExceedNeedItemNum = v68->static_fields->LvExceedNeedItemNum;
        goto LABEL_48;
      }
      itemIdList = this->fields.itemIdList;
      if ( !itemIdList )
        goto LABEL_69;
      if ( (unsigned int)v66 >= itemIdList->max_length )
      {
LABEL_70:
        sub_B17100(Component_srcLineSprite, v72, v73);
        sub_B170A0();
      }
      LvExceedNeedItemNum = v77->fields.num;
      v67 = 1;
      itemIdList->m_Items[v66 + 1] = objectId;
LABEL_48:
      v81 = this->fields.baseData;
      if ( !v81 )
        goto LABEL_69;
      v82 = *(_OWORD *)&v81->fields.userId.fields.fakeValue;
      *(_OWORD *)&v102.fields.currentCryptoKey = *(_OWORD *)&v81->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v102.fields.fakeValue = v82;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v101 = v102;
      v83 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v101, 0LL);
      if ( !v74 )
        goto LABEL_69;
      LimitCntUpItemComponent__setLimitUpItemInfo(v74, v83, objectId, LvExceedNeedItemNum, v84);
      if ( !*p_itemInfoList_k__BackingField )
        goto LABEL_69;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemInfoList_k__BackingField,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
      if ( (int)++v66 >= size )
        goto LABEL_55;
    }
    v68 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v68 = BalanceConfig_TypeInfo;
    }
    objectId = v68->static_fields->LvExceedItemId;
    goto LABEL_44;
  }
LABEL_55:
  itemListGrid = this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_69;
  UIGrid__set_repositionNow(itemListGrid, 1, 0LL);
  v86 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v87 = UnityEngine_Color__get_white(0LL);
  if ( !v86 )
    goto LABEL_69;
  UIWidget__set_color(v86, *(UnityEngine_Color_o *)&v87, 0LL);
  v91 = this->fields.baseData;
  this->fields._IsExeCombine_k__BackingField = 1;
  if ( !v91 )
    goto LABEL_69;
  if ( !UserServantEntity__isLimitCountMax(v91, 0LL) )
  {
    this->fields.isMaxLimitCnt = 0;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  v92 = this->fields.baseData;
  if ( !v92 )
    goto LABEL_69;
  if ( !UserServantEntity__isLevelMax(v92, 0LL) )
  {
    this->fields.isMaxLv = 0;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( this->fields.haveQpVal < this->fields.spendQpVal )
  {
    v94 = (UIWidget_o *)this->fields.needQpLb;
    this->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v95 = UnityEngine_Color__get_red(0LL);
    if ( v94 )
    {
      UIWidget__set_color(v94, *(UnityEngine_Color_o *)&v95, 0LL);
      this->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_66;
    }
LABEL_69:
    sub_B170D4();
  }
LABEL_66:
  if ( !LevelExceedControl__CheckItemHaveNum(this, v93) )
  {
    this->fields.isItemNum = 0;
    this->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(this, v99);
  LevelExceedControl__CheckConductionWire(this, v100);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *combineBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v6; // x20
  WebViewObject_o *v7; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v9; // x19
  int v10; // s0
  int v14; // s0

  if ( (byte_40FC232 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TweenScale___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v3);
    byte_40FC232 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              combineBtnBg,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v6 = (UIWidget_o *)Component_WebViewObject;
  v7 = UnityEngine_Component__GetComponent_WebViewObject_(
         (UnityEngine_Component_o *)this->fields.combineTxtImg,
         (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v9 = (UnityEngine_Behaviour_o *)v7;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v10 = UnityEngine_Color__get_white(0LL);
    if ( v6 )
    {
      UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v10, 0LL);
      if ( v9 )
      {
        UnityEngine_Behaviour__set_enabled(v9, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v9, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
  if ( !v6 )
    goto LABEL_12;
  UIWidget__set_color(v6, *(UnityEngine_Color_o *)&v14, 0LL);
  if ( !v9 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v9, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  UserGameEntity_o *SelfUserGame; // x0
  int32_t *p_haveQpVal; // x19
  UILabel_o *v5; // x20
  System_String_o *v6; // x0

  if ( (byte_40FC229 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_9236/*"N0"*/, method);
    byte_40FC229 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = SelfUserGame->fields.qp,
        p_haveQpVal = &this->fields.haveQpVal,
        v5 = *(UILabel_o **)(p_haveQpVal - 9),
        v6 = System_Int32__ToString_38275808((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9236/*"N0"*/, 0LL),
        !v5) )
  {
    sub_B170D4();
  }
  UILabel__set_text(v5, v6, 0LL);
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
  UILabel_o *v20; // x0
  UnityEngine_Color_o v21; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FC236 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_UIWidget___, *(_QWORD *)&state);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_8808/*"MSG_MAX_LVEXCEED"*/, v6);
    sub_B16FFC(&StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/, v7);
    sub_B16FFC(&StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/, v8);
    sub_B16FFC(&StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    sub_B16FFC(&StringLiteral_7252/*"INFO_MSG_LVEXCEED"*/, v11);
    byte_40FC236 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v22.fields.g = 0.87891;
  v22.fields.b = 0.98828;
  v14 = (UIWidget_o *)Component_WebViewObject;
  v22.fields.r = 0.0;
  *(_QWORD *)&v21.fields.r = 0LL;
  *(_QWORD *)&v21.fields.b = 0LL;
  UnityEngine_Color___ctor_40666012(v22, v15, v16, v17, (const MethodInfo *)&v21);
  if ( !v14 )
LABEL_36:
    sub_B170D4();
  UIWidget__set_color(v14, v21, 0LL);
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
      v18 = &StringLiteral_8808/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_29;
    }
    if ( !this->fields.isItemNum )
    {
      v25 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v14, v25, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_12161/*"SHORT_ITEM_INFO_MSG"*/;
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
      v18 = &StringLiteral_5746/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v23 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v14, v23, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v18 = &StringLiteral_12162/*"SHORT_QP_INFO_MSG"*/;
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
    v18 = &StringLiteral_7252/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_29:
  v19 = LocalizationManager__Get((System_String_o *)*v18, 0LL);
LABEL_30:
  v20 = this->fields.detailInfoLb;
  if ( !v20 )
    goto LABEL_36;
  UILabel__set_text(v20, v19, 0LL);
}


void __fastcall LevelExceedControl__ShowItemListInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *preSelectBaseObj; // x0
  UnityEngine_GameObject_o *baseSelectInfoLb; // x0
  UnityEngine_GameObject_o *itemListInfo; // x0
  const MethodInfo *v6; // x1

  preSelectBaseObj = this->fields.preSelectBaseObj;
  if ( !preSelectBaseObj
    || (UnityEngine_GameObject__SetActive(preSelectBaseObj, !this->fields.isSelectBase, 0LL),
        (baseSelectInfoLb = this->fields.baseSelectInfoLb) == 0LL)
    || (UnityEngine_GameObject__SetActive(baseSelectInfoLb, !this->fields.isSelectBase, 0LL),
        (itemListInfo = this->fields.itemListInfo) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(itemListInfo, 1, 0LL);
  if ( this->fields.isSelectBase )
    LevelExceedControl__SetExceedInfo(this, v6);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}