void BattleDropItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5973401 & 1) == 0 )
  {
    sub_2213A60(&BattleDropItemComponent_TypeInfo);
    byte_5973401 = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  _BOOL8 IsServant; // x0
  struct BattleDropItem_o *itemData; // x1
  struct BattleDropItemComponent_ClickDelegate_o *callbackFunc; // x8

  IsServant = Gift__IsServant(this->fields.gifttype, 0);
  if ( IsServant )
  {
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    if ( itemData->fields.userSvtId > 0 )
      goto LABEL_8;
LABEL_7:
    if ( itemData->fields.objectId >= 1 )
      goto LABEL_8;
    return;
  }
  IsServant = Gift__IsItem(this->fields.gifttype, 0);
  if ( IsServant )
  {
LABEL_6:
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    goto LABEL_7;
  }
  IsServant = Gift__IsCommandCode(this->fields.gifttype, 0);
  if ( !IsServant )
  {
    IsServant = Gift__IsEventPointBuff(this->fields.gifttype, 0);
    if ( !IsServant )
      return;
    goto LABEL_6;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.userSvtId >= 1 )
  {
LABEL_8:
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      ((void (__fastcall *)(intptr_t))callbackFunc->fields.invoke_impl)(callbackFunc->fields.method_code);
      return;
    }
LABEL_16:
    sub_2213CDC(IsServant, itemData);
  }
}


void BattleDropItemComponent__Set(BattleDropItemComponent_o *this, BattleDropItem_o *indata, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1
  UnityEngine_Object_o *back; // x21
  const MethodInfo *v19; // x2
  bool v20; // w1

  if ( (byte_59733F6 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F6 = 1;
  }
  this->fields.itemData = indata;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemData,
    (int32_t)indata,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_30;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_30;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v12);
  if ( Gift__IsServant(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetServant(this, v14);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetItem(this, v16);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetCommandCode(this, v17);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v15);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(back, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.back;
    if ( !gameObject )
      goto LABEL_30;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  BattleDropItemComponent__SetAutoSellItem(this, v11);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v19);
  if ( indata->fields.isAddReward )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.root;
        if ( gameObject )
        {
          v20 = 0;
LABEL_28:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20, 0);
          return;
        }
      }
    }
    goto LABEL_30;
  }
  if ( indata->fields.isAdd )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        v20 = 1;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_2213CDC(gameObject, v11);
  }
}


void BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  struct BattleDropItem_o *v5; // x8

  v2 = this;
  if ( (byte_59733FB & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733FB = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_15;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v2->fields.autoSellInfo;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0, 0) )
      goto LABEL_13;
    this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
    if ( this )
    {
      AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)this, 0);
      v5 = v2->fields.itemData;
      if ( v5 )
      {
        this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
        if ( this )
        {
          AutoSellInfoComponent__SetData(
            (AutoSellInfoComponent_o *)this,
            v5->fields.sellMana * v5->fields.num,
            v5->fields.num * v5->fields.sellQp,
            -1,
            -1,
            0);
LABEL_13:
          BattleDropItemComponent__ShowAutoSellItem(v2, method);
          return;
        }
      }
    }
LABEL_15:
    sub_2213CDC(this, method);
  }
}


void BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackFunc = call;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)call,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleDropItemComponent__SetCommandCode(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8

  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  ItemIconComponent__Clear(item, 0);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !item )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_13;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDropByCodeId(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.num,
      0);
  }
  else
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDrop(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      itemData->fields.num,
      0);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item
    || (item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0)) == 0 )
  {
LABEL_13:
    sub_2213CDC(item, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0);
}


void BattleDropItemComponent__SetDepth(BattleDropItemComponent_o *this, int32_t basedepth, const MethodInfo *method)
{
  ;
}


void BattleDropItemComponent__SetEventPointBuff(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  void *servant; // x0
  struct BattleDropItem_o *itemData; // x8

  if ( (byte_59733FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_2213A60(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59733FA = 1;
  }
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servant, 0);
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0);
  if ( !servant )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0);
  servant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_object_(
                    (DataManager_o *)servant,
                    (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0)
    || !servant
    || (servant = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0
    || !this->fields.item
    || (ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)this->fields.item,
          *((_DWORD *)servant + 12),
          *((_DWORD *)servant + 13),
          0),
        (servant = this->fields.item) == 0)
    || (servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0)) == 0 )
  {
LABEL_14:
    sub_2213CDC(servant, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0);
}


void BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w9
  int32_t num; // w10
  struct BattleDropItem_o *v7; // x8
  int32_t v8; // w2
  struct BattleDropItem_o *v9; // x8
  int v10; // w10
  int32_t v11; // w9
  struct BattleDropItem_o *v12; // x8
  struct BattleDropItem_o *v13; // x9
  ServantFaceIconComponent_o *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w8

  if ( (byte_59733F9 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_2213A60(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59733F9 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  ServantFaceIconComponent__Clear(servant, 0);
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_33;
  originalNum = itemData->fields.originalNum;
  num = itemData->fields.num;
  if ( originalNum < 1 )
  {
    originalNum = itemData->fields.num;
    itemData->fields.originalNum = num;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  v7 = this->fields.itemData;
  if ( ((num - originalNum) & ~((num - originalNum) >> 31)) + originalNum <= 1 )
  {
    if ( v7 && servant )
    {
      ItemIconComponent__SetItem((ItemIconComponent_o *)servant, v7->fields.objectId, -1, 1, 0);
      goto LABEL_30;
    }
    goto LABEL_33;
  }
  if ( !v7 )
    goto LABEL_33;
  v8 = v7->fields.originalNum;
  if ( v8 <= 0 )
  {
    v8 = v7->fields.num;
    v7->fields.originalNum = v8;
  }
  if ( !servant )
    goto LABEL_33;
  ItemIconComponent__SetItem((ItemIconComponent_o *)servant, v7->fields.objectId, v8, 1, 0);
  v9 = this->fields.itemData;
  if ( !v9 )
    goto LABEL_33;
  v10 = v9->fields.originalNum;
  v11 = v9->fields.num;
  if ( v10 <= 0 )
  {
    v10 = v9->fields.num;
    v9->fields.originalNum = v11;
  }
  if ( v11 - v10 >= 1 )
  {
    servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( servant )
    {
      servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                                (DataManager_o *)servant,
                                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ItemMaster___);
      v12 = this->fields.itemData;
      if ( v12 )
      {
        if ( servant )
        {
          servant = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                    (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                                                    v12->fields.objectId,
                                                    (const MethodInfo_3F10B30 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
          if ( servant )
          {
            v13 = this->fields.itemData;
            if ( v13 )
            {
              v14 = servant;
              v15 = v13->fields.originalNum;
              servant = (ServantFaceIconComponent_o *)this->fields.item;
              method = (const MethodInfo *)LODWORD(v14->fields.frameSprite);
              v16 = v13->fields.num;
              if ( v15 <= 0 )
              {
                v15 = v13->fields.num;
                v13->fields.originalNum = v16;
              }
              if ( servant )
              {
                BattleItemIconComponent__setCounterLabel(
                  (BattleItemIconComponent_o *)servant,
                  (int32_t)method,
                  v15,
                  (v16 - v15) & ~((v16 - v15) >> 31),
                  0);
                goto LABEL_30;
              }
            }
          }
        }
      }
    }
LABEL_33:
    sub_2213CDC(servant, method);
  }
LABEL_30:
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__SetMaterialTd(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  __int64 v8; // x1
  UISprite_o *v9; // x19

  if ( (byte_59733FE & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_24320/*"ribbon_noblephantasmup_01"*/);
    byte_59733FE = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0);
    if ( flg )
    {
      v9 = this->fields.materialTdSprite;
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8);
      AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_24320/*"ribbon_noblephantasmup_01"*/, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__SetPossession(BattleDropItemComponent_o *this, int32_t num, const MethodInfo *method)
{
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v5; // x0
  System_String_o *transform; // x0
  __int64 v7; // x1
  struct UILabel_o *v8; // x8
  int mWidth; // w20
  BattleDropItemComponent_c *v10; // x0
  float *p_PossessionLabelWidth; // x8
  UnityEngine_Transform_o *v12; // x20
  struct UILabel_o *v13; // x8
  float z; // s2
  float x; // s0 OVERLAPPED
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t possessionNum; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5973400 & 1) == 0 )
  {
    sub_2213A60(&BattleDropItemComponent_TypeInfo);
    sub_2213A60(&StringLiteral_26432/*"{0:#,0}"*/);
    byte_5973400 = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &possessionNum);
  transform = System_String__Format((System_String_o *)StringLiteral_26432/*"{0:#,0}"*/, v5, 0);
  if ( !possessionLabel )
    goto LABEL_20;
  UILabel__set_text(possessionLabel, transform, 0);
  v8 = this->fields.possessionLabel;
  if ( !v8 )
    goto LABEL_20;
  mWidth = v8->fields.mWidth;
  v10 = BattleDropItemComponent_TypeInfo;
  if ( !*(&BattleDropItemComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo, v7);
    v10 = BattleDropItemComponent_TypeInfo;
  }
  p_PossessionLabelWidth = &v10->static_fields->PossessionLabelWidth;
  transform = (System_String_o *)this->fields.possessionLabel;
  if ( *p_PossessionLabelWidth >= (float)mWidth )
  {
    if ( transform )
    {
      transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
      v12 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5969AE5 )
      {
        transform = (System_String_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      if ( v12 )
      {
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
        x = static_fields->oneVector.fields.x;
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_2213CDC(transform, v7);
  }
  if ( !transform )
    goto LABEL_20;
  transform = (System_String_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  v12 = (UnityEngine_Transform_o *)transform;
  if ( !*(&BattleDropItemComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo, v7);
  v13 = this->fields.possessionLabel;
  if ( !v13 || !v12 )
    goto LABEL_20;
  z = 1.0;
  x = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v13->fields.mWidth;
  y = 1.0;
LABEL_19:
  UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0);
}


void BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  __int64 v5; // x1
  struct BattleDropItem_o *v6; // x8
  const MethodInfo *v7; // x2
  bool IsMaterialTd; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59733F8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_59733F8 = 1;
  }
  item = (ItemIconComponent_o *)this->fields.item;
  entity = 0;
  if ( !item )
    goto LABEL_23;
  ItemIconComponent__Clear(item, 0);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_23;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_23;
    BattleServantFaceIconComponent__SetSvtDrop(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.limitCount,
      itemData->fields.num,
      0);
  }
  else
  {
    if ( !item )
      goto LABEL_23;
    BattleServantFaceIconComponent__SetSvtDrop_47816616(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      0,
      itemData->fields.num,
      itemData->fields.limitCount,
      0);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5);
  item = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v6 = this->fields.itemData;
  if ( !v6 || !item )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)item,
          &entity,
          v6->fields.userSvtId,
          (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_22;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_23:
    sub_2213CDC(item, method);
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)entity, 0);
LABEL_22:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v7);
}


void BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_59733F5 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733F5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0,
                                             0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0);
      return;
    }
LABEL_10:
    sub_2213CDC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__Set_53120800(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        int32_t possessionNum,
        const MethodInfo *method)
{
  this->fields.possessionNum = possessionNum;
  BattleDropItemComponent__Set(this, indata, *(const MethodInfo **)&possessionNum);
}


void BattleDropItemComponent__Show(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  __int64 v6; // x1
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v8; // x0
  __int64 v9; // x1
  int32_t dropUpRate; // s0
  System_String_o *v11; // x0
  bool v12; // w0
  float v13; // s0
  UILabel_o *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  System_String_o *v18; // x0
  _QWORD v19[5]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59733F7 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_3257/*"Battle_RESULT_ITEM_DROPUP"*/);
    byte_59733F7 = 1;
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  v19[0] = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, indata);
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0, 0) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0, 0);
    if ( ((unsigned __int8)v8 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_20;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v8 = this->fields.AcquisitionUpObj;
      if ( !v8 )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(v8, 1, 0);
      dropUpRate = indata->fields.dropUpRate;
      LODWORD(v19[0]) = 0;
      *((float *)v19 + 1) = (float)dropUpRate / 1000.0;
      v11 = System_Single__ToString(*((float *)v19 + 1), (const MethodInfo *)((char *)v19 + 4));
      v12 = System_Int32__TryParse(v11, (int32_t *)v19, 0);
      v14 = this->fields.AcquisitionUpLabel;
      v15 = v12
          ? System_Int32__ToString((int32_t)v19, 0)
          : System_Single__ToString(v13, (const MethodInfo *)((char *)v19 + 4));
      v17 = v15;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16);
      v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3257/*"Battle_RESULT_ITEM_DROPUP"*/, 0);
      v8 = (UnityEngine_GameObject_o *)System_String__Concat_75651716(v17, v18, 0);
      if ( !v14 )
LABEL_20:
        sub_2213CDC(v8, v9);
      UILabel__set_text(v14, (System_String_o *)v8, 0);
    }
  }
}


void BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoSellInfo; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_59733FC & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733FC = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_2213CDC(gameObject, v4);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  }
}


void BattleDropItemComponent__ShowDropNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *back; // x0
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v5; // x2

  back = (UnityEngine_Component_o *)this->fields.back;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0);
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_19;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    BattleDropItemComponent__ShowAutoSellItem(this, method);
    return;
  }
  back = (UnityEngine_Component_o *)this->fields.possessionRoot;
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0);
  back = (UnityEngine_Component_o *)this->fields.item;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0);
  if ( !back )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0) )
  {
    back = (UnityEngine_Component_o *)this->fields.item;
    if ( !back )
      goto LABEL_19;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)back, 0, 0);
  }
  back = (UnityEngine_Component_o *)this->fields.servant;
  if ( !back || (back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0)) == 0 )
LABEL_19:
    sub_2213CDC(back, method);
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0) )
  {
    back = (UnityEngine_Component_o *)this->fields.servant;
    if ( back )
    {
      BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)back, 0, 0);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
LABEL_18:
  BattleDropItemComponent__ShowAcquisitionUp(this, this->fields.itemData, v5);
}


void BattleDropItemComponent__ShowPossessionNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  bool v4; // w20
  int32_t v5; // w1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x20

  v2 = this;
  if ( (byte_59733FF & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733FF = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_31;
  if ( itemData->fields.sellQp <= 0 && itemData->fields.sellMana < 1 )
  {
    v4 = 1;
  }
  else
  {
    this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
    if ( !this )
      goto LABEL_31;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (BattleDropItemComponent_o *)v2->fields.back;
    if ( !this )
      goto LABEL_31;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v4 = 0;
  }
  if ( v2->fields.possessionNum )
  {
    this = (BattleDropItemComponent_o *)v2->fields.possessionRoot;
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    BattleDropItemComponent__SetPossession(v2, v5, v6);
  }
  this = (BattleDropItemComponent_o *)v2->fields.item;
  if ( !this )
    goto LABEL_31;
  this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.item;
    if ( !this )
      goto LABEL_31;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)this, v4, 0);
  }
  this = (BattleDropItemComponent_o *)v2->fields.servant;
  if ( !this
    || (this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
LABEL_31:
    sub_2213CDC(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.servant;
    if ( !this )
      goto LABEL_31;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v4, 0);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v2->fields.AcquisitionUpObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0, 0) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.AcquisitionUpObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_59733FD & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59733FD = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, flg);
  if ( UnityEngine_Object__op_Inequality(additemflg, 0, 0) )
  {
    v7 = this->fields.additemflg;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flg, 0);
  }
}


void BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_201142C;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_2213B30(method);
        v16 = sub_22140B4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_2011524;
          else
            v13 = sub_20114E8;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_2011464;
        }
        else
        {
          v13 = sub_201143C;
        }
      }
      else
      {
        v13 = sub_2011410;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_20113C8;
}


System_IAsyncResult_o *BattleDropItemComponent_ClickDelegate__BeginInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  BattleDropItem_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = item;
  return (System_IAsyncResult_o *)sub_2213A14(this, &v6, callback, object);
}


void BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void BattleDropItemComponent_ClickDelegate__Invoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, BattleDropItem_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    item,
    this->fields.method);
}