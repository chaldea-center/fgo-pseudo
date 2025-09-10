void BattleDropItemComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C29BCC & 1) == 0 )
  {
    sub_1C2D490(&BattleDropItemComponent_TypeInfo);
    byte_4C29BCC = 1;
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
      goto LABEL_13;
  }
  else
  {
    IsServant = Gift__IsItem(this->fields.gifttype, 0);
    if ( !IsServant )
    {
      IsServant = Gift__IsCommandCode(this->fields.gifttype, 0);
      if ( IsServant )
      {
        itemData = this->fields.itemData;
        if ( !itemData )
          goto LABEL_16;
        if ( itemData->fields.userSvtId >= 1 )
          goto LABEL_13;
        return;
      }
      IsServant = Gift__IsEventPointBuff(this->fields.gifttype, 0);
      if ( !IsServant )
        return;
    }
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
  }
  if ( itemData->fields.objectId >= 1 )
  {
LABEL_13:
    callbackFunc = this->fields.callbackFunc;
    if ( callbackFunc )
    {
      ((void (__fastcall *)(intptr_t))callbackFunc->fields.invoke_impl)(callbackFunc->fields.method_code);
      return;
    }
LABEL_16:
    sub_1C2D6EC(IsServant, itemData);
  }
}


void BattleDropItemComponent__Set(BattleDropItemComponent_o *this, BattleDropItem_o *indata, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  UnityEngine_Object_o *back; // x21
  const MethodInfo *v15; // x2
  bool v16; // w1

  if ( (byte_4C29BC1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BC1 = 1;
  }
  this->fields.itemData = indata;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemData, (int32_t)indata, (int32_t)method, v3);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_30;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_30;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v8);
  if ( Gift__IsServant(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetServant(this, v10);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetItem(this, v11);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetCommandCode(this, v12);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v13);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
  BattleDropItemComponent__SetAutoSellItem(this, v7);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v15);
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
          v16 = 0;
LABEL_28:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0);
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
        v16 = 1;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1C2D6EC(gameObject, v7);
  }
}


void BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  struct BattleDropItem_o *v5; // x8

  v2 = this;
  if ( (byte_4C29BC6 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BC6 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_15;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v2->fields.autoSellInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
            v5->fields.sellQp * v5->fields.num,
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
    sub_1C2D6EC(this, method);
  }
}


void BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackFunc = call;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)call, (int32_t)method, v3);
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
    sub_1C2D6EC(item, method);
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

  if ( (byte_4C29BC5 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C29BC5 = 1;
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
  servant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_object_(
                    (DataManager_o *)servant,
                    (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0)
    || !servant
    || (servant = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_3387D98 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0
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
    sub_1C2D6EC(servant, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0);
}


void BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  int32_t v7; // w2
  struct BattleDropItem_o *v8; // x8
  int v9; // w10
  int32_t v10; // w9
  struct BattleDropItem_o *v11; // x8
  struct BattleDropItem_o *v12; // x9
  ServantFaceIconComponent_o *v13; // x8
  int32_t v14; // w2
  int32_t v15; // w8

  if ( (byte_4C29BC4 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C29BC4 = 1;
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
    itemData->fields.originalNum = num;
    itemData = this->fields.itemData;
    originalNum = num;
    if ( !itemData )
      goto LABEL_33;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  method = (const MethodInfo *)(unsigned int)itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, -1, 1, 0);
  }
  else
  {
    v7 = itemData->fields.originalNum;
    if ( v7 < 1 )
    {
      v7 = itemData->fields.num;
      itemData->fields.originalNum = v7;
    }
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, v7, 1, 0);
    v8 = this->fields.itemData;
    if ( !v8 )
      goto LABEL_33;
    v9 = v8->fields.originalNum;
    v10 = v8->fields.num;
    if ( v9 <= 0 )
    {
      v9 = v8->fields.num;
      v8->fields.originalNum = v10;
    }
    if ( v10 - v9 >= 1 )
    {
      servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( servant )
      {
        servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)servant,
                                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
        v11 = this->fields.itemData;
        if ( v11 )
        {
          if ( servant )
          {
            servant = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                                                      v11->fields.objectId,
                                                      (const MethodInfo_3387D98 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( servant )
            {
              v12 = this->fields.itemData;
              if ( v12 )
              {
                v13 = servant;
                v14 = v12->fields.originalNum;
                servant = (ServantFaceIconComponent_o *)this->fields.item;
                method = (const MethodInfo *)LODWORD(v13->fields.frameSprite);
                v15 = v12->fields.num;
                if ( v14 <= 0 )
                {
                  v14 = v12->fields.num;
                  v12->fields.originalNum = v15;
                }
                if ( servant )
                {
                  BattleItemIconComponent__setCounterLabel(
                    (BattleItemIconComponent_o *)servant,
                    (int32_t)method,
                    v14,
                    (v15 - v14) & ~((v15 - v14) >> 31),
                    0);
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_1C2D6EC(servant, method);
    }
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


void BattleDropItemComponent__SetMaterialTd(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v8; // x19

  if ( (byte_4C29BC9 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_23090/*"ribbon_noblephantasmup_01"*/);
    byte_4C29BC9 = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0);
    if ( flg )
    {
      v8 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v8, (System_String_o *)StringLiteral_23090/*"ribbon_noblephantasmup_01"*/, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__SetPossession(BattleDropItemComponent_o *this, int32_t num, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v7; // x0
  void *transform; // x0
  __int64 v9; // x1
  int v10; // w20
  BattleDropItemComponent_c *v11; // x8
  float v12; // s9
  float PossessionLabelWidth; // s8
  UnityEngine_Transform_o *v14; // x20
  struct UILabel_o *v15; // x8
  float y; // s1
  float x; // s0 OVERLAPPED
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t possessionNum; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4C29BCB & 1) == 0 )
  {
    sub_1C2D490(&BattleDropItemComponent_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_25029/*"{0:#,0}"*/);
    byte_4C29BCB = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum, method, v3, v4);
  transform = System_String__Format((System_String_o *)StringLiteral_25029/*"{0:#,0}"*/, v7, 0);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, (System_String_o *)transform, 0);
  transform = this->fields.possessionLabel;
  if ( !transform )
    goto LABEL_19;
  v10 = *((_DWORD *)transform + 42);
  v11 = BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
    transform = this->fields.possessionLabel;
    if ( !transform )
      goto LABEL_19;
    v11 = BattleDropItemComponent_TypeInfo;
  }
  v12 = (float)v10;
  PossessionLabelWidth = v11->static_fields->PossessionLabelWidth;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( PossessionLabelWidth >= v12 )
  {
    if ( !byte_4C20DA6 )
    {
      transform = (void *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    if ( v14 )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      y = static_fields->oneVector.fields.y;
      z = static_fields->oneVector.fields.z;
      x = static_fields->oneVector.fields.x;
      goto LABEL_18;
    }
LABEL_19:
    sub_1C2D6EC(transform, v9);
  }
  transform = BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
  v15 = this->fields.possessionLabel;
  if ( !v15 || !v14 )
    goto LABEL_19;
  y = 1.0;
  x = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v15->fields.mWidth;
  z = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&x, 0);
}


void BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  struct BattleDropItem_o *v5; // x8
  const MethodInfo *v6; // x2
  bool IsMaterialTd; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C29BC3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    byte_4C29BC3 = 1;
  }
  entity = 0;
  item = (ItemIconComponent_o *)this->fields.item;
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
    BattleServantFaceIconComponent__SetSvtDrop_40631284(
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  item = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserServantMaster___);
  v5 = this->fields.itemData;
  if ( !v5 || !item )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)item,
          &entity,
          v5->fields.userSvtId,
          (const MethodInfo_338A340 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_22;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1C2D6EC(item, method);
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)entity, 0);
LABEL_22:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v6);
}


void BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_4C29BC0 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_Collider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BC0 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1C2D6EC(gameObject, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleDropItemComponent__Set_45645800(
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
    sub_1C2D6EC(0, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x0
  bool v10; // w0
  float v11; // s0
  UILabel_o *v12; // x19
  System_String_o *v13; // x0
  System_String_o *v14; // x20
  System_String_o *v15; // x0
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  float v17[9]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C29BC2 & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_3129/*"Battle_RESULT_ITEM_DROPUP"*/);
    byte_4C29BC2 = 1;
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0, 0) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0, 0);
    if ( ((unsigned __int8)v7 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_20;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v7 = this->fields.AcquisitionUpObj;
      if ( !v7 )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(v7, 1, 0);
      v17[0] = (float)indata->fields.dropUpRate / 1000.0;
      result = 0;
      v9 = System_Single__ToString(v17[0], (const MethodInfo *)v17);
      v10 = System_Int32__TryParse(v9, &result, 0);
      v12 = this->fields.AcquisitionUpLabel;
      v13 = v10 ? System_Int32__ToString((int32_t)&result, 0) : System_Single__ToString(v11, (const MethodInfo *)v17);
      v14 = v13;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3129/*"Battle_RESULT_ITEM_DROPUP"*/, 0);
      v7 = (UnityEngine_GameObject_o *)System_String__Concat_63457864(v14, v15, 0);
      if ( !v12 )
LABEL_20:
        sub_1C2D6EC(v7, v8);
      UILabel__set_text(v12, (System_String_o *)v7, 0);
    }
  }
}


void BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoSellInfo; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_4C29BC7 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BC7 = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C2D6EC(gameObject, v4);
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
    sub_1C2D6EC(back, method);
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
  if ( (byte_4C29BCA & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BCA = 1;
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
    sub_1C2D6EC(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.servant;
    if ( !this )
      goto LABEL_31;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v4, 0);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v2->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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


void BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C29BC8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C29BC8 = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(additemflg, 0, 0) )
  {
    v7 = this->fields.additemflg;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flg, 0);
  }
}


void BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A74050;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A7414C;
          else
            v9 = sub_1A74110;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7408C;
        }
        else
        {
          v9 = sub_1A74060;
        }
      }
      else
      {
        v9 = sub_1A74030;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A73FE8;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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