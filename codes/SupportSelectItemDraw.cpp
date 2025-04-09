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
  const MethodInfo *v15; // x3
  __int64 v16; // x19
  int32_t v17; // w1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_49B76B8 & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, v1);
    sub_1B4CF90(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1B4CF90(&StringLiteral_19796/*"icon_class1002"*/, v3);
    sub_1B4CF90(&StringLiteral_19794/*"icon_class007"*/, v4);
    sub_1B4CF90(&StringLiteral_19793/*"icon_class006"*/, v5);
    sub_1B4CF90(&StringLiteral_19791/*"icon_class004"*/, v6);
    sub_1B4CF90(&StringLiteral_19788/*"icon_class001"*/, v7);
    sub_1B4CF90(&StringLiteral_19795/*"icon_class1001"*/, v8);
    sub_1B4CF90(&StringLiteral_19789/*"icon_class002"*/, v9);
    sub_1B4CF90(&StringLiteral_19792/*"icon_class005"*/, v10);
    sub_1B4CF90(&StringLiteral_19790/*"icon_class003"*/, v11);
    byte_49B76B8 = 1;
  }
  v12 = sub_1B4D038(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1B4D1EC(0LL, v13);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v17 = StringLiteral_19795/*"icon_class1001"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_19795/*"icon_class1001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_14;
  v20 = StringLiteral_19788/*"icon_class001"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_19788/*"icon_class001"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 40), v20, v18, v19);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_14;
  v23 = StringLiteral_19789/*"icon_class002"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_19789/*"icon_class002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 48), v23, v21, v22);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_14;
  v26 = StringLiteral_19790/*"icon_class003"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_19790/*"icon_class003"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 56), v26, v24, v25);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_14;
  v29 = StringLiteral_19791/*"icon_class004"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_19791/*"icon_class004"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 64), v29, v27, v28);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_14;
  v32 = StringLiteral_19792/*"icon_class005"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_19792/*"icon_class005"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 72), v32, v30, v31);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (v35 = StringLiteral_19793/*"icon_class006"*/,
        *(_QWORD *)(v16 + 80) = StringLiteral_19793/*"icon_class006"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 80), v35, v33, v34),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v38 = StringLiteral_19794/*"icon_class007"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_19794/*"icon_class007"*/,
        sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 88), v38, v36, v37),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_14:
    sub_1B4D1F4(v12, v13);
  }
  v41 = StringLiteral_19796/*"icon_class1002"*/;
  *(_QWORD *)(v16 + 96) = StringLiteral_19796/*"icon_class1002"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v16 + 96), v41, v39, v40);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v16;
  sub_1B4CF34((CGThumbnailListItem_o *)SupportSelectItemDraw_TypeInfo->static_fields, v16, v42, v43);
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
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x21
  __int64 methodPtr_low; // x9
  __int64 v22; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x19
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0

  if ( (byte_49B76B7 & 1) == 0 )
  {
    sub_1B4CF90(&System_IDisposable_TypeInfo, method);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_Transform_TypeInfo, v5);
    byte_49B76B7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B4D1EC(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    v20 = v18;
    if ( !v18 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B4D4AC(v18);
LABEL_37:
      sub_1B4D1EC(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1B4D1EC(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1B4D1EC(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1B4D0CC(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_32;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_32:
      v33 = sub_1B9D724(v28, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v6; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UISprite_o *v12; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UISprite_o *v17; // x8
  struct UIAtlas_o *v18; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x3
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *v23; // x1
  System_Collections_Generic_List_object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B76AF & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B4CF90(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v4);
    byte_49B76AF = 1;
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
    v12 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v12 )
      goto LABEL_37;
    mAtlas = v12->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v10, v11);
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
    v17 = this->fields.baseSprite;
    if ( !v17 )
      goto LABEL_37;
    v18 = v17->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v18;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v18, v15, v16);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v22 = this->fields.base2Sprite;
    if ( v22 )
    {
      v23 = v22->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v23;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v23, (int32_t)v20, v21);
      goto LABEL_36;
    }
LABEL_37:
    sub_1B4D1EC(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v24, v25, v26);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_49B76B0 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B76B0 = 1;
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
    sub_1B4D1EC(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v5; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_49B76B2 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_1/*""*/, v3);
    byte_49B76B2 = 1;
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
    sub_1B4D1EC(gameObject, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_49B76B5 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, flag);
    byte_49B76B5 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0LL);
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
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_49B76B6 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49B76B6 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1B4D1EC(0LL, v6);
    ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v7->klass->vtable._8_set_alpha.method)(
      v7,
      v7->klass->vtable._9_CalculateFinalAlpha.methodPtr,
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
  __int64 v8; // x1
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
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 gameObject; // x0
  unsigned __int64 v57; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v60; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x26
  struct EquipTargetInfo_o *equipTarget1; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v65; // x19
  __int64 v66; // x20
  __int64 v67; // x21
  Il2CppObject *v68; // x29
  Il2CppObject *v69; // x23
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v74; // w19
  SupportServantData_o *v75; // x22
  ServantLeaderInfo_o *servantLeaderInfo; // x27
  int32_t atk; // w8
  int hp; // w8
  char v79; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v81; // x8
  UnityEngine_Object_o *v82; // x19
  UISprite_o *v83; // x19
  UIAtlas_o *v84; // x20
  UnityEngine_Object_o *v85; // x19
  UISprite_o *v86; // x19
  UIAtlas_o *v87; // x20
  UnityEngine_Object_o *v88; // x19
  UnityEngine_Object_o *v89; // x19
  UnityEngine_Object_o *v90; // x19
  UnityEngine_Object_o *v91; // x19
  UnityEngine_Object_o *v92; // x19
  UnityEngine_Object_o *v93; // x19
  UnityEngine_Object_o *v94; // x19
  UnityEngine_Object_o *v95; // x19
  UnityEngine_Object_o *v96; // x19
  UnityEngine_Object_o *v97; // x19
  Il2CppObject *v98; // x28
  System_Object_array *v99; // x29
  UISprite_o *v100; // x19
  __int64 v101; // x20
  __int64 v102; // x21
  int32_t v103; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v105; // w21
  UnityEngine_Object_o *v106; // x19
  int v107; // w19
  __int64 v108; // x22
  int32_t v109; // w8
  int v110; // w8
  UnityEngine_Object_o *v111; // x19
  int adjustHp; // w19
  int adjustAtk; // w20
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_41107300; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v118; // x24
  Il2CppObject *v119; // x21
  Il2CppObject *v120; // x23
  System_Collections_Generic_List_object__o *v121; // x29
  struct EventUpValSetupInfo_o *v122; // x8
  struct System_Int32_array *v123; // x9
  __int64 v124; // x8
  unsigned __int64 v125; // x27
  int32_t eventSvtPoint; // w19
  __int64 v127; // x20
  __int64 v128; // x24
  int32_t v129; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v132; // x20
  EventPersonalMargeUpValInfo_o *v133; // x19
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  __int64 v136; // x8
  __int64 v137; // x24
  unsigned __int64 v138; // x28
  Il2CppObject *v139; // x25
  __int64 v140; // x20
  _DWORD *v141; // x8
  int v142; // w8
  __int64 v143; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v145; // x8
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x19
  System_Func_int__bool__o *v149; // x22
  System_Func_TSource__bool__o *v150; // x1
  struct System_Object_array *items; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  struct QuestRestrictionInfo_o *v155; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v157; // x1
  EventMargeItemUpValInfo_array *AddUpValInfos; // x23
  int v159; // w24
  int v160; // w20
  int32_t v161; // w19
  Il2CppObject v162; // q1
  int64_t v163; // x19
  int v164; // w23
  System_Int32_array *CommandCodeIdList; // x0
  System_Int32_array *commandCardParam; // x26
  System_Int32_array *v167; // x24
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w28
  int v170; // w27
  int v171; // w20
  int32_t v172; // w20
  QuestRestrictionInfo_o *v173; // x19
  __int64 v174; // x21
  __int64 v175; // x22
  int32_t v176; // w0
  int32_t v177; // w21
  int32_t v178; // w22
  _BOOL4 IsRestrictionServantIndividuality; // w0
  bool EventUpVal_40808508; // w19
  Il2CppObject *v181; // x23
  Il2CppObject *v182; // x28
  System_Collections_Generic_List_object__o *v183; // x27
  struct EventUpValSetupInfo_o *v184; // x8
  struct System_Int32_array *v185; // x29
  __int64 v186; // x8
  ServantEntity_o *v187; // x25
  unsigned __int64 v188; // x21
  int32_t v189; // w24
  __int128 v190; // q0
  int64_t v191; // x19
  int32_t v192; // w4
  int32_t BuddyPoint; // w19
  int32_t v194; // w0
  EventServantPointRankEntity_o *v195; // x0
  int32_t v196; // w25
  EventMargeItemUpValInfo_o *v197; // x20
  EventPersonalMargeUpValInfo_o *v198; // x19
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  __int64 v201; // x8
  __int64 v202; // x20
  unsigned __int64 v203; // x19
  struct System_Object_array *v204; // x8
  _QWORD *v205; // x9
  __int64 v206; // x10
  Il2CppClass **v207; // x0
  UserServantEntity_o *v208; // x0
  UnityEngine_Object_o *servantClassIcon; // x19
  UnityEngine_Object_o *levelLabel; // x19
  UILabel_o *v211; // x19
  UnityEngine_Object_o *raritySprite; // x19
  int32_t v213; // w19
  System_String_o *Icon_38239256; // x21
  int32_t RarityIcon; // w19
  int32_t v216; // w19
  UISprite_o *v217; // x20
  float v218; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  SkillListTreasureDeviceComponent_o *v222; // x19
  SkillInfo_array *v223; // x20
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  __int64 v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x8
  UnityEngine_Object_o *appendSkillList; // x19
  AppendSkillListComponent_o *v231; // x19
  SkillInfo_array *v232; // x20
  int32_t v233; // w2
  const MethodInfo *v234; // x3
  __int64 v235; // x8
  _QWORD *v236; // x9
  __int64 v237; // x10
  __int64 v238; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v240; // x0
  SwitchUIWidgetComponent_o *v241; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *attackLabel; // x19
  float v244; // s1
  float v245; // s2
  float v246; // s0
  float v247; // s3
  UILabel_o *v248; // x19
  UnityEngine_Object_o *hpLabel; // x19
  float v250; // s1
  float v251; // s2
  float v252; // s0
  float v253; // s3
  UILabel_o *v254; // x19
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v256; // x20
  UIAtlas_o *baseDefaultUIAtlas; // x19
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v259; // x20
  UIAtlas_o *base2DefaultUIAtlas; // x19
  const MethodInfo *v261; // x4
  UnityEngine_Object_o *sortieMaskSprite; // x19
  System_String_o *v263; // x0
  System_String_o *v264; // x1
  bool v265; // w2
  SupportSelectItemDraw_o *v266; // x0
  bool v267; // w3
  _BOOL4 v268; // w19
  UnityEngine_Object_o *v269; // x19
  bool v270; // w1
  System_String_o *v271; // x0
  const MethodInfo *v272; // x3
  System_String_o *v273; // x19
  __int64 v274; // x2
  __int64 v275; // x3
  __int64 v276; // x4
  Il2CppObject *v277; // x0
  UnityEngine_Object_o *v278; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  signed int max_length; // w8
  __int64 v283; // x19
  int32_t v284; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v287; // x8
  EventCampaignEntity_o *v288; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v290; // w10
  System_Collections_Generic_List_object__o *v291; // x0
  System_Collections_Generic_List_object__o *v292; // x20
  UISprite_o *equipSprite; // x19
  void *v294; // x20
  Il2CppClass *v295; // x21
  int32_t v296; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  void *v298; // x19
  Il2CppClass *v299; // x20
  int v300; // w19
  UnityEngine_Object_o *v301; // x19
  struct ServantLeaderInfo_o *v302; // x8
  __int64 v303; // x19
  __int64 v304; // x20
  int32_t v305; // w20
  int32_t v306; // w0
  UnityEngine_Object_o *v307; // x19
  bool v308; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v310; // x19
  __int64 v311; // x20
  int32_t v312; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v318; // x19
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  struct System_Object_array *v321; // x8
  _QWORD *v322; // x9
  __int64 v323; // x10
  Il2CppClass **v324; // x0
  bool v325; // [xsp+10h] [xbp-1C0h]
  int32_t classId; // [xsp+14h] [xbp-1BCh]
  int v327; // [xsp+18h] [xbp-1B8h]
  int v328; // [xsp+1Ch] [xbp-1B4h]
  int32_t treasureDeviceNum; // [xsp+20h] [xbp-1B0h]
  int32_t strengthStatus; // [xsp+24h] [xbp-1ACh]
  int32_t v331; // [xsp+28h] [xbp-1A8h]
  int32_t rarity; // [xsp+2Ch] [xbp-1A4h]
  Il2CppObject *v333; // [xsp+30h] [xbp-1A0h]
  UserServantLeaderEntity_o *v334; // [xsp+38h] [xbp-198h]
  int32_t limitCount; // [xsp+40h] [xbp-190h]
  int32_t frameType; // [xsp+44h] [xbp-18Ch]
  Il2CppObject *v337; // [xsp+48h] [xbp-188h]
  int exceedCount; // [xsp+54h] [xbp-17Ch]
  struct EquipTargetInfo_o *v339; // [xsp+58h] [xbp-178h]
  EventServantPointRankMaster_o *v340; // [xsp+60h] [xbp-170h]
  ServantLeaderInfo_o *v341; // [xsp+68h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+68h] [xbp-168h]
  struct System_Int32_array *v343; // [xsp+70h] [xbp-160h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+70h] [xbp-160h]
  bool v345; // [xsp+70h] [xbp-160h]
  Il2CppObject *v346; // [xsp+78h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *v347; // [xsp+78h] [xbp-158h]
  SupportSelectItemDraw_o *v348; // [xsp+80h] [xbp-150h]
  SupportSelectItemDraw_o *v349; // [xsp+80h] [xbp-150h]
  ServantEntity_o *v350; // [xsp+88h] [xbp-148h]
  int32_t svtId; // [xsp+94h] [xbp-13Ch]
  bool eventId; // [xsp+A0h] [xbp-130h]
  int32_t eventIda; // [xsp+A0h] [xbp-130h]
  bool eventIdb; // [xsp+A0h] [xbp-130h]
  Il2CppObject *eventIdc; // [xsp+A0h] [xbp-130h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v358; // [xsp+B0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v359; // [xsp+D0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v360; // [xsp+F0h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+118h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+124h] [xbp-ACh] BYREF
  SkillInfo_array *v363; // [xsp+128h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+130h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+138h] [xbp-98h] BYREF
  int v366; // [xsp+144h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+148h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+158h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v369; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v370; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v371; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v372; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v373; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v374; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  UnityEngine_Vector3_o v378; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B76B1 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1B4CF90(&AtlasManager_TypeInfo, v8);
    sub_1B4CF90(&Method_DataManager_GetMasterData_EventDetailMaster___, v9);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v10);
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantMaster___, v11);
    sub_1B4CF90(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventDetailMaster___, v13);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v14);
    sub_1B4CF90(&Method_DataManager_GetMaster_FunctionMaster___, v15);
    sub_1B4CF90(&Method_DataManager_GetMaster_QuestPhaseMaster___, v16);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantExceedMaster___, v17);
    sub_1B4CF90(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v18);
    sub_1B4CF90(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v19);
    sub_1B4CF90(&DataManager_TypeInfo, v20);
    sub_1B4CF90(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v21);
    sub_1B4CF90(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v22);
    sub_1B4CF90(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v23);
    sub_1B4CF90(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v24);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_int____75530320, v25);
    sub_1B4CF90(&EventMargeItemUpValInfo_TypeInfo, v26);
    sub_1B4CF90(&EventPersonalMargeUpValInfo_TypeInfo, v27);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v28);
    sub_1B4CF90(&int_TypeInfo, v29);
    sub_1B4CF90(&long___TypeInfo, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Add__, v31);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v32);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__Clear__, v33);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v34);
    sub_1B4CF90(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v35);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v36);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75437448, v38);
    sub_1B4CF90(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v39);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v40);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v41);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v42);
    sub_1B4CF90(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v43);
    sub_1B4CF90(&Rarity_TypeInfo, v44);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45);
    sub_1B4CF90(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v46);
    sub_1B4CF90(&SupportSelectItemDraw_TypeInfo, v47);
    sub_1B4CF90(&TutorialFlag_TypeInfo, v48);
    sub_1B4CF90(&Method_SupportSelectItemDraw___c__DisplayClass52_0__SetItem_b__0__, v49);
    sub_1B4CF90(&SupportSelectItemDraw___c__DisplayClass52_0_TypeInfo, v50);
    sub_1B4CF90(&StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v51);
    sub_1B4CF90(&StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v52);
    sub_1B4CF90(&StringLiteral_6348/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v53);
    sub_1B4CF90(&StringLiteral_397/*"#,0"*/, v54);
    sub_1B4CF90(&StringLiteral_1/*""*/, v55);
    byte_49B76B1 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v366 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  v363 = 0LL;
  isDuplicate = 0;
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_559;
  size = switchSkillUIList->fields._size;
  v60 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v60;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_559;
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
      goto LABEL_559;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_559;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_559;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_559;
      v65 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v66 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v369.fields.currentCryptoKey = v67;
      *(_QWORD *)&v369.fields.fakeValue = v66;
      v339 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v369, 0LL);
      if ( !v65 )
        goto LABEL_559;
      v68 = DataMasterBase_object__object__int___GetEntity(
              v65,
              gameObject,
              (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v69 = 0LL;
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_559;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_559;
    v69 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v69 )
      goto LABEL_559;
    v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v69[5].klass;
    monitor = v69[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v370.fields.currentCryptoKey = klass;
    *(_QWORD *)&v370.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v370, 0LL);
    if ( !v71 )
      goto LABEL_559;
    v68 = DataMasterBase_object__object__int___GetEntity(
            v71,
            gameObject,
            (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v69 = 0LL;
    v68 = 0LL;
  }
  v339 = 0LL;
  if ( !UserServantLeaderEntity )
  {
    v79 = 1;
    goto LABEL_47;
  }
LABEL_37:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    v74 = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantMaster___);
    v75 = supportServantData;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            v74,
                            (const MethodInfo_319D99C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_559;
    v350 = (ServantEntity_o *)gameObject;
    v337 = v69;
    svtId = v74;
    classId = *(_DWORD *)(gameObject + 80);
    v333 = v68;
    v334 = UserServantLeaderEntity;
    if ( supportServantData->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_559;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
      lv[1] = servantLeaderInfo->fields.lv;
      atk = servantLeaderInfo->fields.atk;
      lv[0] = atk;
      if ( v339 )
      {
        lv[0] = v339->fields.atk + atk;
        hp = v339->fields.hp + servantLeaderInfo->fields.hp;
      }
      else
      {
        hp = servantLeaderInfo->fields.hp;
      }
      adjustAtk = servantLeaderInfo->fields.adjustAtk;
      adjustHp = servantLeaderInfo->fields.adjustHp;
      v366 = hp;
      rarity = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
      exceedCount = servantLeaderInfo->fields.exceedCount;
      frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
      limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
      gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
      if ( !tdInfo )
        goto LABEL_559;
      strengthStatus = tdInfo->fields.strengthStatus;
      v331 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_41119564(servantLeaderInfo, &v363, 0, 0LL);
      eventSetupInfo = supportServantData->fields.eventSetupInfo;
      v341 = servantLeaderInfo;
      v327 = adjustHp;
      v328 = adjustAtk;
      if ( !eventSetupInfo )
        goto LABEL_210;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_559;
      if ( *(_QWORD *)&eventIdList->max_length )
      {
        EventUpVal_41107300 = ServantLeaderInfo__getEventUpVal_41107300(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0LL);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v118 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v119 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_FunctionMaster___);
        v120 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        v121 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v121,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v122 = supportServantData->fields.eventSetupInfo;
        if ( !v122 )
          goto LABEL_559;
        v123 = v122->fields.eventIdList;
        v340 = (EventServantPointRankMaster_o *)v118;
        v325 = EventUpVal_41107300;
        if ( !v123 )
          goto LABEL_559;
        v124 = *(_QWORD *)&v123->max_length;
        if ( (int)v124 >= 1 )
        {
          v125 = 0LL;
          v346 = Master_object;
          v348 = this;
          v343 = v123;
          while ( 1 )
          {
            if ( v125 >= (unsigned int)v124 )
              goto LABEL_560;
            if ( !Master_object )
              goto LABEL_559;
            eventIda = v123->m_Items[v125 + 1];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    eventIda,
                                    (const MethodInfo_319D99C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              if ( !v340 )
                goto LABEL_559;
              if ( EventServantPointRankMaster__IsEnableEvent(v340, eventIda, 0LL) )
              {
                eventSvtPoint = v341->fields.eventSvtPoint;
                v128 = *(_QWORD *)&v341->fields.svtId.fields.currentCryptoKey;
                v127 = *(_QWORD *)&v341->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v372.fields.currentCryptoKey = v128;
                *(_QWORD *)&v372.fields.fakeValue = v127;
                v129 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v372, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v340, eventIda, eventSvtPoint, v129, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v132 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_39450004(v132, eventIda, 0LL);
                if ( !v132 )
                  goto LABEL_559;
                EventMargeItemUpValInfo__SetServantPointInfo(v132, v341->fields.eventSvtPoint, svtPointRank, 1, 0LL);
                if ( !v121 )
                  goto LABEL_559;
                System_Collections_Generic_List_object___Insert(
                  v121,
                  0,
                  (Il2CppObject *)v132,
                  (const MethodInfo_3580F8C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v133 = (EventPersonalMargeUpValInfo_o *)sub_1B4D1DC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v133, eventIda, v350, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_559;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v133 )
                goto LABEL_559;
              EventPersonalMargeUpValInfo__Add(v133, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v133, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v133, 0LL);
                if ( !gameObject )
                  goto LABEL_559;
                v136 = *(_QWORD *)(gameObject + 24);
                v137 = gameObject;
                if ( (int)v136 >= 1 )
                  break;
              }
            }
LABEL_205:
            v123 = v343;
            Master_object = v346;
            this = v348;
            ++v125;
            LODWORD(v124) = v343->max_length;
            if ( (__int64)v125 >= (int)v124 )
              goto LABEL_206;
          }
          v138 = 0LL;
          while ( v138 < (unsigned int)v136 )
          {
            v139 = *(Il2CppObject **)(v137 + 32 + 8 * v138);
            if ( !v75->fields.questRestrictionInfo )
              goto LABEL_563;
            v140 = sub_1B4D1DC(SupportSelectItemDraw___c__DisplayClass52_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v140, 0LL);
            if ( !v139 )
              goto LABEL_559;
            v141 = v139[2].monitor;
            if ( !v141 )
              goto LABEL_559;
            if ( !v119 )
              goto LABEL_559;
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v119,
                                    v141[4],
                                    (const MethodInfo_319D99C *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
            if ( !gameObject )
              goto LABEL_559;
            v142 = *(_DWORD *)(gameObject + 24);
            v143 = gameObject;
            if ( v142 == 1 || v142 == 16 || v142 == 111 )
              goto LABEL_564;
            questRestrictionInfo = v75->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              goto LABEL_559;
            if ( eventIda == questRestrictionInfo->fields.eventId )
            {
LABEL_564:
              v145 = v75->fields.questRestrictionInfo;
              if ( !v145 )
                goto LABEL_559;
              if ( !v120 )
                goto LABEL_559;
              gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                      (QuestPhaseMaster_o *)v120,
                                      v145->fields.questId,
                                      v145->fields.questPhase,
                                      0LL);
              if ( !v140 )
                goto LABEL_559;
              *(_QWORD *)(v140 + 16) = gameObject;
              sub_1B4CF34((CGThumbnailListItem_o *)(v140 + 16), gameObject, v146, v147);
              v148 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v143 + 80);
              if ( !v148 )
                goto LABEL_559;
              if ( !v148[1].monitor
                || (v149 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo),
                    System_Func_int__bool____ctor(
                      v149,
                      (Il2CppObject *)v140,
                      Method_SupportSelectItemDraw___c__DisplayClass52_0__SetItem_b__0__,
                      0LL),
                    v150 = (System_Func_TSource__bool__o *)v149,
                    v75 = supportServantData,
                    gameObject = System_Linq_Enumerable__Any_int__49352788(
                                   v148,
                                   v150,
                                   (const MethodInfo_2F11054 *)Method_System_Linq_Enumerable_Any_int____75530320),
                    (gameObject & 1) != 0) )
              {
LABEL_563:
                if ( !v121 )
                  goto LABEL_559;
                items = v121->fields._items;
                v152 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v121->fields._version;
                if ( !items )
                  goto LABEL_559;
                v153 = v121->fields._size;
                if ( (unsigned int)v153 >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v121,
                    v139,
                    *(const MethodInfo_35801DC **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
                }
                else
                {
                  v154 = &items->obj.klass + v153;
                  v121->fields._size = v153 + 1;
                  v154[4] = (Il2CppClass *)v139;
                  sub_1B4CF34((CGThumbnailListItem_o *)(v154 + 4), (int32_t)v139, v134, v135);
                }
              }
            }
            LODWORD(v136) = *(_DWORD *)(v137 + 24);
            if ( (__int64)++v138 >= (int)v136 )
              goto LABEL_205;
          }
          goto LABEL_560;
        }
LABEL_206:
        v155 = v75->fields.questRestrictionInfo;
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        servantLeaderInfo = v341;
        if ( !gameObject )
          goto LABEL_559;
        if ( v155 )
        {
          AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                   (PartyOrganizationUtility_o *)gameObject,
                                   &isDuplicate,
                                   (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v121,
                                   0LL);
          gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !gameObject )
            goto LABEL_559;
          v157 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
        }
        else
        {
          v157 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v121;
        }
        AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos((PartyOrganizationUtility_o *)gameObject, v157, 0LL);
      }
      else
      {
LABEL_210:
        AddUpValInfos = 0LL;
        v325 = 0;
      }
      CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
      commandCardParam = servantLeaderInfo->fields.commandCardParam;
      v167 = CommandCodeIdList;
      QuestRestriction = ServantLeaderInfo__getQuestRestriction(
                           servantLeaderInfo,
                           v75->fields.questRestrictionInfo,
                           0LL);
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               v75->fields.questRestrictionInfo,
                               0LL);
      v347 = (System_Collections_Generic_IEnumerable_T__o *)AddUpValInfos;
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           servantLeaderInfo,
                                           v75->fields.questRestrictionInfo,
                                           0LL,
                                           0LL);
      if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v75->fields.questRestrictionInfo, 0LL) )
      {
        v170 = 1;
      }
      else
      {
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_559;
        v171 = *(_DWORD *)(gameObject + 48);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_559;
        if ( v171 < 1 )
          goto LABEL_236;
        if ( !v75->fields.questRestrictionInfo )
          goto LABEL_559;
        v172 = *(_DWORD *)(gameObject + 52);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41066216(v75->fields.questRestrictionInfo, v172, 0LL) )
        {
          v173 = v75->fields.questRestrictionInfo;
          v175 = *(_QWORD *)&v341->fields.svtId.fields.currentCryptoKey;
          v174 = *(_QWORD *)&v341->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v373.fields.currentCryptoKey = v175;
          *(_QWORD *)&v373.fields.fakeValue = v174;
          v176 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v373, 0LL);
          v177 = v341->fields.limitCount;
          v178 = v176;
          gameObject = ServantLeaderInfo__getDispLimitCount(v341, 0LL);
          if ( !v173 )
            goto LABEL_559;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v173,
                                                v178,
                                                v177,
                                                gameObject,
                                                v172,
                                                1,
                                                0LL);
          v75 = supportServantData;
          v170 = IsRestrictionServantIndividuality;
        }
        else
        {
LABEL_236:
          v170 = 0;
        }
      }
      v164 = v325;
      eventIdb = ServantLeaderInfo__IsDataLost(v341, v75->fields.questRestrictionInfo, 0LL);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v341, v75->fields.questRestrictionInfo, 0LL);
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_319FEF8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_559;
      v108 = gameObject;
      lv[1] = *(_DWORD *)(gameObject + 256);
      v109 = *(_DWORD *)(gameObject + 264);
      lv[0] = v109;
      if ( v69 )
      {
        lv[0] = LODWORD(v69[16].monitor) + v109;
        v110 = HIDWORD(v69[16].monitor) + *(_DWORD *)(gameObject + 268);
      }
      else
      {
        v110 = *(_DWORD *)(gameObject + 268);
      }
      v159 = *(_DWORD *)(gameObject + 272);
      v366 = v110;
      v160 = *(_DWORD *)(gameObject + 276);
      rarity = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
      exceedCount = *(_DWORD *)(v108 + 296);
      frameType = UserServantEntity__getFrameType((UserServantEntity_o *)v108, 0LL);
      limitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v108, 0, 0LL);
      UserServantEntity__getSkillInfo((UserServantEntity_o *)v108, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
      gameObject = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)v108, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo )
        goto LABEL_559;
      v161 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      strengthStatus = tdInfo->fields.strengthStatus;
      UserServantEntity__GetAppendPassiveSkillInfo_40833772((UserServantEntity_o *)v108, &v363, 0LL);
      v327 = v160;
      v328 = v159;
      v331 = v161;
      if ( supportServantData->fields.eventSetupInfo )
      {
        if ( v69 )
        {
          v162 = v69[2];
          *(Il2CppObject *)&v360.fields.currentCryptoKey = v69[1];
          *(Il2CppObject *)&v360.fields.fakeValue = v162;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v359 = v360;
          v163 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v359, 0LL);
        }
        else
        {
          v163 = -1LL;
        }
        gameObject = sub_1B4D038(long___TypeInfo, 1LL);
        if ( !gameObject )
          goto LABEL_559;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_560;
        *(_QWORD *)(gameObject + 32) = v163;
        EventUpVal_40808508 = UserServantEntity__getEventUpVal_40808508(
                                (UserServantEntity_o *)v108,
                                &eventUpVallInfo,
                                supportServantData->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0LL,
                                0LL);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_559;
        v181 = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v182 = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        eventIdc = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v183 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v183,
          (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v184 = supportServantData->fields.eventSetupInfo;
        if ( !v184 )
          goto LABEL_559;
        v185 = v184->fields.eventIdList;
        v345 = EventUpVal_40808508;
        v349 = this;
        if ( !v185 )
          goto LABEL_559;
        v186 = *(_QWORD *)&v185->max_length;
        v187 = v350;
        if ( (int)v186 >= 1 )
        {
          v188 = 0LL;
          while ( 1 )
          {
            if ( v188 >= (unsigned int)v186 )
              goto LABEL_560;
            if ( !v181 )
              goto LABEL_559;
            v189 = v185->m_Items[v188 + 1];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v181,
                                    v189,
                                    (const MethodInfo_319D99C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              if ( !v182 )
                goto LABEL_559;
              if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v182, v189, 0LL) )
              {
                v190 = *(_OWORD *)(v108 + 64);
                *(_OWORD *)&v360.fields.currentCryptoKey = *(_OWORD *)(v108 + 48);
                *(_OWORD *)&v360.fields.fakeValue = v190;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v358 = v360;
                v191 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47012096(&v358, 0LL);
                v192 = UserServantEntity__getSvtId((UserServantEntity_o *)v108, 0LL);
                gameObject = (__int64)eventIdc;
                if ( !eventIdc )
                  goto LABEL_559;
                if ( UserEventServantPointMaster__TryGetEntity(
                       (UserEventServantPointMaster_o *)eventIdc,
                       &entity,
                       v191,
                       v189,
                       v192,
                       0LL) )
                {
                  gameObject = (__int64)entity;
                  if ( !entity )
                    goto LABEL_559;
                  BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
                }
                else
                {
                  BuddyPoint = 0;
                }
                v194 = UserServantEntity__getSvtId((UserServantEntity_o *)v108, 0LL);
                v195 = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)v182,
                         v189,
                         BuddyPoint,
                         v194,
                         0LL);
                v196 = v195 ? v195->fields.svtPointRank : 0;
                v197 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_39450004(v197, v189, 0LL);
                if ( !v197 )
                  goto LABEL_559;
                EventMargeItemUpValInfo__SetServantPointInfo(v197, BuddyPoint, v196, 0, 0LL);
                if ( !v183 )
                  goto LABEL_559;
                System_Collections_Generic_List_object___Insert(
                  v183,
                  0,
                  (Il2CppObject *)v197,
                  (const MethodInfo_3580F8C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v187 = v350;
              }
              v198 = (EventPersonalMargeUpValInfo_o *)sub_1B4D1DC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v198, v189, v187, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_559;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v198 )
                goto LABEL_559;
              EventPersonalMargeUpValInfo__Add(v198, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v198, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v198, 0LL);
                if ( !gameObject )
                  goto LABEL_559;
                v201 = *(_QWORD *)(gameObject + 24);
                v202 = gameObject;
                if ( (int)v201 >= 1 )
                  break;
              }
            }
LABEL_280:
            LODWORD(v186) = v185->max_length;
            if ( (__int64)++v188 >= (int)v186 )
              goto LABEL_281;
          }
          v203 = 0LL;
          while ( v203 < (unsigned int)v201 )
          {
            if ( !v183 )
              goto LABEL_559;
            v57 = *(_QWORD *)(v202 + 32 + 8 * v203);
            v204 = v183->fields._items;
            v205 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v183->fields._version;
            if ( !v204 )
              goto LABEL_559;
            v206 = v183->fields._size;
            if ( (unsigned int)v206 >= v204->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v183,
                (Il2CppObject *)v57,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
            }
            else
            {
              v207 = &v204->obj.klass + v206;
              v183->fields._size = v206 + 1;
              v207[4] = (Il2CppClass *)v57;
              sub_1B4CF34((CGThumbnailListItem_o *)(v207 + 4), v57, v199, v200);
            }
            LODWORD(v201) = *(_DWORD *)(v202 + 24);
            if ( (__int64)++v203 >= (int)v201 )
              goto LABEL_280;
          }
LABEL_560:
          sub_1B4D1F4(gameObject, v57);
        }
LABEL_281:
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_37B4830 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_559;
        v164 = v345;
        v347 = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                (PartyOrganizationUtility_o *)gameObject,
                                                                (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v183,
                                                                0LL);
        this = v349;
      }
      else
      {
        v347 = 0LL;
        v164 = 0;
      }
      v167 = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v108, 0LL);
      QuestRestriction = UserServantEntity__getQuestRestriction(
                           (UserServantEntity_o *)v108,
                           supportServantData->fields.questRestrictionInfo,
                           2,
                           0LL);
      UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                               (UserServantEntity_o *)v108,
                               supportServantData->fields.questRestrictionInfo,
                               0LL);
      v208 = (UserServantEntity_o *)v108;
      v75 = supportServantData;
      v170 = 0;
      commandCardParam = 0LL;
      IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                           v208,
                                           supportServantData->fields.questRestrictionInfo,
                                           0LL);
      TimesToRestart = 0;
      eventIdb = 0;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_559;
    gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)gameObject,
                   svtId,
                   limitCount,
                   0LL);
    if ( !this->fields.servantNarrowTexture )
      goto LABEL_559;
    UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0LL, 0LL);
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      if ( eventIdb )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_559;
        ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, frameType, 0, 0LL);
      }
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      v211 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
      if ( !v211 )
        goto LABEL_559;
      UILabel__set_text(v211, (System_String_o *)gameObject, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v213 = lv[1];
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon_38239256 = Rarity__getIcon_38239256(rarity, exceedCount, v213, 0LL);
      if ( exceedCount < 1 )
      {
        v216 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_559;
        RarityIcon = ServantExceedMaster__GetRarityIcon(
                       (ServantExceedMaster_o *)gameObject,
                       rarity,
                       exceedCount,
                       0,
                       0LL);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_559;
        v216 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 rarity,
                 lv[1],
                 RarityIcon,
                 0LL);
      }
      v217 = this->fields.raritySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( v216 >= 3 )
      {
        AtlasManager__SetEventSprite(v217, Icon_38239256, 0LL);
      }
      else
      {
        AtlasManager__SetCommon(v217, 0LL);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_559;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38239256, 0LL);
      }
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_559;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v218 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_559;
      y = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      v378.fields.x = v218;
      v378.fields.y = y;
      v378.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v378, 0LL);
    }
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v222 = this->fields.skillListTreasureDevice;
      v223 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_38942636(v223, 0LL);
      if ( !v222 )
        goto LABEL_559;
      SkillListTreasureDeviceComponent__Set(
        v222,
        (System_String_o *)gameObject,
        v331,
        strengthStatus,
        treasureDeviceNum,
        0,
        0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v57 = (unsigned __int64)this->fields.skillInfoUiWidget;
        v226 = *(_QWORD *)(gameObject + 16);
        v227 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v226 )
          goto LABEL_559;
        v228 = *(int *)(gameObject + 24);
        if ( (unsigned int)v228 >= *(_DWORD *)(v226 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v57,
            *(const MethodInfo_35801DC **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
        }
        else
        {
          v229 = v226 + 8 * v228;
          *(_DWORD *)(gameObject + 24) = v228 + 1;
          *(_QWORD *)(v229 + 32) = v57;
          sub_1B4CF34((CGThumbnailListItem_o *)(v229 + 32), v57, v224, v225);
        }
      }
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      if ( v363 && *(_QWORD *)&v363->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_559;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_559;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v231 = this->fields.appendSkillList;
        v232 = v363;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__GetLevelList_38942636(v232, 0LL);
        if ( !v231 )
          goto LABEL_559;
        AppendSkillListComponent__Set(v231, (System_String_o *)gameObject, 0LL);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          v57 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
          v235 = *(_QWORD *)(gameObject + 16);
          v236 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(gameObject + 28);
          if ( !v235 )
            goto LABEL_559;
          v237 = *(int *)(gameObject + 24);
          if ( (unsigned int)v237 >= *(_DWORD *)(v235 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              (Il2CppObject *)v57,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
          }
          else
          {
            v238 = v235 + 8 * v237;
            *(_DWORD *)(gameObject + 24) = v237 + 1;
            *(_QWORD *)(v238 + 32) = v57;
            sub_1B4CF34((CGThumbnailListItem_o *)(v238 + 32), v57, v233, v234);
          }
        }
      }
      else
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_559;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_559;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
    }
    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
    {
      v240 = this->fields.switchSkillUIList;
      if ( v240 )
      {
        v241 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v240,
                                (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v241 )
          goto LABEL_559;
        SwitchUIWidgetComponent__Set(v241, (UIWidget_array *)gameObject, 0LL);
      }
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_559;
      if ( v75->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_38753232(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          commandCardParam,
          v167,
          2,
          0,
          0LL);
      else
        ServantCommandCardListComponent__Set_38753476(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          v167,
          2,
          0,
          0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      v244 = 0.92157;
      gameObject = (__int64)this->fields.attackLabel;
      if ( v328 <= 0 )
        v245 = 1.0;
      else
        v245 = 0.015686;
      if ( v328 <= 0 )
        v244 = 1.0;
      if ( !gameObject )
        goto LABEL_559;
      v246 = 1.0;
      v247 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v244 - 1), 0LL);
      v248 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_62608464((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      if ( !v248 )
        goto LABEL_559;
      UILabel__set_text(v248, (System_String_o *)gameObject, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      v250 = 0.92157;
      gameObject = (__int64)this->fields.hpLabel;
      if ( v327 <= 0 )
        v251 = 1.0;
      else
        v251 = 0.015686;
      if ( v327 <= 0 )
        v250 = 1.0;
      if ( !gameObject )
        goto LABEL_559;
      v252 = 1.0;
      v253 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v250 - 1), 0LL);
      v254 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_62608464((int32_t)&v366, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
      if ( !v254 )
        goto LABEL_559;
      UILabel__set_text(v254, (System_String_o *)gameObject, 0LL);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v256 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v256, frameType, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v259 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v259, frameType, base2DefaultUIAtlas, 0, 0LL);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    if ( ((v170 | QuestRestriction) & 1) != 0 )
    {
      sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      v98 = v333;
      UserServantLeaderEntity = v334;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_559;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_559;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v263 = LocalizationManager__Get((System_String_o *)StringLiteral_10058/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
      goto LABEL_417;
    }
    v268 = UniqueSvtRestriction;
    v98 = v333;
    UserServantLeaderEntity = v334;
    if ( v75->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(v350, 0LL) )
      goto LABEL_430;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38224448(126, 0LL) )
    {
      v269 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v269, 0LL, 0LL) )
        goto LABEL_448;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      v270 = 1;
    }
    else
    {
LABEL_430:
      if ( IsUniqueIndividualityRestriction || v268 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v271 = LocalizationManager__Get((System_String_o *)StringLiteral_6348/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
        SupportSelectItemDraw__SetWarningMessage(this, v271, 1, v272);
LABEL_449:
        friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
        {
          friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.friendPointBonusBase;
            if ( !gameObject )
              goto LABEL_559;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          }
        }
        v99 = (System_Object_array *)v347;
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
        v79 = 0;
        eventId = v164 != 0;
        if ( eventFriendPoints )
        {
          v69 = v337;
          if ( (gameObject & 1) == 0 )
            goto LABEL_479;
          max_length = eventFriendPoints->max_length;
          if ( max_length < 1 )
            goto LABEL_557;
          v283 = 0LL;
          v284 = 0;
          value = 0;
          m_Items = eventFriendPoints->m_Items;
          do
          {
            if ( (unsigned int)v283 >= max_length )
              goto LABEL_560;
            v287 = m_Items[v283];
            if ( !v287 )
              goto LABEL_559;
            gameObject = System_Array__IndexOf_int_(
                           v287->fields.targetIds,
                           svtId,
                           (const MethodInfo_2FFB2B4 *)Method_System_Array_IndexOf_int___);
            max_length = eventFriendPoints->max_length;
            if ( (unsigned int)v283 >= max_length )
              goto LABEL_560;
            v288 = m_Items[v283];
            if ( !v288 )
              goto LABEL_559;
            targetIds = v288->fields.targetIds;
            if ( targetIds )
              v290 = targetIds->max_length == 0;
            else
              v290 = 1;
            if ( (v290 || (int)gameObject >= 0) && value < v288->fields.value )
            {
              v284 = v288->fields.eventId;
              value = v288->fields.value;
            }
            ++v283;
          }
          while ( (int)v283 < max_length );
          if ( value >= 1 )
          {
            v291 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
            v292 = v291;
            if ( v347 )
              System_Collections_Generic_List_object____ctor_56097488(
                v291,
                v347,
                (const MethodInfo_357FAD0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___75437448);
            else
              System_Collections_Generic_List_object____ctor(
                v291,
                (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
            v318 = (EventMargeItemUpValInfo_o *)sub_1B4D1DC(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_39449924(v318, v284, value, 0LL);
            if ( !v292 )
              goto LABEL_559;
            v321 = v292->fields._items;
            v322 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v292->fields._version;
            v69 = v337;
            if ( !v321 )
              goto LABEL_559;
            v323 = v292->fields._size;
            if ( (unsigned int)v323 >= v321->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v292,
                (Il2CppObject *)v318,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
            }
            else
            {
              v324 = &v321->obj.klass + v323;
              v292->fields._size = v323 + 1;
              v324[4] = (Il2CppClass *)v318;
              sub_1B4CF34((CGThumbnailListItem_o *)(v324 + 4), (int32_t)v318, v319, v320);
            }
            v99 = System_Collections_Generic_List_object___ToArray(
                    v292,
                    (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_557:
            v79 = 0;
            if ( !v69 )
              goto LABEL_123;
            goto LABEL_480;
          }
          v79 = 0;
        }
        v69 = v337;
LABEL_479:
        if ( v69 )
          goto LABEL_480;
        goto LABEL_123;
      }
      if ( eventIdb )
      {
        v267 = 1;
        v266 = this;
        v265 = 0;
        v264 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_418;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v273 = LocalizationManager__Get((System_String_o *)StringLiteral_11282/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
        LODWORD(v360.fields.currentCryptoKey) = TimesToRestart;
        v277 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v360, v274, v275, v276);
        v263 = System_String__Format(v273, v277, 0LL);
LABEL_417:
        v264 = v263;
        v265 = 1;
        v266 = this;
        v267 = 0;
LABEL_418:
        SupportSelectItemDraw__SetMaskMessage(v266, v264, v265, v267, v261);
        goto LABEL_449;
      }
      v278 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
      {
LABEL_448:
        SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v57);
        goto LABEL_449;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_559;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_559;
      v270 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v270, 0LL);
    goto LABEL_448;
  }
  v79 = 0;
LABEL_47:
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_559;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  backClassIcon = this->fields.backClassIcon;
  if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v81 = **(_QWORD **)(gameObject + 184);
  if ( !v81 )
    goto LABEL_559;
  if ( *(_DWORD *)(v81 + 24) <= (unsigned int)classPos )
    goto LABEL_560;
  if ( !backClassIcon )
    goto LABEL_559;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v81 + 8LL * classPos + 32), 0LL);
  v82 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
  {
    v83 = this->fields.baseSprite;
    v84 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v83, 9, v84, 0, 0LL);
  }
  v85 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v85, 0LL, 0LL) )
  {
    v86 = this->fields.base2Sprite;
    v87 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v86, 9, v87, 0, 0LL);
  }
  v88 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v89 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v89, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_559;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v90 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v90, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v91 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v91, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_559;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v92 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_559;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  }
  v93 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v57);
  v94 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v94, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v95 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v95, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  v96 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v96, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_559;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
  }
  v97 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v97, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_559;
    v98 = v68;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  else
  {
    v98 = v68;
  }
  v99 = 0LL;
  eventId = 0;
  if ( v69 )
  {
LABEL_480:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v295 = v69[5].klass;
    v294 = v69[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v374.fields.currentCryptoKey = v295;
    *(_QWORD *)&v374.fields.fakeValue = v294;
    v296 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v374, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v296, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      goto LABEL_500;
    v299 = v69[6].klass;
    v298 = v69[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v375.fields.currentCryptoKey = v299;
    *(_QWORD *)&v375.fields.fakeValue = v298;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v375, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v300 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v300 >= 4 )
      {
        if ( !v98 )
          goto LABEL_559;
        v57 = SLODWORD(v98[5].monitor) >= v300;
      }
      else
      {
        v57 = 0LL;
      }
      if ( gameObject )
      {
LABEL_499:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v57, 0LL);
        goto LABEL_500;
      }
    }
LABEL_559:
    sub_1B4D1EC(gameObject, v57);
  }
LABEL_123:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_559;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_559;
  if ( !v339 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v111 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
      goto LABEL_500;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    LOBYTE(v57) = 0;
    goto LABEL_499;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_559;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_559;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v100 = (UISprite_o *)this->fields.equipSprite;
  v102 = *(_QWORD *)&v339->fields.svtId.fields.currentCryptoKey;
  v101 = *(_QWORD *)&v339->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v371.fields.currentCryptoKey = v102;
  *(_QWORD *)&v371.fields.fakeValue = v101;
  v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v371, 0LL);
  ImagePartsGroupIdxs_k__BackingField = v339->fields._ImagePartsGroupIdxs_k__BackingField;
  v105 = v103;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v100, v105, ImagePartsGroupIdxs_k__BackingField, 0LL);
  v106 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_559;
    v107 = v339->fields.limitCount;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( v107 >= 4 )
    {
      if ( !v98 )
        goto LABEL_559;
      v57 = SLODWORD(v98[5].monitor) >= v107;
    }
    else
    {
      v57 = 0LL;
    }
    if ( !gameObject )
      goto LABEL_559;
    goto LABEL_499;
  }
LABEL_500:
  v301 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v301, 0LL, 0LL) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v79 & 1) == 0 )
      {
        v302 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v302 )
        {
          v304 = *(_QWORD *)&v302->fields.svtId.fields.currentCryptoKey;
          v303 = *(_QWORD *)&v302->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v376.fields.currentCryptoKey = v304;
          *(_QWORD *)&v376.fields.fakeValue = v303;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v376, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_559;
          v305 = gameObject;
          v306 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_521:
          v312 = v306;
          goto LABEL_523;
        }
      }
    }
    else if ( (v79 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v311 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v310 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v377.fields.currentCryptoKey = v311;
        *(_QWORD *)&v377.fields.fakeValue = v310;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47008572(v377, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_559;
        v305 = gameObject;
        v306 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_521;
      }
    }
    v312 = -1;
    v305 = -1;
LABEL_523:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_559;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v99,
      v305,
      v312,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_559;
      v308 = 0;
      goto LABEL_532;
    }
    goto LABEL_533;
  }
  v307 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v307, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_559;
    v308 = eventId;
LABEL_532:
    ShiningIconComponent__Set_38774460((ShiningIconComponent_o *)gameObject, v308, 0LL);
  }
LABEL_533:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_559;
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
    if ( !gameObject )
      goto LABEL_559;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_559;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    pushUserServantId = supportServantData->fields.pushUserServantId;
    if ( pushUserServantId )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_559;
      if ( pushUserServantId == UserServantLeaderEntity->fields.userSvtId )
      {
        gameObject = (__int64)this->fields.pushSprite;
        if ( !gameObject )
          goto LABEL_559;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_559;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      }
    }
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
  __int64 v15; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v17; // x22
  UIWidget_o *v18; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v23; // s0
  float v24; // s8
  UnityEngine_Transform_o *v25; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B76B3 & 1) == 0 )
  {
    sub_1B4CF90(&AtlasManager_TypeInfo, message);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v9);
    sub_1B4CF90(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1B4CF90(&StringLiteral_20015/*"img_frames_mask05"*/, v11);
    sub_1B4CF90(&StringLiteral_18167/*"datalost_party_edit"*/, v12);
    sub_1B4CF90(&StringLiteral_1/*""*/, v13);
    byte_49B76B3 = 1;
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
    v17 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18167/*"datalost_party_edit"*/, 0LL);
      v18 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v18 )
        goto LABEL_48;
      UIWidget__set_width(v18, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v17 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20015/*"img_frames_mask05"*/, 0LL);
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
    v33.fields.z = *p_z;
    v33.fields.y = *p_y;
    v33.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v33, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v23) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v24 = v23;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v25 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v24 <= restrictionMaskMessageWidth )
      {
        if ( !byte_49B5366 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v15);
          byte_49B5366 = 1;
        }
        v31 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v31->oneVector.fields.x;
        y = v31->oneVector.fields.y;
        z = v31->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v24;
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
      if ( !byte_49B5366 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v15);
        byte_49B5366 = 1;
      }
      if ( !v25 )
        goto LABEL_48;
      v30 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v30->oneVector.fields.y;
      z = v30->oneVector.fields.z;
      x = v30->oneVector.fields.x;
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
    sub_1B4D1EC(gameObject, v15);
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
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v13; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49B76B4 & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, message);
    sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49B76B4 = 1;
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
        if ( !byte_49B5366 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v9);
          byte_49B5366 = 1;
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
      if ( !byte_49B5366 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v9);
        byte_49B5366 = 1;
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
    sub_1B4D1EC(gameObject, v9);
  }
}


void __fastcall SupportSelectItemDraw___c__DisplayClass52_0___ctor(
        SupportSelectItemDraw___c__DisplayClass52_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectItemDraw___c__DisplayClass52_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass52_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  SupportSelectItemDraw___c__DisplayClass52_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_49B76B9 & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass52_0_o *)sub_1B4CF90(
                                                              &Method_System_Linq_Enumerable_Contains_int___,
                                                              *(_QWORD *)&individuality);
    byte_49B76B9 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1B4D1EC(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_2F1C00C *)Method_System_Linq_Enumerable_Contains_int___);
}