void __fastcall BattleDropItemComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE8EF & 1) == 0 )
  {
    sub_1B640C8(&BattleDropItemComponent_TypeInfo, v1);
    byte_49FE8EF = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void __fastcall BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  _BOOL8 IsServant; // x0
  struct BattleDropItem_o *itemData; // x1
  struct BattleDropItem_o *v5; // x1
  struct BattleDropItemComponent_ClickDelegate_o *callbackFunc; // x8

  IsServant = Gift__IsServant(this->fields.gifttype, 0LL);
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
    IsServant = Gift__IsItem(this->fields.gifttype, 0LL);
    if ( !IsServant )
    {
      IsServant = Gift__IsCommandCode(this->fields.gifttype, 0LL);
      if ( IsServant )
      {
        v5 = this->fields.itemData;
        if ( !v5 )
          goto LABEL_16;
        if ( v5->fields.userSvtId >= 1 )
          goto LABEL_13;
        return;
      }
      IsServant = Gift__IsEventPointBuff(this->fields.gifttype, 0LL);
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
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *))callbackFunc->fields.m_target)(callbackFunc->fields.original_method_info);
      return;
    }
LABEL_16:
    sub_1B64324(IsServant);
  }
}


void __fastcall BattleDropItemComponent__Set(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v7; // x2
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_Object_o *back; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  bool v16; // w1

  if ( (byte_49FE8E4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, indata);
    byte_49FE8E4 = 1;
  }
  this->fields.itemData = indata;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemData, (int32_t)indata, (int32_t)method, v3);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_30;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_30;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v7);
  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetServant(this, v9);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetItem(this, v10);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetCommandCode(this, v11);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v12);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.back;
    if ( !gameObject )
      goto LABEL_30;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_30;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BattleDropItemComponent__SetAutoSellItem(this, v14);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v15);
  if ( indata->fields.isAddReward )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.root;
        if ( gameObject )
        {
          v16 = 0;
LABEL_28:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v16, 0LL);
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
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v16 = 1;
        goto LABEL_28;
      }
    }
LABEL_30:
    sub_1B64324(gameObject);
  }
}


void __fastcall BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  const MethodInfo *v5; // x1
  struct BattleDropItem_o *v6; // x8

  v2 = this;
  if ( (byte_49FE8E9 & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE8E9 = 1;
  }
  itemData = v2->fields.itemData;
  if ( !itemData )
    goto LABEL_15;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v2->fields.autoSellInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
      goto LABEL_13;
    this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
    if ( this )
    {
      AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)this, 0LL);
      v6 = v2->fields.itemData;
      if ( v6 )
      {
        this = (BattleDropItemComponent_o *)v2->fields.autoSellInfo;
        if ( this )
        {
          AutoSellInfoComponent__SetData(
            (AutoSellInfoComponent_o *)this,
            v6->fields.sellMana * v6->fields.num,
            v6->fields.sellQp * v6->fields.num,
            -1,
            -1,
            0LL);
LABEL_13:
          BattleDropItemComponent__ShowAutoSellItem(v2, v5);
          return;
        }
      }
    }
LABEL_15:
    sub_1B64324(this);
  }
}


void __fastcall BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callbackFunc = call;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)call, (int32_t)method, v3);
}


void __fastcall BattleDropItemComponent__SetCommandCode(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  int64_t userSvtId; // x1

  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_13;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_13;
  userSvtId = itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( userSvtId < 1 )
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDropByCodeId(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDrop(
      (BattleServantFaceIconComponent_o *)item,
      userSvtId,
      itemData->fields.num,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item
    || (item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL)) == 0LL )
  {
LABEL_13:
    sub_1B64324(item);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetDepth(
        BattleDropItemComponent_o *this,
        int32_t basedepth,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleDropItemComponent__SetEventPointBuff(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *servant; // x0
  struct BattleDropItem_o *itemData; // x8

  if ( (byte_49FE8E8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_EventPointBuffMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FE8E8 = 1;
  }
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  ServantFaceIconComponent__Clear((ServantFaceIconComponent_o *)servant, 0LL);
  servant = this->fields.servant;
  if ( !servant )
    goto LABEL_14;
  servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
  servant = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_object_(
                    (DataManager_o *)servant,
                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0LL)
    || !servant
    || (servant = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
    || !this->fields.item
    || (ItemIconComponent__SetEventPointBuffImage(
          (ItemIconComponent_o *)this->fields.item,
          *((_DWORD *)servant + 12),
          *((_DWORD *)servant + 13),
          0LL),
        (servant = this->fields.item) == 0LL)
    || (servant = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL)) == 0LL )
  {
LABEL_14:
    sub_1B64324(servant);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  int32_t objectId; // w1
  int32_t v10; // w2
  struct BattleDropItem_o *v11; // x8
  int v12; // w10
  int32_t v13; // w9
  struct BattleDropItem_o *v14; // x8
  struct BattleDropItem_o *v15; // x9
  ServantFaceIconComponent_o *v16; // x8
  int32_t v17; // w2
  int32_t frameSprite; // w1
  int32_t v19; // w8

  if ( (byte_49FE8E7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, method);
    sub_1B640C8(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49FE8E7 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  ServantFaceIconComponent__Clear(servant, 0LL);
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
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
  objectId = itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, objectId, -1, 0LL);
  }
  else
  {
    v10 = itemData->fields.originalNum;
    if ( v10 < 1 )
    {
      v10 = itemData->fields.num;
      itemData->fields.originalNum = v10;
    }
    if ( !servant )
      goto LABEL_33;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, objectId, v10, 0LL);
    v11 = this->fields.itemData;
    if ( !v11 )
      goto LABEL_33;
    v12 = v11->fields.originalNum;
    v13 = v11->fields.num;
    if ( v12 <= 0 )
    {
      v12 = v11->fields.num;
      v11->fields.originalNum = v13;
    }
    if ( v13 - v12 >= 1 )
    {
      servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( servant )
      {
        servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_object_(
                                                  (DataManager_o *)servant,
                                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
        v14 = this->fields.itemData;
        if ( v14 )
        {
          if ( servant )
          {
            servant = (ServantFaceIconComponent_o *)DataMasterBase_object__object__int___GetEntity(
                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)servant,
                                                      v14->fields.objectId,
                                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( servant )
            {
              v15 = this->fields.itemData;
              if ( v15 )
              {
                v16 = servant;
                v17 = v15->fields.originalNum;
                servant = (ServantFaceIconComponent_o *)this->fields.item;
                frameSprite = (int32_t)v16->fields.frameSprite;
                v19 = v15->fields.num;
                if ( v17 <= 0 )
                {
                  v17 = v15->fields.num;
                  v15->fields.originalNum = v19;
                }
                if ( servant )
                {
                  BattleItemIconComponent__setCounterLabel(
                    (BattleItemIconComponent_o *)servant,
                    frameSprite,
                    v17,
                    (v19 - v17) & ~((v19 - v17) >> 31),
                    0LL);
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
LABEL_33:
      sub_1B64324(servant);
    }
  }
LABEL_30:
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  if ( !servant )
    goto LABEL_33;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_33;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetMaterialTd(
        BattleDropItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *materialTdSprite; // x21
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v9; // x19

  if ( (byte_49FE8EC & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, flg);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_22841/*"ribbon_noblephantasmup_01"*/, v6);
    byte_49FE8EC = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0LL);
    if ( flg )
    {
      v9 = this->fields.materialTdSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEventSprite(v9, (System_String_o *)StringLiteral_22841/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetPossession(
        BattleDropItemComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v7; // x0
  __int64 transform; // x0
  int v9; // w20
  BattleDropItemComponent_c *v10; // x8
  float v11; // s9
  float PossessionLabelWidth; // s8
  __int64 v13; // x1
  UnityEngine_Transform_o *v14; // x20
  struct UILabel_o *v15; // x8
  float y; // s1
  float x; // s0
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  int32_t possessionNum; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_49FE8EE & 1) == 0 )
  {
    sub_1B640C8(&BattleDropItemComponent_TypeInfo, *(_QWORD *)&num);
    sub_1B640C8(&int_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v5);
    byte_49FE8EE = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum);
  transform = (__int64)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v7, 0LL);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, (System_String_o *)transform, 0LL);
  transform = (__int64)this->fields.possessionLabel;
  if ( !transform )
    goto LABEL_19;
  v9 = *(_DWORD *)(transform + 168);
  v10 = BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
    transform = (__int64)this->fields.possessionLabel;
    if ( !transform )
      goto LABEL_19;
    v10 = BattleDropItemComponent_TypeInfo;
  }
  v11 = (float)v9;
  PossessionLabelWidth = v10->static_fields->PossessionLabelWidth;
  transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
  v14 = (UnityEngine_Transform_o *)transform;
  if ( PossessionLabelWidth >= v11 )
  {
    if ( !byte_49F7116 )
    {
      transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v13);
      byte_49F7116 = 1;
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
    sub_1B64324(transform);
  }
  transform = (__int64)BattleDropItemComponent_TypeInfo;
  if ( !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
  v15 = this->fields.possessionLabel;
  if ( !v15 || !v14 )
    goto LABEL_19;
  y = 1.0;
  x = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v15->fields.mWidth;
  z = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v14, *(UnityEngine_Vector3_o *)&x, 0LL);
}


void __fastcall BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  int64_t userSvtId; // x1
  struct BattleDropItem_o *v8; // x8
  const MethodInfo *v9; // x2
  bool IsMaterialTd; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FE8E6 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v4);
    byte_49FE8E6 = 1;
  }
  entity = 0LL;
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_23;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_23;
  userSvtId = itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( userSvtId < 1 )
  {
    if ( !item )
      goto LABEL_23;
    BattleServantFaceIconComponent__SetSvtDrop(
      (BattleServantFaceIconComponent_o *)item,
      itemData->fields.objectId,
      itemData->fields.limitCount,
      itemData->fields.num,
      0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_23;
    BattleServantFaceIconComponent__SetSvtDrop_37764784(
      (BattleServantFaceIconComponent_o *)item,
      userSvtId,
      0LL,
      itemData->fields.num,
      itemData->fields.limitCount,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item )
    goto LABEL_23;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  item = (ItemIconComponent_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  v8 = this->fields.itemData;
  if ( !v8 || !item )
    goto LABEL_23;
  if ( !DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)item,
          &entity,
          v8->fields.userSvtId,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_22;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_23:
    sub_1B64324(item);
  IsMaterialTd = UserServantEntity__IsMaterialTd((UserServantEntity_o *)entity, 0LL);
LABEL_22:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_49FE8E3 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    byte_49FE8E3 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       gameObject,
                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)Component_object,
                                             0LL,
                                             0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_object )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, flg, 0LL);
      return;
    }
LABEL_10:
    sub_1B64324(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__Set_42331384(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        int32_t possessionNum,
        const MethodInfo *method)
{
  this->fields.possessionNum = possessionNum;
  BattleDropItemComponent__Set(this, indata, *(const MethodInfo **)&possessionNum);
}


void __fastcall BattleDropItemComponent__Show(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v9; // x0
  System_String_o *v10; // x0
  bool v11; // w0
  float v12; // s0
  UILabel_o *v13; // x19
  System_String_o *v14; // x0
  System_String_o *v15; // x20
  System_String_o *v16; // x0
  int32_t result; // [xsp+8h] [xbp-28h] BYREF
  float v18[9]; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FE8E5 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, indata);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3227/*"Battle_RESULT_ITEM_DROPUP"*/, v6);
    byte_49FE8E5 = 1;
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0LL, 0LL) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_20;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v9 = this->fields.AcquisitionUpObj;
      if ( !v9 )
        goto LABEL_20;
      UnityEngine_GameObject__SetActive(v9, 1, 0LL);
      v18[0] = (float)indata->fields.dropUpRate / 1000.0;
      result = 0;
      v10 = System_Single__ToString(v18[0], (const MethodInfo *)v18);
      v11 = System_Int32__TryParse(v10, &result, 0LL);
      v13 = this->fields.AcquisitionUpLabel;
      v14 = v11 ? System_Int32__ToString((int32_t)&result, 0LL) : System_Single__ToString(v12, (const MethodInfo *)v18);
      v15 = v14;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3227/*"Battle_RESULT_ITEM_DROPUP"*/, 0LL);
      v9 = (UnityEngine_GameObject_o *)System_String__Concat_61375396(v15, v16, 0LL);
      if ( !v13 )
LABEL_20:
        sub_1B64324(v9);
      UILabel__set_text(v13, (System_String_o *)v9, 0LL);
    }
  }
}


void __fastcall BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *autoSellInfo; // x20
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_49FE8EA & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE8EA = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_1B64324(gameObject);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleDropItemComponent__ShowDropNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *back; // x0
  const MethodInfo *v4; // x1
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v6; // x2

  back = (UnityEngine_Component_o *)this->fields.back;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL);
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_19;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    BattleDropItemComponent__ShowAutoSellItem(this, v4);
    return;
  }
  back = (UnityEngine_Component_o *)this->fields.possessionRoot;
  if ( !back )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)back, 0, 0LL);
  back = (UnityEngine_Component_o *)this->fields.item;
  if ( !back )
    goto LABEL_19;
  back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL);
  if ( !back )
    goto LABEL_19;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0LL) )
  {
    back = (UnityEngine_Component_o *)this->fields.item;
    if ( !back )
      goto LABEL_19;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)back, 0, 0LL);
  }
  back = (UnityEngine_Component_o *)this->fields.servant;
  if ( !back || (back = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(back, 0LL)) == 0LL )
LABEL_19:
    sub_1B64324(back);
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)back, 0LL) )
  {
    back = (UnityEngine_Component_o *)this->fields.servant;
    if ( back )
    {
      BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)back, 0, 0LL);
      goto LABEL_18;
    }
    goto LABEL_19;
  }
LABEL_18:
  BattleDropItemComponent__ShowAcquisitionUp(this, this->fields.itemData, v6);
}


void __fastcall BattleDropItemComponent__ShowPossessionNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_o *v2; // x19
  struct BattleDropItem_o *itemData; // x8
  bool v4; // w20
  int32_t v5; // w1
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x20

  v2 = this;
  if ( (byte_49FE8ED & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FE8ED = 1;
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
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattleDropItemComponent_o *)v2->fields.back;
    if ( !this )
      goto LABEL_31;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v4 = 0;
  }
  if ( v2->fields.possessionNum )
  {
    this = (BattleDropItemComponent_o *)v2->fields.possessionRoot;
    if ( !this )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    BattleDropItemComponent__SetPossession(v2, v5, v6);
  }
  this = (BattleDropItemComponent_o *)v2->fields.item;
  if ( !this )
    goto LABEL_31;
  this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_31;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.item;
    if ( !this )
      goto LABEL_31;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)this, v4, 0LL);
  }
  this = (BattleDropItemComponent_o *)v2->fields.servant;
  if ( !this
    || (this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_31:
    sub_1B64324(this);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.servant;
    if ( !this )
      goto LABEL_31;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v4, 0LL);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v2->fields.AcquisitionUpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0LL, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v2->fields.AcquisitionUpObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_31;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  UnityEngine_Object_o *additemflg; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49FE8EB & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flg);
    byte_49FE8EB = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(additemflg, 0LL, 0LL) )
  {
    v6 = this->fields.additemflg;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19AE568;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19AE664;
          else
            v9 = (Il2CppObject *)sub_19AE628;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19AE5A4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19AE578;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19AE548;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AE500;
}


System_IAsyncResult_o *__fastcall BattleDropItemComponent_ClickDelegate__BeginInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  BattleDropItem_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = item;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall BattleDropItemComponent_ClickDelegate__Invoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleDropItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}