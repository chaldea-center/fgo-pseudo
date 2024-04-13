void __fastcall BattleDropItemComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E7831 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDropItemComponent_TypeInfo, v1, v2, v3);
    byte_42E7831 = 1;
  }
  LODWORD(BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth) = (struct BattleDropItemComponent_StaticFields)1118306304;
}


void __fastcall BattleDropItemComponent___ctor(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleDropItemComponent__OnClick(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  BattleDropItemComponent_ClickDelegate_o *IsServant; // x0
  struct BattleDropItem_o *itemData; // x1

  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsServant(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) != 0 )
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
  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsItem(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) != 0 )
  {
LABEL_6:
    itemData = this->fields.itemData;
    if ( !itemData )
      goto LABEL_16;
    goto LABEL_7;
  }
  IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsCommandCode(this->fields.gifttype, 0LL);
  if ( ((unsigned __int8)IsServant & 1) == 0 )
  {
    IsServant = (BattleDropItemComponent_ClickDelegate_o *)Gift__IsEventPointBuff(this->fields.gifttype, 0LL);
    if ( ((unsigned __int8)IsServant & 1) == 0 )
      return;
    goto LABEL_6;
  }
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.userSvtId >= 1 )
  {
LABEL_8:
    IsServant = this->fields.callbackFunc;
    if ( IsServant )
    {
      BattleDropItemComponent_ClickDelegate__Invoke(IsServant, itemData, 0LL);
      return;
    }
LABEL_16:
    sub_B5D69C(IsServant, itemData);
  }
}


void __fastcall BattleDropItemComponent__Set(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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

  if ( (byte_42E7826 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)indata, (_DWORD)method, v3);
    byte_42E7826 = 1;
  }
  this->fields.itemData = indata;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.itemData,
    (System_Int32_array **)indata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_31;
  this->fields.gifttype = itemData->fields.type;
  if ( !indata )
    goto LABEL_31;
  BattleDropItemComponent__setRateUp(this, indata->fields.isRateUp, v12);
  if ( Gift__IsServant(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetServant(this, v14);
  }
  else if ( Gift__IsItem(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetItem(this, v15);
  }
  else if ( Gift__IsCommandCode(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetCommandCode(this, v16);
  }
  else if ( Gift__IsEventPointBuff(this->fields.gifttype, 0LL) )
  {
    BattleDropItemComponent__SetEventPointBuff(this, v17);
  }
  back = (UnityEngine_Object_o *)this->fields.back;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(back, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.back;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  BattleDropItemComponent__SetAutoSellItem(this, v11);
  BattleDropItemComponent__ShowAcquisitionUp(this, indata, v19);
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
          v20 = 0;
LABEL_29:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v20, 0LL);
          return;
        }
      }
    }
    goto LABEL_31;
  }
  if ( indata->fields.isAdd )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.addRewardSprite;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        v20 = 1;
        goto LABEL_29;
      }
    }
LABEL_31:
    sub_B5D69C(gameObject, v11);
  }
}


void __fastcall BattleDropItemComponent__SetAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleDropItemComponent_o *v4; // x19
  struct BattleDropItem_o *itemData; // x8
  UnityEngine_Object_o *autoSellInfo; // x20
  struct BattleDropItem_o *v7; // x8

  v4 = this;
  if ( (byte_42E782B & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E782B = 1;
  }
  itemData = v4->fields.itemData;
  if ( !itemData )
    goto LABEL_16;
  if ( itemData->fields.sellQp > 0 || itemData->fields.sellMana >= 1 )
  {
    autoSellInfo = (UnityEngine_Object_o *)v4->fields.autoSellInfo;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
      goto LABEL_14;
    this = (BattleDropItemComponent_o *)v4->fields.autoSellInfo;
    if ( this )
    {
      AutoSellInfoComponent__Clear((AutoSellInfoComponent_o *)this, 0LL);
      v7 = v4->fields.itemData;
      if ( v7 )
      {
        this = (BattleDropItemComponent_o *)v4->fields.autoSellInfo;
        if ( this )
        {
          AutoSellInfoComponent__SetData(
            (AutoSellInfoComponent_o *)this,
            v7->fields.sellMana * v7->fields.num,
            v7->fields.sellQp * v7->fields.num,
            -1,
            -1,
            0LL);
LABEL_14:
          BattleDropItemComponent__ShowAutoSellItem(v4, method);
          return;
        }
      }
    }
LABEL_16:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleDropItemComponent__SetCallBack(
        BattleDropItemComponent_o *this,
        BattleDropItemComponent_ClickDelegate_o *call,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.callbackFunc = call;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)call,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleDropItemComponent__SetCommandCode(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8

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
      0LL);
  }
  else
  {
    if ( !item )
      goto LABEL_13;
    BattleServantFaceIconComponent__SetCommandCodeDrop(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      itemData->fields.num,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item
    || (item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(item, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *servant; // x0
  struct BattleDropItem_o *itemData; // x8

  if ( (byte_42E782A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventPointBuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E782A = 1;
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
  servant = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !servant
    || (servant = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)servant,
                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventPointBuffMaster___),
        (itemData = this->fields.itemData) == 0LL)
    || !servant
    || (servant = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)servant,
                    itemData->fields.objectId,
                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventPointBuffMaster__EventPointBuffEntity__int__GetEntity__)) == 0LL
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
    sub_B5D69C(servant, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ServantFaceIconComponent_o *servant; // x0
  struct BattleDropItem_o *itemData; // x8
  int originalNum; // w10
  int num; // w9
  int32_t v15; // w2
  struct BattleDropItem_o *v16; // x8
  int v17; // w10
  int32_t v18; // w9
  struct BattleDropItem_o *v19; // x8
  struct BattleDropItem_o *v20; // x9
  ServantFaceIconComponent_o *v21; // x8
  int32_t v22; // w2
  int v23; // w10
  int32_t v24; // w8

  if ( (byte_42E7829 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ItemMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7829 = 1;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_35;
  ServantFaceIconComponent__Clear(servant, 0LL);
  servant = (ServantFaceIconComponent_o *)this->fields.servant;
  if ( !servant )
    goto LABEL_35;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_35;
  originalNum = itemData->fields.originalNum;
  num = itemData->fields.num;
  if ( originalNum < 1 )
  {
    itemData->fields.originalNum = num;
    itemData = this->fields.itemData;
    originalNum = num;
    if ( !itemData )
      goto LABEL_35;
  }
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  method = (const MethodInfo *)(unsigned int)itemData->fields.objectId;
  if ( num - originalNum <= 0 )
    num = originalNum;
  if ( num <= 1 )
  {
    if ( !servant )
      goto LABEL_35;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, -1, 0LL);
  }
  else
  {
    v15 = itemData->fields.originalNum;
    if ( v15 < 1 )
    {
      v15 = itemData->fields.num;
      itemData->fields.originalNum = v15;
    }
    if ( !servant )
      goto LABEL_35;
    ItemIconComponent__SetItem((ItemIconComponent_o *)servant, (int32_t)method, v15, 0LL);
    v16 = this->fields.itemData;
    if ( !v16 )
      goto LABEL_35;
    v17 = v16->fields.originalNum;
    v18 = v16->fields.num;
    if ( v17 <= 0 )
    {
      v17 = v16->fields.num;
      v16->fields.originalNum = v18;
    }
    if ( v18 - v17 >= 1 )
    {
      servant = (ServantFaceIconComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( servant )
      {
        servant = (ServantFaceIconComponent_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)servant,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ItemMaster___);
        v19 = this->fields.itemData;
        if ( v19 )
        {
          if ( servant )
          {
            servant = (ServantFaceIconComponent_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                      (DataMasterBase_WarMaster__WarEntity__int__o *)servant,
                                                      v19->fields.objectId,
                                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_ItemMaster__ItemEntity__int__GetEntity__);
            if ( servant )
            {
              v20 = this->fields.itemData;
              if ( v20 )
              {
                v21 = servant;
                v22 = v20->fields.originalNum;
                servant = (ServantFaceIconComponent_o *)this->fields.item;
                method = (const MethodInfo *)LODWORD(v21->fields.typeSprite);
                if ( v22 > 0
                  || (v22 = v20->fields.num, v20->fields.originalNum = v22, (v20 = this->fields.itemData) != 0LL) )
                {
                  v23 = v20->fields.originalNum;
                  v24 = v20->fields.num;
                  if ( v23 <= 0 )
                  {
                    v23 = v20->fields.num;
                    v20->fields.originalNum = v24;
                  }
                  if ( servant )
                  {
                    BattleItemIconComponent__setCounterLabel(
                      (BattleItemIconComponent_o *)servant,
                      (int32_t)method,
                      v22,
                      (v24 - v23) & ~((v24 - v23) >> 31),
                      0LL);
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B5D69C(servant, method);
    }
  }
LABEL_32:
  servant = (ServantFaceIconComponent_o *)this->fields.item;
  if ( !servant )
    goto LABEL_35;
  servant = (ServantFaceIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)servant, 0LL);
  if ( !servant )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)servant, 1, 0LL);
}


void __fastcall BattleDropItemComponent__SetMaterialTd(
        BattleDropItemComponent_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *materialTdSprite; // x21
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v15; // x19

  if ( (byte_42E782E & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, flg, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, v9, v10, v11);
    byte_42E782E = 1;
  }
  materialTdSprite = (UnityEngine_Object_o *)this->fields.materialTdSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(materialTdSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.materialTdSprite;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v13);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, flg, 0LL);
    if ( flg )
    {
      v15 = this->fields.materialTdSprite;
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetEventSprite(v15, (System_String_o *)StringLiteral_22124/*"ribbon_noblephantasmup_01"*/, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__SetPossession(
        BattleDropItemComponent_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *possessionLabel; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  int m_stringLength; // w20
  BattleDropItemComponent_c *v16; // x8
  float v17; // s9
  float PossessionLabelWidth; // s8
  UnityEngine_Transform_o *transform; // x20
  struct UILabel_o *v20; // x8
  UnityEngine_Transform_o *v21; // x0
  float v22; // s0
  float v23; // s1
  float v24; // s2
  int32_t possessionNum; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E7830 & 1) == 0 )
  {
    sub_B5D5C4(&BattleDropItemComponent_TypeInfo, num, (_DWORD)method, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_23800/*"{0:#,0}"*/, v8, v9, v10);
    byte_42E7830 = 1;
  }
  possessionLabel = this->fields.possessionLabel;
  possessionNum = this->fields.possessionNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &possessionNum);
  v13 = System_String__Format((System_String_o *)StringLiteral_23800/*"{0:#,0}"*/, v12, 0LL);
  if ( !possessionLabel )
    goto LABEL_19;
  UILabel__set_text(possessionLabel, v13, 0LL);
  v13 = (System_String_o *)this->fields.possessionLabel;
  if ( !v13 )
    goto LABEL_19;
  m_stringLength = v13[6].fields.m_stringLength;
  v16 = BattleDropItemComponent_TypeInfo;
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
    v16 = BattleDropItemComponent_TypeInfo;
    v13 = (System_String_o *)this->fields.possessionLabel;
  }
  if ( !v13 )
    goto LABEL_19;
  v17 = (float)m_stringLength;
  PossessionLabelWidth = v16->static_fields->PossessionLabelWidth;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v13, 0LL);
  if ( PossessionLabelWidth >= v17 )
  {
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_one(0LL);
    if ( transform )
    {
      v21 = transform;
      goto LABEL_18;
    }
LABEL_19:
    sub_B5D69C(v13, v14);
  }
  v13 = (System_String_o *)BattleDropItemComponent_TypeInfo;
  if ( (BYTE3(BattleDropItemComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDropItemComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDropItemComponent_TypeInfo);
  }
  v20 = this->fields.possessionLabel;
  if ( !v20 || !transform )
    goto LABEL_19;
  v21 = transform;
  v22 = BattleDropItemComponent_TypeInfo->static_fields->PossessionLabelWidth / (float)v20->fields.mWidth;
  v23 = 1.0;
  v24 = 1.0;
LABEL_18:
  UnityEngine_Transform__set_localScale(v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
}


void __fastcall BattleDropItemComponent__SetServant(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ItemIconComponent_o *item; // x0
  struct BattleDropItem_o *itemData; // x8
  struct BattleDropItem_o *v13; // x8
  const MethodInfo *v14; // x2
  bool IsMaterialTd; // w0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7828 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserServantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v8, v9, v10);
    byte_42E7828 = 1;
  }
  entity = 0LL;
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_24;
  ItemIconComponent__Clear(item, 0LL);
  item = (ItemIconComponent_o *)this->fields.item;
  if ( !item )
    goto LABEL_24;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 0, 0LL);
  itemData = this->fields.itemData;
  if ( !itemData )
    goto LABEL_24;
  method = (const MethodInfo *)itemData->fields.userSvtId;
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( (__int64)method < 1 )
  {
    if ( !item )
      goto LABEL_24;
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
      goto LABEL_24;
    BattleServantFaceIconComponent__SetSvtDrop_29886712(
      (BattleServantFaceIconComponent_o *)item,
      (int64_t)method,
      0LL,
      itemData->fields.num,
      itemData->fields.limitCount,
      0LL);
  }
  item = (ItemIconComponent_o *)this->fields.servant;
  if ( !item )
    goto LABEL_24;
  item = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)item, 0LL);
  if ( !item )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)item, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  item = (ItemIconComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserServantMaster___);
  v13 = this->fields.itemData;
  if ( !v13 || !item )
    goto LABEL_24;
  if ( !DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)item,
          &entity,
          v13->fields.userSvtId,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    IsMaterialTd = 0;
    goto LABEL_23;
  }
  item = (ItemIconComponent_o *)entity;
  if ( !entity )
LABEL_24:
    sub_B5D69C(item, method);
  IsMaterialTd = UserServantEntity__IsMaterialTd(entity, 0LL);
LABEL_23:
  BattleDropItemComponent__SetMaterialTd(this, IsMaterialTd, v14);
}


void __fastcall BattleDropItemComponent__SetTouch(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20

  if ( (byte_42E7825 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_Collider___, flg, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E7825 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_11;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      gameObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_Collider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_srcLineSprite, flg, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent__Set_23285496(
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
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall BattleDropItemComponent__ShowAcquisitionUp(
        BattleDropItemComponent_o *this,
        BattleDropItem_o *indata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *AcquisitionUpObj; // x21
  UnityEngine_Object_o *AcquisitionUpLabel; // x21
  UnityEngine_GameObject_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  bool v17; // w0
  float v18; // s0
  UILabel_o *v19; // x19
  System_String_o *v20; // x0
  System_String_o *v21; // x20
  System_String_o *v22; // x0
  _QWORD _8[7]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42E7827 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)indata, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_2842/*"Battle_RESULT_ITEM_DROPUP"*/, v9, v10, v11);
    byte_42E7827 = 1;
  }
  _8[0] = 0LL;
  AcquisitionUpObj = (UnityEngine_Object_o *)this->fields.AcquisitionUpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(AcquisitionUpObj, 0LL, 0LL) )
  {
    AcquisitionUpLabel = (UnityEngine_Object_o *)this->fields.AcquisitionUpLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v14 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(AcquisitionUpLabel, 0LL, 0LL);
    if ( ((unsigned __int8)v14 & 1) == 0 )
    {
      if ( !indata )
        goto LABEL_23;
      if ( indata->fields.dropUpRate == 1000 )
        return;
      v14 = this->fields.AcquisitionUpObj;
      if ( !v14 )
        goto LABEL_23;
      UnityEngine_GameObject__SetActive(v14, 1, 0LL);
      *((float *)_8 + 1) = (float)indata->fields.dropUpRate / 1000.0;
      LODWORD(_8[0]) = 0;
      v16 = System_Single__ToString(*((float *)_8 + 1), (const MethodInfo *)((char *)_8 + 4));
      v17 = System_Int32__TryParse(v16, (int32_t *)_8, 0LL);
      v19 = this->fields.AcquisitionUpLabel;
      v20 = v17
          ? System_Int32__ToString((int32_t)_8, 0LL)
          : System_Single__ToString(v18, (const MethodInfo *)((char *)_8 + 4));
      v21 = v20;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2842/*"Battle_RESULT_ITEM_DROPUP"*/, 0LL);
      v14 = (UnityEngine_GameObject_o *)System_String__Concat_44577788(v21, v22, 0LL);
      if ( !v19 )
LABEL_23:
        sub_B5D69C(v14, v15);
      UILabel__set_text(v19, (System_String_o *)v14, 0LL);
    }
  }
}


void __fastcall BattleDropItemComponent__ShowAutoSellItem(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *autoSellInfo; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  if ( (byte_42E782C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E782C = 1;
  }
  autoSellInfo = (UnityEngine_Object_o *)this->fields.autoSellInfo;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(autoSellInfo, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.autoSellInfo;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B5D69C(gameObject, v6);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  }
}


void __fastcall BattleDropItemComponent__ShowDropNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *back; // x0
  struct BattleDropItem_o *itemData; // x8
  const MethodInfo *v5; // x2

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
    BattleDropItemComponent__ShowAutoSellItem(this, method);
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
    sub_B5D69C(back, method);
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
  BattleDropItemComponent__ShowAcquisitionUp(this, this->fields.itemData, v5);
}


void __fastcall BattleDropItemComponent__ShowPossessionNum(BattleDropItemComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleDropItemComponent_o *v4; // x19
  struct BattleDropItem_o *itemData; // x8
  bool v6; // w20
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  UnityEngine_Object_o *AcquisitionUpObj; // x20

  v4 = this;
  if ( (byte_42E782F & 1) == 0 )
  {
    this = (BattleDropItemComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E782F = 1;
  }
  itemData = v4->fields.itemData;
  if ( !itemData )
    goto LABEL_32;
  if ( itemData->fields.sellQp <= 0 && itemData->fields.sellMana < 1 )
  {
    v6 = 1;
  }
  else
  {
    this = (BattleDropItemComponent_o *)v4->fields.autoSellInfo;
    if ( !this )
      goto LABEL_32;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (BattleDropItemComponent_o *)v4->fields.back;
    if ( !this )
      goto LABEL_32;
    this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    v6 = 0;
  }
  if ( v4->fields.possessionNum )
  {
    this = (BattleDropItemComponent_o *)v4->fields.possessionRoot;
    if ( !this )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    BattleDropItemComponent__SetPossession(v4, v7, v8);
  }
  this = (BattleDropItemComponent_o *)v4->fields.item;
  if ( !this )
    goto LABEL_32;
  this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_32;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v4->fields.item;
    if ( !this )
      goto LABEL_32;
    BattleItemIconComponent__SetActiveDarkMode((BattleItemIconComponent_o *)this, v6, 0LL);
  }
  this = (BattleDropItemComponent_o *)v4->fields.servant;
  if ( !this
    || (this = (BattleDropItemComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
LABEL_32:
    sub_B5D69C(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v4->fields.servant;
    if ( !this )
      goto LABEL_32;
    BattleServantFaceIconComponent__SetActiveDarkMode((BattleServantFaceIconComponent_o *)this, v6, 0LL);
  }
  AcquisitionUpObj = (UnityEngine_Object_o *)v4->fields.AcquisitionUpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(AcquisitionUpObj, 0LL, 0LL) )
  {
    this = (BattleDropItemComponent_o *)v4->fields.AcquisitionUpObj;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
    goto LABEL_32;
  }
}


void __fastcall BattleDropItemComponent__setRateUp(BattleDropItemComponent_o *this, bool flg, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *additemflg; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E782D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flg, (_DWORD)method, v3);
    byte_42E782D = 1;
  }
  additemflg = (UnityEngine_Object_o *)this->fields.additemflg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(additemflg, 0LL, 0LL) )
  {
    v8 = this->fields.additemflg;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, flg, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleDropItemComponent_ClickDelegate___ctor(
        BattleDropItemComponent_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B5D560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleDropItemComponent_ClickDelegate__BeginInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)item;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall BattleDropItemComponent_ClickDelegate__EndInvoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall BattleDropItemComponent_ClickDelegate__Invoke(
        BattleDropItemComponent_ClickDelegate_o *this,
        BattleDropItem_o *item,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BattleDropItemComponent_ClickDelegate_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x3
  BattleDropItem_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(BattleDropItem_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, BattleDropItem_o *, _QWORD); // x0
  BattleDropItemComponent_ClickDelegate_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(BattleDropItem_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  BattleDropItem_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  BattleDropItemComponent_ClickDelegate_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BattleDropItemComponent_ClickDelegate_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(BattleDropItem_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, item, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = item->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(item, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(BattleDropItem_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(item, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = item->klass;
                if ( *(_WORD *)&item->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&item->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(item, class_0, v9, v11);
                }
                (*(void (__fastcall **)(BattleDropItem_o *, _QWORD))v15)(item, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(BattleDropItem_o *, _QWORD))&item->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  item,
                  *((_QWORD *)&item->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(item, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, item, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))v23)(v31, item, *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, BattleDropItem_o *, _QWORD))(*v31
                                                                            + 16LL * *(unsigned __int16 *)(v30 + 72)
                                                                            + 312))(
                v31,
                item,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, BattleDropItem_o *, __int64))v32)(v31, item, v30);
    }
  }
}