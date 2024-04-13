void __fastcall LevelExceedControl___ctor(LevelExceedControl_o *this, const MethodInfo *method)
{
  CombineMenuControl___ctor((CombineMenuControl_o *)this, 0LL);
}


void __fastcall LevelExceedControl__AdjustMaterialItemObjList(
        LevelExceedControl_o *this,
        CommonConsumeEntity_array *consumeList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  LevelExceedControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *materialItemObjList; // x20
  signed int v10; // w22
  int v11; // w23
  UnityEngine_GameObject_o *itemInfoPrefab; // x21
  UnityEngine_Transform_o *transform; // x0

  v5 = this;
  if ( (byte_42E7D41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)consumeList, (_DWORD)method, v3);
    this = (LevelExceedControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_GameObject__get_Count__,
                                     v6,
                                     v7,
                                     v8);
    byte_42E7D41 = 1;
  }
  if ( consumeList )
  {
    materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.materialItemObjList;
    if ( !materialItemObjList )
      goto LABEL_11;
    v10 = consumeList->max_length - materialItemObjList->fields._size;
    if ( v10 >= 1 )
    {
      this = (LevelExceedControl_o *)v5->fields.itemListGrid;
      if ( this )
      {
        v11 = 0;
        do
        {
          itemInfoPrefab = v5->fields.itemInfoPrefab;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (LevelExceedControl_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)v5,
                                           itemInfoPrefab,
                                           transform,
                                           0LL,
                                           0LL);
          if ( !materialItemObjList )
            break;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            materialItemObjList,
            (EventMissionProgressRequest_Argument_ProgressData_o *)this,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
          if ( ++v11 >= v10 )
            return;
          this = (LevelExceedControl_o *)v5->fields.itemListGrid;
          materialItemObjList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.materialItemObjList;
        }
        while ( this );
      }
LABEL_11:
      sub_B5D69C(this, consumeList);
    }
  }
}


void __fastcall LevelExceedControl__CheckConductionWire(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *conductionWireInfo; // x0
  UserServantEntity_o *baseData; // x0
  UILabel_o *conductionWireLabel; // x20
  UILabel_o *conductionButtonLabel; // x20

  if ( (byte_42E7D3E & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3352/*"CONDUCTION_COMBINE"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_3353/*"CONDUCTION_COMBINE_MSG"*/, v8, v9, v10);
    byte_42E7D3E = 1;
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
                                                         (System_String_o *)StringLiteral_3353/*"CONDUCTION_COMBINE_MSG"*/,
                                                         0LL);
      if ( conductionWireLabel )
      {
        UILabel__set_text(conductionWireLabel, (System_String_o *)conductionWireInfo, 0LL);
        conductionButtonLabel = this->fields.conductionButtonLabel;
        conductionWireInfo = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3352/*"CONDUCTION_COMBINE"*/,
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
    sub_B5D69C(conductionWireInfo, method);
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

  if ( (byte_42E7D3C & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)selectBase, (_DWORD)method, v3);
    byte_42E7D3C = 1;
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
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v19, 0LL);
      v14 = *(_OWORD *)&selectBase->fields.id.fields.fakeValue;
      *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&selectBase->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v18.fields.fakeValue = v14;
      if ( v13 != CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v18, 0LL) )
        LevelExceedControl__InitDispInfo(this, v15);
    }
    this->fields.isSelectBase = 1;
  }
  else
  {
    LevelExceedControl__InitDispInfo(this, (const MethodInfo *)selectBase);
    conductionWireInfo = this->fields.conductionWireInfo;
    if ( !conductionWireInfo )
      sub_B5D69C(0LL, v16);
    UnityEngine_GameObject__SetActive(conductionWireInfo, 0, 0LL);
    p_baseUserServantEntity = (BattleServantConfConponent_o *)&this->fields.baseUserServantEntity;
    this->fields.isSelectBase = 0;
  }
  p_baseUserServantEntity->klass = (BattleServantConfConponent_c *)selectBase;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  LevelExceedControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_List_LimitCntUpItemComponent__o *itemInfoList_k__BackingField; // x21
  __int64 v9; // x20
  int size; // w8
  LimitCntUpItemComponent_o *v11; // x8

  v4 = this;
  if ( (byte_42E7D43 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Count__, (_DWORD)method, v2, v3);
    this = (LevelExceedControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_LimitCntUpItemComponent__get_Item__,
                                     v5,
                                     v6,
                                     v7);
    byte_42E7D43 = 1;
  }
  itemInfoList_k__BackingField = v4->fields._itemInfoList_k__BackingField;
  if ( !itemInfoList_k__BackingField )
LABEL_11:
    sub_B5D69C(this, method);
  v9 = 0LL;
  while ( 1 )
  {
    size = itemInfoList_k__BackingField->fields._size;
    if ( (int)v9 >= size )
      return 1;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v11 = itemInfoList_k__BackingField->fields._items->m_Items[v9];
    if ( !v11 )
      goto LABEL_11;
    if ( !v11->fields.isItemNum )
      return 0;
    itemInfoList_k__BackingField = v4->fields._itemInfoList_k__BackingField;
    ++v9;
    if ( !itemInfoList_k__BackingField )
      goto LABEL_11;
  }
}


void __fastcall LevelExceedControl__ClearItemList(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Component_o *itemListGrid; // x0
  int32_t childCount; // w0
  int32_t v7; // w20
  UnityEngine_Object_o *gameObject; // x21

  if ( (byte_42E7D45 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7D45 = 1;
  }
  itemListGrid = (UnityEngine_Component_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_14;
  itemListGrid = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(itemListGrid, 0LL);
  if ( !itemListGrid )
    goto LABEL_14;
  childCount = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)itemListGrid, 0LL);
  v7 = childCount - 1;
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
                                                  v7,
                                                  0LL);
      if ( !itemListGrid )
        break;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(itemListGrid, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      if ( --v7 < 0 )
        return;
    }
LABEL_14:
    sub_B5D69C(itemListGrid, method);
  }
}


CommonConsumeEntity_array *__fastcall LevelExceedControl__GetConsumeItemList(
        LevelExceedControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserServantEntity_o *baseData; // x0
  ServantExceedEntity_o *SvtExceedEnt; // x0
  ServantExceedEntity_o *v10; // x20
  int32_t v11; // w21
  const MethodInfo *v12; // x3
  CommonConsumeEntity_array *consumeList; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7D3F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_CommonConsumeMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7D3F = 1;
  }
  consumeList = 0LL;
  baseData = this->fields.baseData;
  if ( !baseData )
    goto LABEL_12;
  SvtExceedEnt = UserServantEntity__getSvtExceedEnt(baseData, 0LL);
  v10 = SvtExceedEnt;
  v11 = SvtExceedEnt ? SvtExceedEnt->fields.consumeId : 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  baseData = (UserServantEntity_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_CommonConsumeMaster___);
  if ( !baseData )
LABEL_12:
    sub_B5D69C(baseData, method);
  consumeList = CommonConsumeMaster__GetIdEntityList((CommonConsumeMaster_o *)baseData, v11, 0LL);
  LevelExceedControl__SetAddConsumeItem(this, v10, &consumeList, v12);
  return consumeList;
}


int32_t __fastcall LevelExceedControl__GetTutorialOpenType(LevelExceedControl_o *this, const MethodInfo *method)
{
  return 40;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__InitDispInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  UILabel_o *needQpLb; // x20
  System_String_o *itemListGrid; // x0
  __int64 v16; // x1
  UIWidget_o *v17; // x20
  int v18; // s0
  const MethodInfo *v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  UnityEngine_GameObject_o *itemInfoPrefab; // x20
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v38; // x1
  struct UICharaGraphTexture_o **p_charaGraph; // x20
  UnityEngine_Object_o *charaGraph; // x21
  UnityEngine_Object_o *gameObject; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  if ( (byte_42E7D3A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    byte_42E7D3A = 1;
  }
  LevelExceedControl__SetHaveQpIno(this, method);
  this->fields.spendQpVal = 0;
  needQpLb = this->fields.needQpLb;
  itemListGrid = System_Int32__ToString((int)this + 208, 0LL);
  if ( !needQpLb )
    goto LABEL_19;
  UILabel__set_text(needQpLb, itemListGrid, 0LL);
  v17 = (UIWidget_o *)this->fields.needQpLb;
  *(UnityEngine_Color_o *)&v18 = UnityEngine_Color__get_white(0LL);
  if ( !v17 )
    goto LABEL_19;
  UIWidget__set_color(v17, *(UnityEngine_Color_o *)&v18, 0LL);
  *(_DWORD *)&this->fields.isMaxLv = 16843009;
  LevelExceedControl__ClearItemList(this, v22);
  this->fields.itemIdList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.itemIdList, 0LL, v23, v24, v25, v26, v27, v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.materialItemObjList = (struct System_Collections_Generic_List_GameObject__o *)v29;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.materialItemObjList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
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
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
  itemListGrid = (System_String_o *)this->fields.itemListGrid;
  if ( !itemListGrid )
    goto LABEL_19;
  UIGrid__set_repositionNow((UIGrid_o *)itemListGrid, 1, 0LL);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v38);
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
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
    *p_charaGraph = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.charaGraph, 0LL, v42, v43, v44, v45, v46, v47);
  }
  itemListGrid = (System_String_o *)this->fields.combineInfoComp;
  if ( !itemListGrid )
LABEL_19:
    sub_B5D69C(itemListGrid, v16);
  CombineInfoComponent__initStatusInfo((CombineInfoComponent_o *)itemListGrid, 1, 0LL);
}


void __fastcall LevelExceedControl__InitLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  __int64 v8; // x1
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  UILabel_o *preSelectBaseLb; // x20

  if ( (byte_42E7D39 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, v5, v6, v7);
    byte_42E7D39 = 1;
  }
  EventTutorialMaster__CheckTutorial(0, 40, 0LL, 0, 0, 0, 0, 0LL);
  CombineMenuControl__InitMenuControl((CombineMenuControl_o *)this, 0LL);
  helpBtn = this->fields.helpBtn;
  if ( !helpBtn )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
  this->fields.isSelectBase = 0;
  LevelExceedControl__InitDispInfo(this, v10);
  this->fields._IsExeCombine_k__BackingField = 0;
  LevelExceedControl__SetExeBtnState(this, v11);
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
  helpBtn = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8932/*"MSG_PRESELECT_BASE_SVT"*/, 0LL);
  if ( !preSelectBaseLb
    || (UILabel__set_text(preSelectBaseLb, (System_String_o *)helpBtn, 0LL),
        (helpBtn = this->fields.preSelectBaseObj) == 0LL)
    || (UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL), (helpBtn = this->fields.baseSelectInfoLb) == 0LL) )
  {
LABEL_12:
    sub_B5D69C(helpBtn, v8);
  }
  UnityEngine_GameObject__SetActive(helpBtn, 1, 0LL);
}


void __fastcall LevelExceedControl__OnClickCheckLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E7D47 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v5, v6, v7);
    byte_42E7D47 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v8,
    this->fields.spendQpVal,
    this->fields.haveQpVal,
    1,
    0LL);
}


void __fastcall LevelExceedControl__OnClickExeLvExceed(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E7D46 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, v5, v6, v7);
    byte_42E7D46 = 1;
  }
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v8 = LocalizationManager__Get((System_String_o *)StringLiteral_3397/*"CONFIRM_TITLE_EXCEED_COMBINE"*/, 0LL);
  if ( !this->fields.exeCombineDlg )
    sub_B5D69C(v8, v9);
  SetRarityDialogControl__SetConfirmLvExceed(
    this->fields.exeCombineDlg,
    this->fields.baseData,
    v8,
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
    sub_B5D69C(0LL, method);
  SetRarityDialogControl__SetConfirmLvExceed_30953692(
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  CommonConsumeEntity_o *v22; // x21
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v24; // x1
  struct UserServantEntity_o *baseData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  CommonConsumeEntity_array *v29; // x19
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 v37; // x8
  char *v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_42E7D40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Resize_CommonConsumeEntity___, (_DWORD)svtExceedEnt, (_DWORD)consumeList, method);
    sub_B5D5C4(&CommonConsumeEntity_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_SvtCoinMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__, v16, v17, v18);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19, v20, v21);
    byte_42E7D40 = 1;
  }
  if ( svtExceedEnt && *consumeList && svtExceedEnt->fields.objectNum >= 1 )
  {
    v22 = (CommonConsumeEntity_o *)sub_B5D694(CommonConsumeEntity_TypeInfo);
    CommonConsumeEntity___ctor(v22, 0LL);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SvtCoinMaster___);
    baseData = this->fields.baseData;
    if ( !baseData )
      goto LABEL_22;
    v26 = (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster;
    v28 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
    v27 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v41.fields.currentCryptoKey = v28;
    *(_QWORD *)&v41.fields.fakeValue = v27;
    Master_WarQuestSelectionMaster = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                               v41,
                                               0LL);
    if ( !v26
      || (Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v26,
                                             (int32_t)Master_WarQuestSelectionMaster,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_SvtCoinMaster__SvtCoinEntity__int__GetEntity__)) == 0LL
      || !v22
      || (v22->fields.objectId = *((_DWORD *)Master_WarQuestSelectionMaster + 6),
          v22->fields.num = svtExceedEnt->fields.objectNum,
          !*consumeList)
      || (System_Array__Resize_WarBoardSquareIndexData_(
            (WarBoardSquareIndexData_array **)consumeList,
            (*consumeList)->max_length + 1,
            (const MethodInfo_2236DC0 *)Method_System_Array_Resize_CommonConsumeEntity___),
          (v29 = *consumeList) == 0LL) )
    {
LABEL_22:
      sub_B5D69C(Master_WarQuestSelectionMaster, v24);
    }
    v30 = sub_B5D684(v22, v29->obj.klass->_1.element_class);
    if ( !v30 )
    {
      v39 = sub_B5D6BC(0LL);
      sub_B5D668(v39, 0LL);
    }
    v37 = *(_QWORD *)&v29->max_length;
    if ( !(_DWORD)v37 )
    {
      v40 = sub_B5D6C8(v30);
      sub_B5D668(v40, 0LL);
    }
    v38 = (char *)v29 + (((v37 << 32) - 0x100000000LL) >> 29);
    *((_QWORD *)v38 + 4) = v22;
    sub_B5D560((BattleServantConfConponent_o *)(v38 + 32), (System_Int32_array **)v22, v31, v32, v33, v34, v35, v36);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  int32_t CardImageLimitCount; // w21
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x23
  __int64 v24; // x24
  ServantLimitImageMaster_o *v25; // x22
  int32_t ServantImageLimitSealAfter; // w0
  struct UICharaGraphTexture_o **p_charaGraph; // x21
  UnityEngine_Object_o *charaGraph; // x23
  int32_t v29; // w22
  struct UICharaGraphTexture_o *TexturePrefab_26715804; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v37; // 0:x0.16

  if ( (byte_42E7D3D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, (_DWORD)usrSvtData, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    byte_42E7D3D = 1;
  }
  this->fields.baseData = usrSvtData;
  sub_B5D560(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  v24 = *(_QWORD *)&usrSvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&usrSvtData->fields.svtId.fields.fakeValue;
  v25 = (ServantLimitImageMaster_o *)MasterData_WarQuestSelectionMaster;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v37.fields.currentCryptoKey = v24;
  *(_QWORD *)&v37.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v37, 0LL);
  if ( !v25 )
    goto LABEL_16;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 v25,
                                 (int32_t)Instance,
                                 CardImageLimitCount,
                                 0LL);
  p_charaGraph = &this->fields.charaGraph;
  charaGraph = (UnityEngine_Object_o *)this->fields.charaGraph;
  v29 = ServantImageLimitSealAfter;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(charaGraph, 0LL, 0LL) )
  {
    TexturePrefab_26715804 = CharaGraphManager__CreateTexturePrefab_26715804(
                               this->fields.charaGraphBase,
                               usrSvtData,
                               v29,
                               10,
                               0LL,
                               0,
                               0LL);
    this->fields.charaGraph = TexturePrefab_26715804;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.charaGraph,
      (System_Int32_array **)TexturePrefab_26715804,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    return;
  }
  Instance = (DataManager_o *)*p_charaGraph;
  if ( !*p_charaGraph )
LABEL_16:
    sub_B5D69C(Instance, v20);
  UICharaGraphTexture__SetCharacter_35988116((UICharaGraphTexture_o *)Instance, usrSvtData, v29, 0LL, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExceedInfo(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  LevelExceedControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  struct UserServantEntity_o *baseData; // x8
  __int64 v39; // x20
  __int64 v40; // x21
  __int64 v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  struct UserServantEntity_o *v49; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v50; // x8
  struct UserServantEntity_o *v51; // x8
  struct UserServantEntity_o *v52; // x8
  struct UserServantEntity_o *v53; // x8
  struct UserServantEntity_o *v54; // x8
  UILabel_o *needQpLb; // x20
  const MethodInfo *v56; // x1
  CommonConsumeEntity_array *ConsumeItemList; // x20
  const MethodInfo *v58; // x2
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct System_Collections_Generic_List_GameObject__o *materialItemObjList; // x8
  int size; // w25
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x22
  LevelExceedControl_o **p_itemInfoList_k__BackingField; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  __int64 v76; // x26
  int v77; // w27
  struct System_Collections_Generic_List_GameObject__o *v78; // x22
  LevelExceedControl_o *v79; // x22
  unsigned int max_length; // w8
  _BOOL4 v81; // w9
  CommonConsumeEntity_o *v82; // x8
  float m_Height; // w23
  struct System_Int32_array *itemIdList; // x9
  float m_XMin; // w24
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  const MethodInfo *v88; // x4
  UIWidget_o *v89; // x20
  int v90; // s0
  const MethodInfo *v94; // x1
  UIWidget_o *v95; // x20
  int v96; // s0
  const MethodInfo *v100; // x1
  const MethodInfo *v101; // x1
  __int64 v102; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v103; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v104; // [xsp+30h] [xbp-80h]
  float barExp; // [xsp+54h] [xbp-5Ch] BYREF
  int32_t lateExp; // [xsp+58h] [xbp-58h] BYREF
  int32_t exp; // [xsp+5Ch] [xbp-54h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v108; // 0:x0.16

  v4 = this;
  if ( (byte_42E7D42 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CombineSvtData_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___, v8, v9, v10);
    sub_B5D5C4(&int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__get_Item__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33, v34);
    this = (LevelExceedControl_o *)sub_B5D5C4(&StringLiteral_9361/*"N0"*/, v35, v36, v37);
    byte_42E7D42 = 1;
  }
  exp = 0;
  barExp = 0.0;
  lateExp = 0;
  baseData = v4->fields.baseData;
  if ( !baseData )
    goto LABEL_69;
  v40 = *(_QWORD *)&baseData->fields.svtId.fields.currentCryptoKey;
  v39 = *(_QWORD *)&baseData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v108.fields.currentCryptoKey = v40;
  *(_QWORD *)&v108.fields.fakeValue = v39;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v108, 0LL);
  this = (LevelExceedControl_o *)v4->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCurrentStatusInfo((CombineInfoComponent_o *)this, v4->fields.baseData, 0LL);
  v41 = sub_B5D694(CombineSvtData_TypeInfo);
  CombineSvtData___ctor((CombineSvtData_o *)v41, 0LL);
  if ( !v41 )
    goto LABEL_69;
  v48 = (System_Int32_array **)v4->fields.baseData;
  *(_QWORD *)(v41 + 16) = v48;
  sub_B5D560((BattleServantConfConponent_o *)(v41 + 16), v48, v42, v43, v44, v45, v46, v47);
  v49 = v4->fields.baseData;
  if ( !v49 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 24) = v49->fields.lv;
  v50 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)v4->fields.baseData;
  if ( !v50 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 28) = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v50[6], 0LL);
  this = (LevelExceedControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_69;
  *(_DWORD *)(v41 + 32) = UserServantEntity__getExceedLvMax(
                            (UserServantEntity_o *)this,
                            LODWORD(this[1].monitor) + 1,
                            0LL);
  this = (LevelExceedControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_69;
  this = (LevelExceedControl_o *)UserServantEntity__getExpInfo(
                                   (UserServantEntity_o *)this,
                                   &exp,
                                   &lateExp,
                                   &barExp,
                                   0LL);
  *(float *)(v41 + 36) = barExp;
  *(_DWORD *)(v41 + 40) = lateExp;
  v51 = v4->fields.baseData;
  if ( !v51 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 44) = v51->fields.hp;
  v52 = v4->fields.baseData;
  if ( !v52 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 48) = v52->fields.adjustHp;
  v53 = v4->fields.baseData;
  if ( !v53 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 52) = v53->fields.atk;
  v54 = v4->fields.baseData;
  if ( !v54 )
    goto LABEL_69;
  *(_DWORD *)(v41 + 56) = v54->fields.adjustAtk;
  this = (LevelExceedControl_o *)v4->fields.combineInfoComp;
  if ( !this )
    goto LABEL_69;
  CombineInfoComponent__setCombineResStatusInfo((CombineInfoComponent_o *)this, (CombineSvtData_o *)v41, 0LL);
  this = (LevelExceedControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_69;
  v4->fields.spendQpVal = UserServantEntity__getCombineQpSvtExceed((UserServantEntity_o *)this, 0LL);
  needQpLb = v4->fields.needQpLb;
  this = (LevelExceedControl_o *)System_Int32__ToString_39741776(
                                   (int)v4 + 208,
                                   (System_String_o *)StringLiteral_9361/*"N0"*/,
                                   0LL);
  if ( !needQpLb )
    goto LABEL_69;
  UILabel__set_text(needQpLb, (System_String_o *)this, 0LL);
  ConsumeItemList = LevelExceedControl__GetConsumeItemList(v4, v56);
  LevelExceedControl__AdjustMaterialItemObjList(v4, ConsumeItemList, v58);
  if ( ConsumeItemList )
  {
    v59 = (System_Int32_array **)sub_B5D5DC(int___TypeInfo, ConsumeItemList->max_length);
    v4->fields.itemIdList = (struct System_Int32_array *)v59;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.itemIdList, v59, v60, v61, v62, v63, v64, v65);
  }
  materialItemObjList = v4->fields.materialItemObjList;
  if ( !materialItemObjList )
    goto LABEL_69;
  size = materialItemObjList->fields._size;
  v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_LimitCntUpItemComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v68,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_LimitCntUpItemComponent___ctor__);
  v4->fields._itemInfoList_k__BackingField = (struct System_Collections_Generic_List_LimitCntUpItemComponent__o *)v68;
  p_itemInfoList_k__BackingField = (LevelExceedControl_o **)&v4->fields._itemInfoList_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v4->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)v68,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  if ( size >= 1 )
  {
    v76 = 0LL;
    v77 = 0;
    while ( 1 )
    {
      v78 = v4->fields.materialItemObjList;
      if ( !v78 )
        goto LABEL_69;
      if ( v78->fields._size <= (unsigned int)v76 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (LevelExceedControl_o *)v78->fields._items->m_Items[v76];
      if ( !this )
        goto LABEL_69;
      this = (LevelExceedControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       (UnityEngine_GameObject_o *)this,
                                       (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_LimitCntUpItemComponent___);
      v79 = this;
      if ( !ConsumeItemList )
        break;
      max_length = ConsumeItemList->max_length;
      v81 = max_length != 0;
      if ( !max_length )
        v81 = v77;
      if ( !max_length )
        break;
      if ( (unsigned int)v76 >= max_length )
        goto LABEL_70;
      v82 = ConsumeItemList->m_Items[v76];
      if ( !v82 )
        goto LABEL_69;
      m_Height = *(float *)&v82->fields.objectId;
      if ( !v81 )
      {
        v77 = 0;
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
      itemIdList = v4->fields.itemIdList;
      if ( !itemIdList )
        goto LABEL_69;
      if ( (unsigned int)v76 >= itemIdList->max_length )
      {
LABEL_70:
        v102 = sub_B5D6C8(this);
        sub_B5D668(v102, 0LL);
      }
      m_XMin = *(float *)&v82->fields.num;
      v77 = 1;
      *(float *)&itemIdList->m_Items[v76 + 1] = m_Height;
LABEL_48:
      v86 = v4->fields.baseData;
      if ( !v86 )
        goto LABEL_69;
      v87 = *(_OWORD *)&v86->fields.userId.fields.fakeValue;
      *(_OWORD *)&v104.fields.currentCryptoKey = *(_OWORD *)&v86->fields.userId.fields.currentCryptoKey;
      *(_OWORD *)&v104.fields.fakeValue = v87;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v103 = v104;
      this = (LevelExceedControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v103, 0LL);
      if ( !v79 )
        goto LABEL_69;
      LimitCntUpItemComponent__setLimitUpItemInfo(
        (LimitCntUpItemComponent_o *)v79,
        (int64_t)this,
        SLODWORD(m_Height),
        SLODWORD(m_XMin),
        v88);
      this = *p_itemInfoList_k__BackingField;
      if ( !*p_itemInfoList_k__BackingField )
        goto LABEL_69;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_LimitCntUpItemComponent__Add__);
      if ( (int)++v76 >= size )
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
  this = (LevelExceedControl_o *)v4->fields.itemListGrid;
  if ( !this )
    goto LABEL_69;
  UIGrid__set_repositionNow((UIGrid_o *)this, 1, 0LL);
  v89 = (UIWidget_o *)v4->fields.needQpLb;
  *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
  if ( !v89 )
    goto LABEL_69;
  UIWidget__set_color(v89, *(UnityEngine_Color_o *)&v90, 0LL);
  this = (LevelExceedControl_o *)v4->fields.baseData;
  v4->fields._IsExeCombine_k__BackingField = 1;
  if ( !this )
    goto LABEL_69;
  if ( !UserServantEntity__isLimitCountMax((UserServantEntity_o *)this, 0LL) )
  {
    v4->fields.isMaxLimitCnt = 0;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  this = (LevelExceedControl_o *)v4->fields.baseData;
  if ( !this )
    goto LABEL_69;
  if ( !UserServantEntity__isLevelMax((UserServantEntity_o *)this, 0LL) )
  {
    v4->fields.isMaxLv = 0;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  if ( v4->fields.haveQpVal < v4->fields.spendQpVal )
  {
    v95 = (UIWidget_o *)v4->fields.needQpLb;
    v4->fields.isQpNum = 0;
    *(UnityEngine_Color_o *)&v96 = UnityEngine_Color__get_red(0LL);
    if ( v95 )
    {
      UIWidget__set_color(v95, *(UnityEngine_Color_o *)&v96, 0LL);
      v4->fields._IsExeCombine_k__BackingField = 0;
      goto LABEL_66;
    }
LABEL_69:
    sub_B5D69C(this, method);
  }
LABEL_66:
  if ( !LevelExceedControl__CheckItemHaveNum(v4, v94) )
  {
    v4->fields.isItemNum = 0;
    v4->fields._IsExeCombine_k__BackingField = 0;
  }
  LevelExceedControl__SetExeBtnState(v4, v100);
  LevelExceedControl__CheckConductionWire(v4, v101);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetExeBtnState(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Component_o *combineBtnBg; // x0
  UIWidget_o *v9; // x20
  WebViewObject_o *Component_WebViewObject; // x0
  _BOOL4 IsExeCombine_k__BackingField; // w8
  UnityEngine_Behaviour_o *v12; // x19
  int v13; // s0
  int v17; // s0

  if ( (byte_42E7D44 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TweenScale___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5, v6, v7);
    byte_42E7D44 = 1;
  }
  combineBtnBg = (UnityEngine_Component_o *)this->fields.combineBtnBg;
  if ( !combineBtnBg )
    goto LABEL_12;
  combineBtnBg = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                              combineBtnBg,
                                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( !this->fields.combineTxtImg )
    goto LABEL_12;
  v9 = (UIWidget_o *)combineBtnBg;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this->fields.combineTxtImg,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TweenScale___);
  IsExeCombine_k__BackingField = this->fields._IsExeCombine_k__BackingField;
  v12 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
  if ( IsExeCombine_k__BackingField )
  {
    *(UnityEngine_Color_o *)&v13 = UnityEngine_Color__get_white(0LL);
    if ( v9 )
    {
      UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v13, 0LL);
      if ( v12 )
      {
        UnityEngine_Behaviour__set_enabled(v12, 1, 0LL);
        UITweener__PlayForward((UITweener_o *)v12, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(combineBtnBg, method);
  }
  *(UnityEngine_Color_o *)&v17 = UnityEngine_Color__get_gray(0LL);
  if ( !v9 )
    goto LABEL_12;
  UIWidget__set_color(v9, *(UnityEngine_Color_o *)&v17, 0LL);
  if ( !v12 )
    goto LABEL_12;
  UnityEngine_Behaviour__set_enabled(v12, 0, 0LL);
}


void __fastcall LevelExceedControl__SetHaveQpIno(LevelExceedControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t *p_haveQpVal; // x19
  UILabel_o *v8; // x20

  if ( (byte_42E7D3B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_9361/*"N0"*/, (_DWORD)method, v2, v3);
    byte_42E7D3B = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame
    || (this->fields.haveQpVal = (int32_t)SelfUserGame[4].klass,
        p_haveQpVal = &this->fields.haveQpVal,
        v8 = *(UILabel_o **)(p_haveQpVal - 9),
        SelfUserGame = System_Int32__ToString_39741776((int32_t)p_haveQpVal, (System_String_o *)StringLiteral_9361/*"N0"*/, 0LL),
        !v8) )
  {
    sub_B5D69C(SelfUserGame, v6);
  }
  UILabel__set_text(v8, SelfUserGame, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall LevelExceedControl__SetStateInfoMsg(
        LevelExceedControl_o *this,
        int32_t state,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v4; // w21
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_Component_o *detailInfoLb; // x0
  WebViewObject_o *Component_WebViewObject; // x0
  UIWidget_o *v29; // x20
  float v30; // s4
  float v31; // s5
  float v32; // s6
  __int64 *v33; // x8
  UnityEngine_Color_o v34; // [xsp+0h] [xbp-30h] BYREF
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v38; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = state;
  if ( (byte_42E7D48 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_UIWidget___, state, (_DWORD)method, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_8928/*"MSG_MAX_LVEXCEED"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_1/*""*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_7362/*"INFO_MSG_LVEXCEED"*/, v24, v25, v26);
    byte_42E7D48 = 1;
  }
  detailInfoLb = (UnityEngine_Component_o *)this->fields.detailInfoLb;
  if ( !detailInfoLb )
    goto LABEL_36;
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              detailInfoLb,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v35.fields.g = 0.87891;
  v35.fields.b = 0.98828;
  v29 = (UIWidget_o *)Component_WebViewObject;
  v35.fields.r = 0.0;
  *(_QWORD *)&v34.fields.r = 0LL;
  *(_QWORD *)&v34.fields.b = 0LL;
  UnityEngine_Color___ctor_41567816(v35, v30, v31, v32, (const MethodInfo *)&v34);
  if ( !v29 )
LABEL_36:
    sub_B5D69C(detailInfoLb, *(_QWORD *)&state);
  UIWidget__set_color(v29, v34, 0LL);
  if ( v4 == 2 )
  {
    if ( this->fields._IsExeCombine_k__BackingField )
      goto LABEL_39;
    if ( !this->fields.isMaxLimitCnt || !this->fields.isMaxLv )
    {
      white = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v29, white, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = &StringLiteral_8928/*"MSG_MAX_LVEXCEED"*/;
      goto LABEL_29;
    }
    if ( !this->fields.isItemNum )
    {
      v38 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v29, v38, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = &StringLiteral_12361/*"SHORT_ITEM_INFO_MSG"*/;
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
      v33 = &StringLiteral_5840/*"EXE_SUMMON_COMBINE_TXT"*/;
    }
    else
    {
      v36 = UnityEngine_Color__get_white(0LL);
      UIWidget__set_color(v29, v36, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v33 = &StringLiteral_12362/*"SHORT_QP_INFO_MSG"*/;
    }
  }
  else
  {
    if ( v4 )
    {
      *(_QWORD *)&state = StringLiteral_1/*""*/;
      goto LABEL_30;
    }
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v33 = &StringLiteral_7362/*"INFO_MSG_LVEXCEED"*/;
  }
LABEL_29:
  *(_QWORD *)&state = LocalizationManager__Get((System_String_o *)*v33, 0LL);
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
    sub_B5D69C(preSelectBaseObj, method);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._itemInfoList_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}