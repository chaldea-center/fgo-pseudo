void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x19
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w1
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w1
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w1
  int32_t v42; // w2
  int32_t v43; // w3
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49F8E2B & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, v1);
    sub_1B640C8(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_20024/*"icon_class1002"*/, v3);
    sub_1B640C8(&StringLiteral_20022/*"icon_class007"*/, v4);
    sub_1B640C8(&StringLiteral_20021/*"icon_class006"*/, v5);
    sub_1B640C8(&StringLiteral_20019/*"icon_class004"*/, v6);
    sub_1B640C8(&StringLiteral_20016/*"icon_class001"*/, v7);
    sub_1B640C8(&StringLiteral_20023/*"icon_class1001"*/, v8);
    sub_1B640C8(&StringLiteral_20017/*"icon_class002"*/, v9);
    sub_1B640C8(&StringLiteral_20020/*"icon_class005"*/, v10);
    sub_1B640C8(&StringLiteral_20018/*"icon_class003"*/, v11);
    byte_49F8E2B = 1;
  }
  v12 = sub_1B64170(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1B64324(0LL);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v17 = StringLiteral_20023/*"icon_class1001"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_20023/*"icon_class1001"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_14;
  v20 = StringLiteral_20016/*"icon_class001"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_20016/*"icon_class001"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 40), v20, v18, v19);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_14;
  v23 = StringLiteral_20017/*"icon_class002"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_20017/*"icon_class002"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 48), v23, v21, v22);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_14;
  v26 = StringLiteral_20018/*"icon_class003"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_20018/*"icon_class003"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 56), v26, v24, v25);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_14;
  v29 = StringLiteral_20019/*"icon_class004"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_20019/*"icon_class004"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 64), v29, v27, v28);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_14;
  v32 = StringLiteral_20020/*"icon_class005"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_20020/*"icon_class005"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 72), v32, v30, v31);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (v35 = StringLiteral_20021/*"icon_class006"*/,
        *(_QWORD *)(v16 + 80) = StringLiteral_20021/*"icon_class006"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 80), v35, v33, v34),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v38 = StringLiteral_20022/*"icon_class007"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_20022/*"icon_class007"*/,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 88), v38, v36, v37),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_14:
    sub_1B6432C(v12, v13);
  }
  v41 = StringLiteral_20024/*"icon_class1002"*/;
  *(_QWORD *)(v16 + 96) = StringLiteral_20024/*"icon_class1002"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v16 + 96), v41, v39, v40);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SupportSelectItemDraw_TypeInfo->static_fields, v16, v42, v43);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&static_fields->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void __fastcall SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v12; // x8
  __int64 v13; // x9
  System_Collections_IEnumerator_c **v14; // x10
  __int64 v15; // x0
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Component_o *v17; // x21
  __int64 methodPtr_low; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v21; // x23
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_49F8E2A & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v5);
    byte_49F8E2A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v14 = (System_Collections_IEnumerator_c **)&v12->_1.interfaceOffsets->offset;
      while ( *(v14 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        v14 += 2;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*(_DWORD *)v14 + 1].method;
    }
    else
    {
LABEL_16:
      v15 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v16 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
                                       Enumerator,
                                       *(_QWORD *)(v15 + 8));
    v17 = v16;
    if ( !v16 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v16->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v16->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B645E4(v16);
LABEL_37:
      sub_1B64324(v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1B64324(0LL);
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v21, 0LL) )
    {
      v22 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v22 )
        sub_1B64324(0LL);
      UnityEngine_GameObject__SetActive(v22, 0, 0LL);
    }
  }
  v23 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_32;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_32:
      v28 = sub_1BB60A8(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  struct UISprite_o *v11; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  struct UISprite_o *v16; // x8
  struct UIAtlas_o *v17; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v19; // x2
  int32_t v20; // w3
  struct UISprite_o *v21; // x8
  struct UIAtlas_o *v22; // x1
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_object__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8E22 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_49F8E22 = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition(
                                        (UnityEngine_Transform_o *)transform,
                                        0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0LL);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0LL);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_37;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0LL);
    v11 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v11 )
      goto LABEL_37;
    mAtlas = v11->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v9, v10);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_37;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_37;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v16 = this->fields.baseSprite;
    if ( !v16 )
      goto LABEL_37;
    v17 = v16->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v17;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v17, v14, v15);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v21 = this->fields.base2Sprite;
    if ( v21 )
    {
      v22 = v21->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v22;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v22,
        (int32_t)v19,
        v20);
      goto LABEL_36;
    }
LABEL_37:
    sub_1B64324(transform);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v19);
  v25 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_UIWidget__TypeInfo,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v25;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v25, v26, v27);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20
  const MethodInfo *v6; // x1

  if ( (byte_49F8E23 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8E23 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0LL);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1B64324(gameObject);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v6);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_49F8E25 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49F8E25 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_18:
    sub_1B64324(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_49F8E28 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, flag);
    byte_49F8E28 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v6 = this->fields.dragSwapGuideObj;
    if ( !v6 )
      sub_1B64324(0LL);
    UnityEngine_GameObject__SetActive(v6, flag, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetEquipAlpha(
        SupportSelectItemDraw_o *this,
        float alpha,
        const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  struct UIWidget_o *v6; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_49F8E29 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49F8E29 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v6 = this->fields.equipRootObj;
    if ( !v6 )
      sub_1B64324(0LL);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v6->klass->vtable._8_set_alpha.method)(
      v6,
      v6->klass->vtable._9_CalculateFinalAlpha.methodPtr,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  SupportServantData_o *v8; // x20
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v54; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v59; // x21
  __int64 v60; // x23
  __int64 v61; // x24
  Il2CppObject *v62; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v64; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v67; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v69; // x25
  int32_t atk; // w8
  int hp; // w8
  char v72; // w26
  __int64 v73; // x1
  UISprite_o *backClassIcon; // x21
  __int64 v75; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v77; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v80; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  const MethodInfo *v88; // x1
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  System_Object_array *v93; // x19
  bool v94; // w22
  UserServantEntity_o *v95; // x23
  int32_t v96; // w8
  int v97; // w8
  int adjustAtk; // w9
  int32_t v99; // w0
  int32_t exceedCount; // w22
  int32_t v101; // w23
  int32_t CardImageLimitCount; // w21
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_40159764; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v107; // x24
  __int64 v108; // x1
  __int64 v109; // x2
  System_Collections_Generic_List_object__o *v110; // x26
  struct EventUpValSetupInfo_o *v111; // x8
  struct System_Int32_array *v112; // x20
  __int64 v113; // x8
  unsigned __int64 v114; // x29
  int32_t v115; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  __int64 v119; // x2
  int32_t eventSvtPoint; // w21
  __int64 v121; // x24
  __int64 v122; // x25
  int32_t v123; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  __int64 v125; // x1
  __int64 v126; // x2
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v128; // x21
  EventPersonalMargeUpValInfo_o *v129; // x27
  int32_t v130; // w2
  int32_t v131; // w3
  __int64 v132; // x8
  __int64 v133; // x23
  unsigned __int64 v134; // x21
  Il2CppObject *v135; // x1
  struct System_Object_array *items; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  Il2CppClass **v139; // x0
  int v140; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v143; // w29
  SupportServantData_o *v144; // x21
  int v145; // w20
  QuestRestrictionInfo_o *v146; // x8
  int32_t v147; // w21
  int32_t v148; // w27
  QuestRestrictionInfo_o *v149; // x22
  __int64 v150; // x23
  __int64 v151; // x24
  int32_t v152; // w0
  int32_t v153; // w23
  int32_t v154; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v156; // w9
  int32_t v157; // w0
  Il2CppObject v158; // q1
  int64_t v159; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v162; // x25
  bool EventUpVal_39873648; // w19
  Il2CppObject *v164; // x29
  Il2CppObject *v165; // x28
  __int64 v166; // x1
  __int64 v167; // x2
  System_Collections_Generic_List_object__o *v168; // x22
  struct EventUpValSetupInfo_o *v169; // x8
  struct System_Int32_array *v170; // x20
  __int64 v171; // x8
  unsigned __int64 v172; // x21
  int32_t v173; // w23
  __int64 v174; // x1
  __int64 v175; // x2
  __int128 v176; // q0
  int64_t v177; // x24
  int32_t v178; // w4
  int32_t BuddyPoint; // w27
  int32_t v180; // w0
  EventServantPointRankEntity_o *v181; // x0
  __int64 v182; // x1
  __int64 v183; // x2
  int32_t v184; // w25
  EventMargeItemUpValInfo_o *v185; // x24
  EventPersonalMargeUpValInfo_o *v186; // x27
  int32_t v187; // w2
  int32_t v188; // w3
  __int64 v189; // x8
  __int64 v190; // x23
  unsigned __int64 v191; // x19
  Il2CppObject *v192; // x1
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  Il2CppClass **v196; // x0
  UnityEngine_Object_o *v197; // x21
  UnityEngine_Object_o *v198; // x21
  UILabel_o *v199; // x21
  UnityEngine_Object_o *v200; // x21
  int32_t v201; // w19
  int32_t v202; // w21
  _BOOL4 v203; // w26
  System_String_o *Icon_37389972; // x21
  int v205; // w29
  _BOOL4 v206; // w25
  int v207; // w24
  int32_t RarityIcon; // w22
  int32_t v209; // w22
  UISprite_o *v210; // x23
  float v211; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v214; // x21
  SkillListTreasureDeviceComponent_o *v215; // x21
  SkillInfo_array *v216; // x22
  int32_t v217; // w2
  int32_t v218; // w3
  Il2CppObject *v219; // x1
  __int64 v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  __int64 v223; // x8
  UnityEngine_Object_o *v224; // x21
  AppendSkillListComponent_o *v225; // x21
  SkillInfo_array *v226; // x22
  int32_t v227; // w2
  int32_t v228; // w3
  Il2CppObject *v229; // x1
  __int64 v230; // x8
  _QWORD *v231; // x9
  __int64 v232; // x10
  __int64 v233; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v235; // x0
  SwitchUIWidgetComponent_o *v236; // x21
  UnityEngine_Object_o *v237; // x21
  UnityEngine_Object_o *v238; // x21
  float v239; // s1
  float v240; // s2
  float v241; // s0
  float v242; // s3
  UILabel_o *v243; // x21
  UnityEngine_Object_o *v244; // x21
  float v245; // s1
  float v246; // s2
  float v247; // s0
  float v248; // s3
  UILabel_o *v249; // x21
  UnityEngine_Object_o *v250; // x21
  UISprite_o *v251; // x22
  UIAtlas_o *v252; // x21
  UnityEngine_Object_o *v253; // x21
  UISprite_o *v254; // x22
  UIAtlas_o *v255; // x21
  const MethodInfo *v256; // x4
  UnityEngine_Object_o *v257; // x21
  System_String_o *v258; // x0
  System_String_o *v259; // x1
  bool v260; // w2
  SupportSelectItemDraw_o *v261; // x0
  bool v262; // w3
  UnityEngine_Object_o *v263; // x21
  const MethodInfo *v264; // x1
  bool v265; // w1
  System_String_o *v266; // x0
  const MethodInfo *v267; // x3
  System_String_o *v268; // x21
  Il2CppObject *v269; // x0
  UnityEngine_Object_o *v270; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v272; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v275; // x25
  __int64 v276; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v280; // x8
  __int64 v281; // x2
  EventCampaignEntity_o *v282; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v284; // w10
  System_Collections_Generic_List_object__o *v285; // x0
  System_Collections_Generic_List_object__o *v286; // x24
  __int64 v287; // x1
  __int64 v288; // x2
  UISprite_o *v289; // x21
  void *v290; // x23
  Il2CppClass *v291; // x24
  int32_t v292; // w23
  UnityEngine_Object_o *v293; // x21
  void *v294; // x21
  Il2CppClass *v295; // x23
  int v296; // w21
  bool v297; // w1
  EventMargeItemUpValInfo_o *v298; // x25
  int32_t v299; // w2
  int32_t v300; // w3
  struct System_Object_array *v301; // x8
  _QWORD *v302; // x9
  __int64 v303; // x10
  Il2CppClass **v304; // x0
  UISprite_o *equipSprite; // x21
  __int64 v306; // x23
  __int64 v307; // x24
  int32_t v308; // w23
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  System_Object_array *v310; // x21
  int limitCount; // w19
  UnityEngine_Object_o *v312; // x21
  UnityEngine_Object_o *v313; // x21
  struct ServantLeaderInfo_o *v314; // x8
  __int64 v315; // x21
  __int64 v316; // x22
  int32_t v317; // w21
  int32_t v318; // w0
  UnityEngine_Object_o *v319; // x21
  bool v320; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v322; // x21
  __int64 v323; // x22
  int32_t v324; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  _BOOL4 v330; // [xsp+10h] [xbp-1B0h]
  bool v331; // [xsp+14h] [xbp-1ACh]
  int32_t v332; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v333; // [xsp+18h] [xbp-1A8h]
  int32_t v334; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v341; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v343; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v344; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v345; // [xsp+40h] [xbp-180h]
  bool v346; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v350; // [xsp+58h] [xbp-168h]
  int32_t frameType; // [xsp+64h] [xbp-15Ch]
  Il2CppObject *v352; // [xsp+68h] [xbp-158h]
  Il2CppObject *v353; // [xsp+70h] [xbp-150h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+78h] [xbp-148h]
  UserServantEntity_o *v355; // [xsp+78h] [xbp-148h]
  EventCampaignEntity_array *v356; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v357; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v358; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v359; // [xsp+90h] [xbp-130h]
  Il2CppObject *v360; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v361; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v362; // [xsp+A0h] [xbp-120h]
  int v363; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v364; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v366; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v367; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v368; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v370; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v373; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v381; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v382; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v383; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  UnityEngine_Vector3_o v385; // 0:s0.4,4:s1.4,8:s2.4

  v8 = supportServantData;
  if ( (byte_49F8E24 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1B640C8(&AtlasManager_TypeInfo, v10);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventDetailMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_EventDetailMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v16);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantExceedMaster___, v17);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v18);
    sub_1B640C8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1B640C8(&DataManager_TypeInfo, v20);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B640C8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1B640C8(&EventMargeItemUpValInfo_TypeInfo, v24);
    sub_1B640C8(&EventPersonalMargeUpValInfo_TypeInfo, v25);
    sub_1B640C8(&int_TypeInfo, v26);
    sub_1B640C8(&long___TypeInfo, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256, v35);
    sub_1B640C8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v36);
    sub_1B640C8(&LocalizationManager_TypeInfo, v37);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v38);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v39);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v40);
    sub_1B640C8(&Rarity_TypeInfo, v41);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v42);
    sub_1B640C8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v43);
    sub_1B640C8(&SupportSelectItemDraw_TypeInfo, v44);
    sub_1B640C8(&TutorialFlag_TypeInfo, v45);
    sub_1B640C8(&StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v46);
    sub_1B640C8(&StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v47);
    sub_1B640C8(&StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v48);
    sub_1B640C8(&StringLiteral_430/*"#,0"*/, v49);
    sub_1B640C8(&StringLiteral_1/*""*/, v50);
    byte_49F8E24 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v373 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v370 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_544;
  size = switchSkillUIList->fields._size;
  v54 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v54;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0LL, 0LL);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v8 )
    goto LABEL_544;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v8, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
  v356 = eventFriendPoints;
  if ( gameObject )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_544;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_544;
      v59 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v61 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v60 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v376.fields.currentCryptoKey = v61;
      *(_QWORD *)&v376.fields.fakeValue = v60;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v376, 0LL);
      if ( !v59 )
        goto LABEL_544;
      v62 = 0LL;
      v353 = DataMasterBase_object__object__int___GetEntity(
               v59,
               gameObject,
               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v8, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_544;
    v62 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v62 )
      goto LABEL_544;
    v64 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v62[5].klass;
    monitor = v62[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v377.fields.currentCryptoKey = klass;
    *(_QWORD *)&v377.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v377, 0LL);
    if ( !v64 )
      goto LABEL_544;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v64,
                            gameObject,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v62 = 0LL;
  }
  equipTarget1 = 0LL;
  v353 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v357 = 0LL;
    v72 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v357 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v72 = 0;
LABEL_47:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v75 = **(_QWORD **)(gameObject + 184);
    if ( !v75 )
      goto LABEL_544;
    if ( *(_DWORD *)(v75 + 24) <= (unsigned int)classPos )
      goto LABEL_545;
    if ( !backClassIcon )
      goto LABEL_544;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v75 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v77 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v77, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v80 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v80, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_544;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, v88);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_544;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v93 = 0LL;
    v94 = 0;
    if ( v62 )
      goto LABEL_438;
LABEL_466:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( v357 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v307 = *(_QWORD *)&v357->fields.svtId.fields.currentCryptoKey;
      v306 = *(_QWORD *)&v357->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v382.fields.currentCryptoKey = v307;
      *(_QWORD *)&v382.fields.fakeValue = v306;
      v308 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v382, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v308, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        v310 = v93;
        limitCount = v357->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v353 )
            goto LABEL_544;
          v297 = SLODWORD(v353[5].monitor) >= limitCount;
        }
        else
        {
          v297 = 0;
        }
        if ( gameObject )
        {
          v93 = v310;
LABEL_493:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v297, 0LL);
          goto LABEL_494;
        }
LABEL_544:
        sub_1B64324(gameObject);
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v312 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v312, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_544;
        v297 = 0;
        goto LABEL_493;
      }
    }
    goto LABEL_494;
  }
  v67 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v67,
                          (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v361 = (ServantEntity_o *)gameObject;
  v352 = v62;
  svtId = v67;
  v350 = UserServantLeaderEntity;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v8->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v344 = this;
    if ( !servantLeaderInfo )
      goto LABEL_544;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v69 = v361;
    lv[1] = servantLeaderInfo->fields.lv;
    atk = servantLeaderInfo->fields.atk;
    lv[0] = atk;
    if ( equipTarget1 )
    {
      lv[0] = equipTarget1->fields.atk + atk;
      hp = equipTarget1->fields.hp + servantLeaderInfo->fields.hp;
    }
    else
    {
      hp = servantLeaderInfo->fields.hp;
    }
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v373 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v343 = adjustAtk;
    v99 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v101 = v99;
    frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_544;
    strengthStatus = tdInfo->fields.strengthStatus;
    v341 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_40171876(servantLeaderInfo, &v370, 0, 0LL);
    eventSetupInfo = v8->fields.eventSetupInfo;
    rarity = v101;
    if ( !eventSetupInfo )
      goto LABEL_171;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_544;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_40159764 = ServantLeaderInfo__getEventUpVal_40159764(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v107 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v110 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                            System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                            v108,
                                                            v109);
      System_Collections_Generic_List_object____ctor(
        v110,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v111 = v8->fields.eventSetupInfo;
      v362 = v8;
      if ( !v111 )
        goto LABEL_544;
      v112 = v111->fields.eventIdList;
      v358 = (EventServantPointRankMaster_o *)v107;
      v332 = CardImageLimitCount;
      if ( !v112 )
        goto LABEL_544;
      v113 = *(_QWORD *)&v112->max_length;
      if ( (int)v113 >= 1 )
      {
        v114 = 0LL;
        while ( 1 )
        {
          if ( v114 >= (unsigned int)v113 )
            goto LABEL_545;
          v115 = v112->m_Items[v114 + 1];
          questRestrictionInfo = v362->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v115 )
          {
            if ( !Master_object )
              goto LABEL_544;
            v117 = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                     v115,
                     (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v117
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v117, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v358;
              if ( !v358 )
                goto LABEL_544;
              if ( EventServantPointRankMaster__IsEnableEvent(v358, v115, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v122 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v121 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v378.fields.currentCryptoKey = v122;
                *(_QWORD *)&v378.fields.fakeValue = v121;
                v123 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v378, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v358, v115, eventSvtPoint, v123, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v69 = v361;
                v128 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v125, v126);
                EventMargeItemUpValInfo___ctor_38573000(v128, v115, 0LL);
                if ( !v128 )
                  goto LABEL_544;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v128,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v110 )
                  goto LABEL_544;
                System_Collections_Generic_List_object___Insert(
                  v110,
                  0,
                  (Il2CppObject *)v128,
                  (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v129 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v118, v119);
              EventPersonalMargeUpValInfo___ctor(v129, v115, v69, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_544;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v129 )
                goto LABEL_544;
              EventPersonalMargeUpValInfo__Add(v129, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v129, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v129, 0LL);
                if ( !gameObject )
                  goto LABEL_544;
                v132 = *(_QWORD *)(gameObject + 24);
                v133 = gameObject;
                if ( (int)v132 >= 1 )
                  break;
              }
            }
          }
LABEL_168:
          LODWORD(v113) = v112->max_length;
          if ( (__int64)++v114 >= (int)v113 )
            goto LABEL_169;
        }
        v134 = 0LL;
        while ( v134 < (unsigned int)v132 )
        {
          if ( !v110 )
            goto LABEL_544;
          v135 = *(Il2CppObject **)(v133 + 32 + 8 * v134);
          items = v110->fields._items;
          v137 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v110->fields._version;
          if ( !items )
            goto LABEL_544;
          v138 = v110->fields._size;
          if ( (unsigned int)v138 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              v135,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          }
          else
          {
            v139 = &items->obj.klass + v138;
            v110->fields._size = v138 + 1;
            v139[4] = (Il2CppClass *)v135;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v139 + 4), (int32_t)v135, v130, v131);
          }
          LODWORD(v132) = *(_DWORD *)(v133 + 24);
          if ( (__int64)++v134 >= (int)v132 )
            goto LABEL_168;
        }
        goto LABEL_545;
      }
LABEL_169:
      if ( !v110 )
        goto LABEL_544;
      v140 = EventUpVal_40159764;
      v8 = v362;
      v67 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v332;
      v359 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v110,
                                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_171:
      v359 = 0LL;
      v140 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             v8->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         v8->fields.questRestrictionInfo,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL) )
    {
      v363 = 1;
LABEL_195:
      IsDataLost = ServantLeaderInfo__IsDataLost(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      this = v344;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(servantLeaderInfo, v8->fields.questRestrictionInfo, 0LL);
      goto LABEL_242;
    }
    v333 = QuestRestriction;
    v143 = CardImageLimitCount;
    v144 = v8;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    v145 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    if ( v145 < 1 )
    {
      v363 = 0;
      v8 = v144;
    }
    else
    {
      v146 = v144->fields.questRestrictionInfo;
      if ( !v146 )
        goto LABEL_544;
      v8 = v144;
      v147 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40118712(v146, v147, 0LL) )
      {
        v330 = UniqueSvtRestriction;
        v148 = exceedCount;
        v149 = v8->fields.questRestrictionInfo;
        v151 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v150 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v379.fields.currentCryptoKey = v151;
        *(_QWORD *)&v379.fields.fakeValue = v150;
        v152 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v379, 0LL);
        v153 = servantLeaderInfo->fields.limitCount;
        v154 = v152;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v149 )
          goto LABEL_544;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v149,
                                              v154,
                                              v153,
                                              gameObject,
                                              v147,
                                              1,
                                              0LL);
        v67 = svtId;
        UniqueSvtRestriction = v330;
        exceedCount = v148;
        v363 = IsRestrictionServantIndividuality;
        goto LABEL_194;
      }
      v363 = 0;
    }
    v67 = svtId;
LABEL_194:
    CardImageLimitCount = v143;
    QuestRestriction = v333;
    goto LABEL_195;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_30D4050 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v95 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v96 = *(_DWORD *)(gameObject + 264);
  lv[0] = v96;
  if ( v62 )
  {
    lv[0] = LODWORD(v62[16].monitor) + v96;
    v97 = HIDWORD(v62[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v97 = *(_DWORD *)(gameObject + 268);
  }
  v156 = *(_DWORD *)(gameObject + 272);
  v373 = v97;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v343 = v156;
  v157 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v95->fields.exceedCount;
  rarity = v157;
  frameType = UserServantEntity__getFrameType(v95, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v95, 0, 0LL);
  UserServantEntity__getSkillInfo(v95, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v95, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_544;
  strengthStatus = tdInfo->fields.strengthStatus;
  v341 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v355 = v95;
  UserServantEntity__GetAppendPassiveSkillInfo_39898768(v95, &v370, 0LL);
  if ( v8->fields.eventSetupInfo )
  {
    v334 = CardImageLimitCount;
    if ( v62 )
    {
      v158 = v62[2];
      *(Il2CppObject *)&v368.fields.currentCryptoKey = v62[1];
      *(Il2CppObject *)&v368.fields.fakeValue = v158;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v367 = v368;
      v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v367, 0LL);
    }
    else
    {
      v159 = -1LL;
    }
    v162 = v361;
    gameObject = sub_1B64170(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_545;
    *(_QWORD *)(gameObject + 32) = v159;
    EventUpVal_39873648 = UserServantEntity__getEventUpVal_39873648(
                            v95,
                            &eventUpVallInfo,
                            v8->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    cardParamsb = exceedCount;
    v345 = this;
    v164 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v165 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v360 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v168 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                          System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                          v166,
                                                          v167);
    System_Collections_Generic_List_object____ctor(
      v168,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v169 = v8->fields.eventSetupInfo;
    v364 = v8;
    if ( !v169 )
      goto LABEL_544;
    v170 = v169->fields.eventIdList;
    v331 = EventUpVal_39873648;
    if ( !v170 )
      goto LABEL_544;
    v171 = *(_QWORD *)&v170->max_length;
    if ( (int)v171 >= 1 )
    {
      v172 = 0LL;
      codeIdsa = (System_Int32_array *)&v95->fields.userId;
      while ( 1 )
      {
        if ( v172 >= (unsigned int)v171 )
          goto LABEL_545;
        if ( !v164 )
          goto LABEL_544;
        v173 = v170->m_Items[v172 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v164,
                                v173,
                                (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v165 )
            goto LABEL_544;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v165, v173, 0LL) )
          {
            v176 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v368.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v368.fields.fakeValue = v176;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v366 = v368;
            v177 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v366, 0LL);
            v178 = UserServantEntity__getSvtId(v355, 0LL);
            gameObject = (__int64)v360;
            if ( !v360 )
              goto LABEL_544;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v360,
                   &entity,
                   v177,
                   v173,
                   v178,
                   0LL) )
            {
              gameObject = (__int64)entity;
              if ( !entity )
                goto LABEL_544;
              BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
            }
            else
            {
              BuddyPoint = 0;
            }
            v180 = UserServantEntity__getSvtId(v355, 0LL);
            v181 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v165,
                     v173,
                     BuddyPoint,
                     v180,
                     0LL);
            v184 = v181 ? v181->fields.svtPointRank : 0;
            v185 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v182, v183);
            EventMargeItemUpValInfo___ctor_38573000(v185, v173, 0LL);
            if ( !v185 )
              goto LABEL_544;
            EventMargeItemUpValInfo__SetServantPointInfo(v185, BuddyPoint, v184, 0, 0LL);
            if ( !v168 )
              goto LABEL_544;
            System_Collections_Generic_List_object___Insert(
              v168,
              0,
              (Il2CppObject *)v185,
              (const MethodInfo_34AE524 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v162 = v361;
          }
          v186 = (EventPersonalMargeUpValInfo_o *)sub_1B64314(EventPersonalMargeUpValInfo_TypeInfo, v174, v175);
          EventPersonalMargeUpValInfo___ctor(v186, v173, v162, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_544;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v186 )
            goto LABEL_544;
          EventPersonalMargeUpValInfo__Add(v186, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v186, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v186, 0LL);
            if ( !gameObject )
              goto LABEL_544;
            v189 = *(_QWORD *)(gameObject + 24);
            v190 = gameObject;
            if ( (int)v189 >= 1 )
              break;
          }
        }
LABEL_238:
        LODWORD(v171) = v170->max_length;
        if ( (__int64)++v172 >= (int)v171 )
          goto LABEL_239;
      }
      v191 = 0LL;
      while ( v191 < (unsigned int)v189 )
      {
        if ( !v168 )
          goto LABEL_544;
        v192 = *(Il2CppObject **)(v190 + 32 + 8 * v191);
        v193 = v168->fields._items;
        v194 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v168->fields._version;
        if ( !v193 )
          goto LABEL_544;
        v195 = v168->fields._size;
        if ( (unsigned int)v195 >= v193->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v168,
            v192,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
        }
        else
        {
          v196 = &v193->obj.klass + v195;
          v168->fields._size = v195 + 1;
          v196[4] = (Il2CppClass *)v192;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v196 + 4), (int32_t)v192, v187, v188);
        }
        LODWORD(v189) = *(_DWORD *)(v190 + 24);
        if ( (__int64)++v191 >= (int)v189 )
          goto LABEL_238;
      }
LABEL_545:
      sub_1B6432C(gameObject, v73);
    }
LABEL_239:
    if ( !v168 )
      goto LABEL_544;
    v140 = v331;
    v359 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v168,
                                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v345;
    v8 = v364;
    v67 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v334;
  }
  else
  {
    v359 = 0LL;
    v140 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v355, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(v355, v8->fields.questRestrictionInfo, 2, 0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v355, v8->fields.questRestrictionInfo, 0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v355,
                                       v8->fields.questRestrictionInfo,
                                       0LL);
  v363 = 0;
  cardParamsa = 0LL;
LABEL_242:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v67,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_544;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v67, gameObject, 0LL, 0LL);
  v197 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v93 = (System_Object_array *)v359;
  if ( UnityEngine_Object__op_Inequality(v197, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_544;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, frameType, 0LL);
    }
  }
  v198 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v198, 0LL, 0LL) )
  {
    v199 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v199 )
      goto LABEL_544;
    UILabel__set_text(v199, (System_String_o *)gameObject, 0LL);
  }
  v200 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v200, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v346 = IsDataLost;
    v201 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v202 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v203 = QuestRestriction;
    Icon_37389972 = Rarity__getIcon_37389972(rarity, exceedCount, v202, 0LL);
    v205 = v140;
    if ( exceedCount < 1 )
    {
      v206 = UniqueSvtRestriction;
      v207 = exceedCount;
      v209 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v206 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v207 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v209 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v210 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v209 >= 3 )
    {
      AtlasManager__SetEventSprite(v210, Icon_37389972, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v210, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_37389972, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v211 = v207 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_544;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v385.fields.x = v211;
    v385.fields.y = y;
    v385.fields.z = z;
    UniqueSvtRestriction = v206;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v385, 0LL);
    v140 = v205;
    QuestRestriction = v203;
    TimesToRestart = v201;
    v93 = (System_Object_array *)v359;
    IsDataLost = v346;
  }
  v214 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v214, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v215 = this->fields.skillListTreasureDevice;
    v216 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_38083912(v216, 0LL);
    if ( !v215 )
      goto LABEL_544;
    SkillListTreasureDeviceComponent__Set(
      v215,
      (System_String_o *)gameObject,
      v341,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v219 = (Il2CppObject *)this->fields.skillInfoUiWidget;
      v220 = *(_QWORD *)(gameObject + 16);
      v221 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v220 )
        goto LABEL_544;
      v222 = *(int *)(gameObject + 24);
      if ( (unsigned int)v222 >= *(_DWORD *)(v220 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          v219,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
      }
      else
      {
        v223 = v220 + 8 * v222;
        *(_DWORD *)(gameObject + 24) = v222 + 1;
        *(_QWORD *)(v223 + 32) = v219;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v223 + 32), (int32_t)v219, v217, v218);
      }
    }
  }
  v224 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v224, 0LL, 0LL) )
  {
    if ( v370 && *(_QWORD *)&v370->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v225 = this->fields.appendSkillList;
      v226 = v370;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_38083912(v226, 0LL);
      if ( !v225 )
        goto LABEL_544;
      AppendSkillListComponent__Set(v225, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v229 = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
        v230 = *(_QWORD *)(gameObject + 16);
        v231 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v230 )
          goto LABEL_544;
        v232 = *(int *)(gameObject + 24);
        if ( (unsigned int)v232 >= *(_DWORD *)(v230 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v229,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v231[4] + 192LL) + 112LL));
        }
        else
        {
          v233 = v230 + 8 * v232;
          *(_DWORD *)(gameObject + 24) = v232 + 1;
          *(_QWORD *)(v233 + 32) = v229;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v233 + 32), (int32_t)v229, v227, v228);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v235 = this->fields.switchSkillUIList;
    if ( v235 )
    {
      v236 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v235,
                              (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v236 )
        goto LABEL_544;
      SwitchUIWidgetComponent__Set(v236, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v237 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_544;
    if ( v8->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_37898232(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_37898476(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v238 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v238, 0LL, 0LL) )
  {
    v239 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v343 <= 0 )
      v240 = 1.0;
    else
      v240 = 0.015686;
    if ( v343 <= 0 )
      v239 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v241 = 1.0;
    v242 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v239 - 1), 0LL);
    v243 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_62180668((int32_t)lv, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
    if ( !v243 )
      goto LABEL_544;
    UILabel__set_text(v243, (System_String_o *)gameObject, 0LL);
  }
  v244 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v244, 0LL, 0LL) )
  {
    v245 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v246 = 1.0;
    else
      v246 = 0.015686;
    if ( adjustHp <= 0 )
      v245 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v247 = 1.0;
    v248 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v245 - 1), 0LL);
    v249 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_62180668((int32_t)&v373, (System_String_o *)StringLiteral_430/*"#,0"*/, 0LL);
    if ( !v249 )
      goto LABEL_544;
    UILabel__set_text(v249, (System_String_o *)gameObject, 0LL);
  }
  v250 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v250, 0LL, 0LL) )
  {
    v251 = this->fields.baseSprite;
    v252 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v251, frameType, v252, 0, 0LL);
  }
  v253 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
  {
    v254 = this->fields.base2Sprite;
    v255 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v254, frameType, v255, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v363 | QuestRestriction) & 1) != 0 )
  {
    v257 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v350;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v258 = LocalizationManager__Get((System_String_o *)StringLiteral_10233/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_375;
  }
  UserServantLeaderEntity = v350;
  if ( !v8->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v361, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37376848(126, 0LL) )
    {
      v263 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v263, 0LL, 0LL) )
        goto LABEL_406;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      v265 = 1;
LABEL_405:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v265, 0LL);
LABEL_406:
      SupportSelectItemDraw__ClearMessage(this, v264);
      goto LABEL_407;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v262 = 1;
      v261 = this;
      v260 = 0;
      v259 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_376;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v268 = LocalizationManager__Get((System_String_o *)StringLiteral_11459/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v368.fields.currentCryptoKey) = TimesToRestart;
      v269 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v368);
      v258 = System_String__Format(v268, v269, 0LL);
LABEL_375:
      v259 = v258;
      v260 = 1;
      v261 = this;
      v262 = 0;
LABEL_376:
      SupportSelectItemDraw__SetMaskMessage(v261, v259, v260, v262, v256);
      goto LABEL_407;
    }
    v270 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v270, 0LL, 0LL) )
      goto LABEL_406;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v265 = 0;
    goto LABEL_405;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v266 = LocalizationManager__Get((System_String_o *)StringLiteral_6398/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v266, 1, v267);
LABEL_407:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v272 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v272, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v72 = 0;
  v94 = v140 != 0;
  if ( !v356 )
    goto LABEL_465;
  v62 = v352;
  if ( (gameObject & 1) == 0 )
    goto LABEL_437;
  max_length = v356->max_length;
  if ( max_length < 1 )
  {
LABEL_436:
    v72 = 0;
LABEL_437:
    if ( v62 )
      goto LABEL_438;
    goto LABEL_466;
  }
  v275 = v8;
  v276 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v356->m_Items;
  do
  {
    if ( (unsigned int)v276 >= max_length )
      goto LABEL_545;
    v280 = m_Items[v276];
    if ( !v280 )
      goto LABEL_544;
    gameObject = System_Array__IndexOf_int_(
                   v280->fields.targetIds,
                   svtId,
                   (const MethodInfo_2F31E68 *)Method_System_Array_IndexOf_int___);
    max_length = v356->max_length;
    if ( (unsigned int)v276 >= max_length )
      goto LABEL_545;
    v282 = m_Items[v276];
    if ( !v282 )
      goto LABEL_544;
    targetIds = v282->fields.targetIds;
    if ( targetIds )
      v284 = targetIds->max_length == 0;
    else
      v284 = 1;
    if ( (v284 || (int)gameObject >= 0) && value < v282->fields.value )
    {
      eventId = v282->fields.eventId;
      value = v282->fields.value;
    }
    ++v276;
  }
  while ( (int)v276 < max_length );
  v8 = v275;
  if ( value < 1 )
  {
    v62 = v352;
    v93 = (System_Object_array *)v359;
    goto LABEL_436;
  }
  v285 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo,
                                                        v73,
                                                        v281);
  v286 = v285;
  if ( v359 )
    System_Collections_Generic_List_object____ctor_55234504(
      v285,
      (System_Collections_Generic_IEnumerable_T__o *)v359,
      (const MethodInfo_34ACFC8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75651256);
  else
    System_Collections_Generic_List_object____ctor(
      v285,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v298 = (EventMargeItemUpValInfo_o *)sub_1B64314(EventMargeItemUpValInfo_TypeInfo, v287, v288);
  EventMargeItemUpValInfo___ctor_38572920(v298, eventId, value, 0LL);
  if ( !v286 )
    goto LABEL_544;
  v301 = v286->fields._items;
  v302 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v286->fields._version;
  if ( !v301 )
    goto LABEL_544;
  v303 = v286->fields._size;
  if ( (unsigned int)v303 >= v301->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v286,
      (Il2CppObject *)v298,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v302[4] + 192LL) + 112LL));
  }
  else
  {
    v304 = &v301->obj.klass + v303;
    v286->fields._size = v303 + 1;
    v304[4] = (Il2CppClass *)v298;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v304 + 4), (int32_t)v298, v299, v300);
  }
  v93 = System_Collections_Generic_List_object___ToArray(
          v286,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  v72 = 0;
LABEL_465:
  v62 = v352;
  if ( !v352 )
    goto LABEL_466;
LABEL_438:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v289 = (UISprite_o *)this->fields.equipSprite;
  v291 = v62[5].klass;
  v290 = v62[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v380.fields.currentCryptoKey = v291;
  *(_QWORD *)&v380.fields.fakeValue = v290;
  v292 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v380, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v289, v292, 0LL);
  v293 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v293, 0LL, 0LL) )
  {
    v295 = v62[6].klass;
    v294 = v62[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v381.fields.currentCryptoKey = v295;
    *(_QWORD *)&v381.fields.fakeValue = v294;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v381, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v296 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v296 >= 4 )
      {
        if ( !v353 )
          goto LABEL_544;
        v297 = SLODWORD(v353[5].monitor) >= v296;
      }
      else
      {
        v297 = 0;
      }
      if ( gameObject )
        goto LABEL_493;
    }
    goto LABEL_544;
  }
LABEL_494:
  v313 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v313, 0LL, 0LL) )
  {
    if ( v8->fields.isFriendInfo )
    {
      if ( (v72 & 1) == 0 )
      {
        v314 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v314 )
        {
          v316 = *(_QWORD *)&v314->fields.svtId.fields.currentCryptoKey;
          v315 = *(_QWORD *)&v314->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v383.fields.currentCryptoKey = v316;
          *(_QWORD *)&v383.fields.fakeValue = v315;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v383, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_544;
          v317 = gameObject;
          v318 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_515:
          v324 = v318;
          goto LABEL_517;
        }
      }
    }
    else if ( (v72 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v323 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v322 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v384.fields.currentCryptoKey = v323;
        *(_QWORD *)&v384.fields.fakeValue = v322;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v384, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_544;
        v317 = gameObject;
        v318 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_515;
      }
    }
    v324 = -1;
    v317 = -1;
LABEL_517:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_544;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v93,
      v317,
      v324,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_544;
      v320 = 0;
      goto LABEL_526;
    }
    goto LABEL_527;
  }
  v319 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v319, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_544;
    v320 = v94;
LABEL_526:
    ShiningIconComponent__Set_37919868((ShiningIconComponent_o *)gameObject, v320, 0LL);
  }
LABEL_527:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0LL,
      1LL,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        pushUserServantId = v8->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( UserServantLeaderEntity )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              return;
            }
          }
        }
      }
    }
    goto LABEL_544;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v16; // x22
  UIWidget_o *v17; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v22; // s0
  float v23; // s8
  __int64 v24; // x1
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  __int64 v30; // x1
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8E26 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, message);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_20230/*"img_frames_mask05"*/, v11);
    sub_1B640C8(&StringLiteral_18404/*"datalost_party_edit"*/, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49F8E26 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_48;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_48;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    v16 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v16, (System_String_o *)StringLiteral_18404/*"datalost_party_edit"*/, 0LL);
      v17 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v17 )
        goto LABEL_48;
      UIWidget__set_width(v17, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      p_z = &static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      if ( !v16 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20230/*"img_frames_mask05"*/, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_48;
      p_z = &this->fields.maskSpriteDefaultPosition.fields.z;
      p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v34.fields.z = *p_z;
    v34.fields.y = *p_y;
    v34.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v34, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v23 = v22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v23 <= restrictionMaskMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v24);
          byte_49F7116 = 1;
        }
        v32 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v32->oneVector.fields.x;
        y = v32->oneVector.fields.y;
        z = v32->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v23;
        z = 1.0;
        y = 1.0;
      }
      if ( !v25 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_49F7116 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v30);
        byte_49F7116 = 1;
      }
      if ( !v25 )
        goto LABEL_48;
      v31 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v31->oneVector.fields.y;
      z = v31->oneVector.fields.z;
      x = v31->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v25, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0LL);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
          return;
        }
      }
    }
LABEL_48:
    sub_1B64324(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  __int64 v12; // x1
  UnityEngine_Transform_o *v13; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49F8E27 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, message);
    sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49F8E27 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
    v13 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_49F7116 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
          byte_49F7116 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->oneVector.fields.x;
        y = static_fields->oneVector.fields.y;
        z = static_fields->oneVector.fields.z;
      }
      else
      {
        x = restrictionWarningMessageWidth / printedSize.fields.x;
        z = 1.0;
        y = 1.0;
      }
      if ( !v13 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_49F7116 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v12);
        byte_49F7116 = 1;
      }
      if ( !v13 )
        goto LABEL_33;
      v18 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v18->oneVector.fields.y;
      z = v18->oneVector.fields.z;
      x = v18->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v13, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v20.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v20.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v20.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v20, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B64324(gameObject);
  }
}