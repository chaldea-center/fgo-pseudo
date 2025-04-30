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

  if ( (byte_4A4AC26 & 1) == 0 )
  {
    sub_1B863B8(&string___TypeInfo, v1);
    sub_1B863B8(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_19885/*"icon_class1002"*/, v3);
    sub_1B863B8(&StringLiteral_19883/*"icon_class007"*/, v4);
    sub_1B863B8(&StringLiteral_19882/*"icon_class006"*/, v5);
    sub_1B863B8(&StringLiteral_19880/*"icon_class004"*/, v6);
    sub_1B863B8(&StringLiteral_19877/*"icon_class001"*/, v7);
    sub_1B863B8(&StringLiteral_19884/*"icon_class1001"*/, v8);
    sub_1B863B8(&StringLiteral_19878/*"icon_class002"*/, v9);
    sub_1B863B8(&StringLiteral_19881/*"icon_class005"*/, v10);
    sub_1B863B8(&StringLiteral_19879/*"icon_class003"*/, v11);
    byte_4A4AC26 = 1;
  }
  v12 = sub_1B86460(string___TypeInfo, 9LL);
  if ( !v12 )
    sub_1B86614(0LL, v13);
  v16 = v12;
  if ( !*(_DWORD *)(v12 + 24) )
    goto LABEL_14;
  v17 = StringLiteral_19884/*"icon_class1001"*/;
  *(_QWORD *)(v12 + 32) = StringLiteral_19884/*"icon_class1001"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 32), v17, v14, v15);
  if ( *(_DWORD *)(v16 + 24) <= 1u )
    goto LABEL_14;
  v20 = StringLiteral_19877/*"icon_class001"*/;
  *(_QWORD *)(v16 + 40) = StringLiteral_19877/*"icon_class001"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 40), v20, v18, v19);
  if ( *(_DWORD *)(v16 + 24) <= 2u )
    goto LABEL_14;
  v23 = StringLiteral_19878/*"icon_class002"*/;
  *(_QWORD *)(v16 + 48) = StringLiteral_19878/*"icon_class002"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 48), v23, v21, v22);
  if ( *(_DWORD *)(v16 + 24) <= 3u )
    goto LABEL_14;
  v26 = StringLiteral_19879/*"icon_class003"*/;
  *(_QWORD *)(v16 + 56) = StringLiteral_19879/*"icon_class003"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 56), v26, v24, v25);
  if ( *(_DWORD *)(v16 + 24) <= 4u )
    goto LABEL_14;
  v29 = StringLiteral_19880/*"icon_class004"*/;
  *(_QWORD *)(v16 + 64) = StringLiteral_19880/*"icon_class004"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 64), v29, v27, v28);
  if ( *(_DWORD *)(v16 + 24) <= 5u )
    goto LABEL_14;
  v32 = StringLiteral_19881/*"icon_class005"*/;
  *(_QWORD *)(v16 + 72) = StringLiteral_19881/*"icon_class005"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 72), v32, v30, v31);
  if ( *(_DWORD *)(v16 + 24) <= 6u
    || (v35 = StringLiteral_19882/*"icon_class006"*/,
        *(_QWORD *)(v16 + 80) = StringLiteral_19882/*"icon_class006"*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v16 + 80), v35, v33, v34),
        *(_DWORD *)(v16 + 24) <= 7u)
    || (v38 = StringLiteral_19883/*"icon_class007"*/,
        *(_QWORD *)(v16 + 88) = StringLiteral_19883/*"icon_class007"*/,
        sub_1B8635C((CGThumbnailListItem_o *)(v16 + 88), v38, v36, v37),
        *(_DWORD *)(v16 + 24) <= 8u) )
  {
LABEL_14:
    sub_1B8661C(v12, v13);
  }
  v41 = StringLiteral_19885/*"icon_class1002"*/;
  *(_QWORD *)(v16 + 96) = StringLiteral_19885/*"icon_class1002"*/;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 96), v41, v39, v40);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)SupportSelectItemDraw_TypeInfo->static_fields, v16, v42, v43);
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

  if ( (byte_4A4AC25 & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    sub_1B863B8(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&UnityEngine_Transform_TypeInfo, v5);
    byte_4A4AC25 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B86614(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B86614(0LL, v8);
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
      p_method = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_1BD6B4C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1B868D4(v18);
LABEL_37:
      sub_1B86614(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1B86614(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1B86614(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1B864F4(Enumerator, System_IDisposable_TypeInfo);
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
      v33 = sub_1BD6B4C(v28, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4A4AC1D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A4AC1D = 1;
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v10, v11);
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
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v18, v15, v16);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v23, (int32_t)v20, v21);
      goto LABEL_36;
    }
LABEL_37:
    sub_1B86614(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v24, v25, v26);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4A4AC1E & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4AC1E = 1;
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
    sub_1B86614(gameObject, v4);
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

  if ( (byte_4A4AC20 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&StringLiteral_1/*""*/, v3);
    byte_4A4AC20 = 1;
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
    sub_1B86614(gameObject, v5);
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

  if ( (byte_4A4AC23 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, flag);
    byte_4A4AC23 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1B86614(0LL, v6);
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
  if ( (byte_4A4AC24 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A4AC24 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1B86614(0LL, v6);
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
  SupportServantData_o *v7; // x21
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
  __int64 v56; // x1
  __int64 gameObject; // x0
  unsigned __int64 v58; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v61; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x24
  UserServantLeaderEntity_o *v65; // x28
  struct EquipTargetInfo_o *equipTarget1; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v67; // x19
  __int64 v68; // x20
  __int64 v69; // x21
  Il2CppObject *v70; // x29
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v72; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v75; // w19
  ServantLeaderInfo_o *servantLeaderInfo; // x22
  int32_t v77; // w8
  int v78; // w8
  char v79; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v81; // x8
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v83; // x19
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v86; // x19
  UIAtlas_o *base2DefaultUIAtlas; // x20
  UnityEngine_Object_o *servantClassIcon; // x19
  UnityEngine_Object_o *levelLabel; // x19
  UnityEngine_Object_o *raritySprite; // x19
  UnityEngine_Object_o *attackLabel; // x19
  UnityEngine_Object_o *hpLabel; // x19
  UnityEngine_Object_o *sortieMaskSprite; // x19
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  UnityEngine_Object_o *appendSkillList; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  System_Object_array *v98; // x28
  bool v99; // w22
  UISprite_o *v100; // x19
  __int64 v101; // x20
  __int64 v102; // x21
  int32_t v103; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v105; // w21
  UnityEngine_Object_o *v106; // x19
  int v107; // w19
  UserServantEntity_o *v108; // x22
  int32_t v109; // w8
  int v110; // w8
  UnityEngine_Object_o *v111; // x19
  int adjustAtk; // w9
  int32_t FrameType; // w28
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_41547196; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v118; // x23
  Il2CppObject *v119; // x26
  System_Collections_Generic_List_object__o *v120; // x28
  struct EventUpValSetupInfo_o *v121; // x8
  struct System_Int32_array *v122; // x9
  __int64 v123; // x8
  unsigned __int64 v124; // x27
  int32_t eventSvtPoint; // w19
  __int64 v126; // x20
  __int64 v127; // x24
  int32_t v128; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v131; // x20
  EventPersonalMargeUpValInfo_o *v132; // x19
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  __int64 v135; // x8
  __int64 v136; // x24
  unsigned __int64 v137; // x22
  Il2CppObject *v138; // x25
  __int64 v139; // x20
  _DWORD *v140; // x8
  int v141; // w8
  __int64 v142; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v144; // x8
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v147; // x19
  System_Func_int__bool__o *v148; // x21
  System_Func_TSource__bool__o *v149; // x1
  struct System_Object_array *items; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  struct QuestRestrictionInfo_o *v154; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v156; // x1
  EventMargeItemUpValInfo_array *AddUpValInfos; // x23
  int v158; // w23
  int v159; // w20
  int32_t v160; // w27
  Il2CppObject v161; // q1
  int64_t v162; // x19
  int v163; // w23
  _BOOL4 QuestRestriction; // w24
  _BOOL4 IsUniqueIndividualityRestriction; // w0
  ServantLeaderInfo_o *v166; // x8
  _BOOL4 v167; // w22
  int v168; // w27
  int v169; // w20
  int32_t v170; // w20
  QuestRestrictionInfo_o *v171; // x19
  __int64 v172; // x21
  __int64 v173; // x23
  int32_t v174; // w0
  int32_t v175; // w21
  int32_t v176; // w23
  _BOOL4 IsRestrictionServantIndividuality; // w0
  bool EventUpVal_41244764; // w19
  Il2CppObject *v179; // x23
  Il2CppObject *v180; // x27
  System_Collections_Generic_List_object__o *v181; // x26
  struct EventUpValSetupInfo_o *v182; // x8
  struct System_Int32_array *v183; // x29
  __int64 v184; // x8
  const MethodInfo_3214280 **v185; // x25
  unsigned __int64 v186; // x21
  int32_t v187; // w24
  __int128 v188; // q0
  int64_t v189; // x19
  int32_t v190; // w4
  int32_t BuddyPoint; // w19
  const MethodInfo_3214280 **v192; // x22
  int32_t v193; // w0
  EventServantPointRankEntity_o *v194; // x0
  int32_t v195; // w25
  EventMargeItemUpValInfo_o *v196; // x20
  EventPersonalMargeUpValInfo_o *v197; // x19
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  __int64 v200; // x8
  __int64 v201; // x20
  unsigned __int64 v202; // x19
  struct System_Object_array *v203; // x8
  _QWORD *v204; // x9
  __int64 v205; // x10
  Il2CppClass **v206; // x0
  UnityEngine_Object_o *v207; // x19
  UnityEngine_Object_o *v208; // x19
  UILabel_o *v209; // x19
  UnityEngine_Object_o *v210; // x19
  int32_t v211; // w19
  int32_t v212; // w20
  System_String_o *Icon_38655684; // x21
  int32_t RarityIcon; // w19
  int32_t v215; // w19
  UISprite_o *v216; // x20
  float v217; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v220; // x19
  SkillListTreasureDeviceComponent_o *v221; // x19
  SkillInfo_array *v222; // x20
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  __int64 v225; // x8
  _QWORD *v226; // x9
  __int64 v227; // x10
  __int64 v228; // x8
  UnityEngine_Object_o *v229; // x19
  AppendSkillListComponent_o *v230; // x19
  SkillInfo_array *v231; // x20
  int32_t v232; // w2
  const MethodInfo *v233; // x3
  __int64 v234; // x8
  _QWORD *v235; // x9
  __int64 v236; // x10
  __int64 v237; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v239; // x0
  SwitchUIWidgetComponent_o *v240; // x19
  UnityEngine_Object_o *v241; // x19
  UnityEngine_Object_o *v242; // x19
  float v243; // s1
  float v244; // s2
  float v245; // s0
  float v246; // s3
  UILabel_o *v247; // x19
  UnityEngine_Object_o *v248; // x19
  float v249; // s1
  float v250; // s2
  float v251; // s0
  float v252; // s3
  UILabel_o *v253; // x19
  UnityEngine_Object_o *v254; // x19
  UISprite_o *v255; // x20
  UIAtlas_o *v256; // x19
  UnityEngine_Object_o *v257; // x19
  UISprite_o *v258; // x20
  UIAtlas_o *v259; // x19
  const MethodInfo *v260; // x4
  UnityEngine_Object_o *v261; // x19
  System_String_o *v262; // x0
  System_String_o *v263; // x1
  bool v264; // w2
  SupportSelectItemDraw_o *v265; // x0
  bool v266; // w3
  UnityEngine_Object_o *v267; // x19
  bool v268; // w1
  System_String_o *v269; // x0
  const MethodInfo *v270; // x3
  System_String_o *v271; // x19
  __int64 v272; // x2
  __int64 v273; // x3
  __int64 v274; // x4
  Il2CppObject *v275; // x0
  UnityEngine_Object_o *v276; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *v278; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  signed int max_length; // w8
  __int64 v281; // x19
  int32_t v282; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v285; // x8
  EventCampaignEntity_o *v286; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v288; // w10
  System_Collections_Generic_List_object__o *v289; // x0
  System_Collections_Generic_List_object__o *v290; // x20
  UISprite_o *equipSprite; // x19
  void *v292; // x20
  Il2CppClass *v293; // x21
  int32_t v294; // w20
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  void *v296; // x19
  Il2CppClass *v297; // x20
  int v298; // w19
  UnityEngine_Object_o *v299; // x19
  UserServantLeaderEntity_o *v300; // x23
  struct ServantLeaderInfo_o *v301; // x8
  __int64 v302; // x19
  __int64 v303; // x20
  int32_t v304; // w20
  int32_t v305; // w0
  UnityEngine_Object_o *v306; // x19
  bool v307; // w1
  int32_t v308; // w3
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v310; // x19
  __int64 v311; // x20
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v317; // x19
  int32_t v318; // w2
  const MethodInfo *v319; // x3
  struct System_Object_array *v320; // x8
  _QWORD *v321; // x9
  __int64 v322; // x10
  Il2CppClass **v323; // x0
  int32_t v324; // [xsp+14h] [xbp-1CCh]
  SupportSelectItemDraw_o *v325; // [xsp+18h] [xbp-1C8h]
  SupportSelectItemDraw_o *v326; // [xsp+18h] [xbp-1C8h]
  bool v327; // [xsp+24h] [xbp-1BCh]
  int32_t classId; // [xsp+28h] [xbp-1B8h]
  int adjustHp; // [xsp+2Ch] [xbp-1B4h]
  int32_t treasureDeviceNum; // [xsp+30h] [xbp-1B0h]
  int32_t strengthStatus; // [xsp+34h] [xbp-1ACh]
  int32_t v332; // [xsp+38h] [xbp-1A8h]
  int v333; // [xsp+3Ch] [xbp-1A4h]
  __int64 v334; // [xsp+40h] [xbp-1A0h]
  int32_t rarity; // [xsp+4Ch] [xbp-194h]
  int32_t limitCount; // [xsp+50h] [xbp-190h]
  int exceedCount; // [xsp+54h] [xbp-18Ch]
  Il2CppObject *v338; // [xsp+58h] [xbp-188h]
  struct EquipTargetInfo_o *v339; // [xsp+60h] [xbp-180h]
  EventServantPointRankMaster_o *v340; // [xsp+68h] [xbp-178h]
  EventServantPointRankMaster_o *commandCardParam; // [xsp+68h] [xbp-178h]
  UserServantLeaderEntity_o *v342; // [xsp+70h] [xbp-170h]
  ServantLeaderInfo_o *v343; // [xsp+78h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+78h] [xbp-168h]
  bool v345; // [xsp+78h] [xbp-168h]
  struct System_Int32_array *v346; // [xsp+80h] [xbp-160h]
  _BOOL4 UniqueSvtRestriction; // [xsp+80h] [xbp-160h]
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // [xsp+80h] [xbp-160h]
  UserEventServantPointMaster_o *v349; // [xsp+88h] [xbp-158h]
  System_Int32_array *CommandCodeIdList; // [xsp+88h] [xbp-158h]
  UserEventServantPointMaster_o *v351; // [xsp+88h] [xbp-158h]
  Il2CppObject *v352; // [xsp+90h] [xbp-150h]
  bool IsDataLost; // [xsp+90h] [xbp-150h]
  ServantEntity_o *servantEntity; // [xsp+98h] [xbp-148h]
  int32_t svtId; // [xsp+A4h] [xbp-13Ch]
  SupportServantData_o *v357; // [xsp+B0h] [xbp-130h]
  int32_t eventId; // [xsp+B8h] [xbp-128h]
  System_Collections_Generic_IEnumerable_T__o *eventIda; // [xsp+B8h] [xbp-128h]
  UserServantEntity_o *eventIdb; // [xsp+B8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+C0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+E0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+100h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+128h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+134h] [xbp-ACh] BYREF
  SkillInfo_array *v366; // [xsp+138h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+140h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+148h] [xbp-98h] BYREF
  int v369; // [xsp+154h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+158h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+168h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v372; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v373; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v374; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  UnityEngine_Vector3_o v381; // 0:s0.4,4:s1.4,8:s2.4

  v7 = supportServantData;
  if ( (byte_4A4AC1F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1B863B8(&AtlasManager_TypeInfo, v9);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_EventDetailMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1B863B8(&Method_DataManager_GetMaster_QuestPhaseMaster___, v17);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v20);
    sub_1B863B8(&DataManager_TypeInfo, v21);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23);
    sub_1B863B8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24);
    sub_1B863B8(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v25);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int____76124056, v26);
    sub_1B863B8(&EventMargeItemUpValInfo_TypeInfo, v27);
    sub_1B863B8(&EventPersonalMargeUpValInfo_TypeInfo, v28);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v29);
    sub_1B863B8(&int_TypeInfo, v30);
    sub_1B863B8(&long___TypeInfo, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Add__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__Clear__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v36);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v37);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v38);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432, v39);
    sub_1B863B8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v40);
    sub_1B863B8(&LocalizationManager_TypeInfo, v41);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v42);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    sub_1B863B8(&Rarity_TypeInfo, v45);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1B863B8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v47);
    sub_1B863B8(&SupportSelectItemDraw_TypeInfo, v48);
    sub_1B863B8(&TutorialFlag_TypeInfo, v49);
    sub_1B863B8(&Method_SupportSelectItemDraw___c__DisplayClass52_0__SetItem_b__0__, v50);
    sub_1B863B8(&SupportSelectItemDraw___c__DisplayClass52_0_TypeInfo, v51);
    sub_1B863B8(&StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v52);
    sub_1B863B8(&StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v53);
    sub_1B863B8(&StringLiteral_6390/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v54);
    sub_1B863B8(&StringLiteral_397/*"#,0"*/, v55);
    sub_1B863B8(&StringLiteral_1/*""*/, v56);
    byte_4A4AC1F = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v369 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  v366 = 0LL;
  isDuplicate = 0;
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_560;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_560;
  size = switchSkillUIList->fields._size;
  v61 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v61;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_560;
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
      goto LABEL_560;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v7 )
    goto LABEL_560;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v7, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
  v357 = v7;
  v342 = UserServantLeaderEntity;
  if ( gameObject )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_560;
      v65 = UserServantLeaderEntity;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_560;
      v67 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v69 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v372.fields.currentCryptoKey = v69;
      *(_QWORD *)&v372.fields.fakeValue = v68;
      v339 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v372, 0LL);
      if ( !v67 )
        goto LABEL_560;
      v7 = v357;
      v70 = 0LL;
      UserServantLeaderEntity = v65;
      v338 = DataMasterBase_object__object__int___GetEntity(
               v67,
               gameObject,
               (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_560;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_560;
    v70 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v70 )
      goto LABEL_560;
    v72 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v70[5].klass;
    monitor = v70[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v373.fields.currentCryptoKey = klass;
    *(_QWORD *)&v373.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v373, 0LL);
    if ( !v72 )
      goto LABEL_560;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v72,
                            gameObject,
                            (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v7 = v357;
  }
  else
  {
    v70 = 0LL;
  }
  v338 = (Il2CppObject *)gameObject;
  v339 = 0LL;
  if ( !UserServantLeaderEntity )
  {
    v79 = 1;
    goto LABEL_48;
  }
LABEL_37:
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v79 = 0;
LABEL_48:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
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
      goto LABEL_560;
    if ( *(_DWORD *)(v81 + 24) <= (unsigned int)classPos )
      goto LABEL_561;
    if ( !backClassIcon )
      goto LABEL_560;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v81 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v83 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v83, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v86 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v86, 9, base2DefaultUIAtlas, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_560;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_560;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_560;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v58);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_560;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v98 = 0LL;
    v99 = 0;
    if ( v70 )
      goto LABEL_480;
    goto LABEL_123;
  }
  v75 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v75,
                          (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_560;
  v352 = v70;
  servantEntity = (ServantEntity_o *)gameObject;
  svtId = v75;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v7->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_560;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
    gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0LL);
    lv[1] = servantLeaderInfo->fields.lv;
    if ( !gameObject )
      goto LABEL_560;
    v77 = *(_DWORD *)(gameObject + 20);
    lv[0] = v77;
    if ( v339 )
    {
      lv[0] = v339->fields.atk + v77;
      v78 = v339->fields.hp + *(_DWORD *)(gameObject + 16);
    }
    else
    {
      v78 = *(_DWORD *)(gameObject + 16);
    }
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    v369 = v78;
    v334 = gameObject;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v333 = adjustAtk;
    rarity = *(_DWORD *)(gameObject + 24);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    FrameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, *(_DWORD *)(gameObject + 40), 0LL);
    limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_560;
    strengthStatus = tdInfo->fields.strengthStatus;
    v332 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_41559756(servantLeaderInfo, &v366, 0, 0LL);
    eventSetupInfo = v7->fields.eventSetupInfo;
    v343 = servantLeaderInfo;
    if ( !eventSetupInfo )
      goto LABEL_211;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_560;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      v324 = FrameType;
      v325 = this;
      EventUpVal_41547196 = ServantLeaderInfo__getEventUpVal_41547196(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v340 = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v118 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_FunctionMaster___);
      v119 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v120 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v120,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v121 = v7->fields.eventSetupInfo;
      if ( !v121 )
        goto LABEL_560;
      v122 = v121->fields.eventIdList;
      v327 = EventUpVal_41547196;
      if ( !v122 )
        goto LABEL_560;
      v123 = *(_QWORD *)&v122->max_length;
      if ( (int)v123 >= 1 )
      {
        v124 = 0LL;
        v346 = v122;
        v349 = (UserEventServantPointMaster_o *)Master_object;
        while ( 1 )
        {
          if ( v124 >= (unsigned int)v123 )
            goto LABEL_561;
          if ( !Master_object )
            goto LABEL_560;
          eventId = v122->m_Items[v124 + 1];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  eventId,
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                (gameObject & 1) == 0) )
          {
            if ( !v340 )
              goto LABEL_560;
            if ( EventServantPointRankMaster__IsEnableEvent(v340, eventId, 0LL) )
            {
              eventSvtPoint = v343->fields.eventSvtPoint;
              v127 = *(_QWORD *)&v343->fields.svtId.fields.currentCryptoKey;
              v126 = *(_QWORD *)&v343->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v375.fields.currentCryptoKey = v127;
              *(_QWORD *)&v375.fields.fakeValue = v126;
              v128 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v375, 0LL);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v340, eventId, eventSvtPoint, v128, 0LL);
              if ( EnableEntity )
                svtPointRank = EnableEntity->fields.svtPointRank;
              else
                svtPointRank = 0;
              v131 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_39869604(v131, eventId, 0LL);
              if ( !v131 )
                goto LABEL_560;
              EventMargeItemUpValInfo__SetServantPointInfo(v131, v343->fields.eventSvtPoint, svtPointRank, 1, 0LL);
              if ( !v120 )
                goto LABEL_560;
              System_Collections_Generic_List_object___Insert(
                v120,
                0,
                (Il2CppObject *)v131,
                (const MethodInfo_35FD708 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            v132 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v132, eventId, servantEntity, 0LL);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_560;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
            if ( !v132 )
              goto LABEL_560;
            EventPersonalMargeUpValInfo__Add(v132, (EventDropItemUpValInfo_array *)gameObject, 0LL);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v132, 0LL);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v132, 0LL);
              if ( !gameObject )
                goto LABEL_560;
              v135 = *(_QWORD *)(gameObject + 24);
              v136 = gameObject;
              if ( (int)v135 >= 1 )
                break;
            }
          }
LABEL_206:
          v122 = v346;
          Master_object = (Il2CppObject *)v349;
          v70 = v352;
          ++v124;
          LODWORD(v123) = v346->max_length;
          if ( (__int64)v124 >= (int)v123 )
            goto LABEL_207;
        }
        v137 = 0LL;
        while ( v137 < (unsigned int)v135 )
        {
          v138 = *(Il2CppObject **)(v136 + 32 + 8 * v137);
          if ( !v7->fields.questRestrictionInfo )
            goto LABEL_564;
          v139 = sub_1B86604(SupportSelectItemDraw___c__DisplayClass52_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v139, 0LL);
          if ( !v138 )
            goto LABEL_560;
          v140 = v138[2].monitor;
          if ( !v140 )
            goto LABEL_560;
          if ( !v118 )
            goto LABEL_560;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v118,
                                  v140[4],
                                  (const MethodInfo_3214280 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( !gameObject )
            goto LABEL_560;
          v141 = *(_DWORD *)(gameObject + 24);
          v142 = gameObject;
          if ( v141 == 1 || v141 == 16 || v141 == 111 )
            goto LABEL_565;
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_560;
          if ( eventId == questRestrictionInfo->fields.eventId )
          {
LABEL_565:
            v144 = v7->fields.questRestrictionInfo;
            if ( !v144 )
              goto LABEL_560;
            if ( !v119 )
              goto LABEL_560;
            gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                    (QuestPhaseMaster_o *)v119,
                                    v144->fields.questId,
                                    v144->fields.questPhase,
                                    0LL);
            if ( !v139 )
              goto LABEL_560;
            *(_QWORD *)(v139 + 16) = gameObject;
            sub_1B8635C((CGThumbnailListItem_o *)(v139 + 16), gameObject, v145, v146);
            v147 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v142 + 80);
            if ( !v147 )
              goto LABEL_560;
            if ( !v147[1].monitor
              || (v148 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo),
                  System_Func_int__bool____ctor(
                    v148,
                    (Il2CppObject *)v139,
                    Method_SupportSelectItemDraw___c__DisplayClass52_0__SetItem_b__0__,
                    0LL),
                  v149 = (System_Func_TSource__bool__o *)v148,
                  v7 = v357,
                  gameObject = System_Linq_Enumerable__Any_int__49796224(
                                 v147,
                                 v149,
                                 (const MethodInfo_2F7D480 *)Method_System_Linq_Enumerable_Any_int____76124056),
                  (gameObject & 1) != 0) )
            {
LABEL_564:
              if ( !v120 )
                goto LABEL_560;
              items = v120->fields._items;
              v151 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v120->fields._version;
              if ( !items )
                goto LABEL_560;
              v152 = v120->fields._size;
              if ( (unsigned int)v152 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v120,
                  v138,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
              }
              else
              {
                v153 = &items->obj.klass + v152;
                v120->fields._size = v152 + 1;
                v153[4] = (Il2CppClass *)v138;
                sub_1B8635C((CGThumbnailListItem_o *)(v153 + 4), (int32_t)v138, v133, v134);
              }
            }
          }
          LODWORD(v135) = *(_DWORD *)(v136 + 24);
          if ( (__int64)++v137 >= (int)v135 )
            goto LABEL_206;
        }
        goto LABEL_561;
      }
LABEL_207:
      v154 = v7->fields.questRestrictionInfo;
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      servantLeaderInfo = v343;
      if ( !gameObject )
        goto LABEL_560;
      if ( v154 )
      {
        AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                 (PartyOrganizationUtility_o *)gameObject,
                                 &isDuplicate,
                                 (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v120,
                                 0LL);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_560;
        v156 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
      }
      else
      {
        v156 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v120;
      }
      this = v325;
      FrameType = v324;
      AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos((PartyOrganizationUtility_o *)gameObject, v156, 0LL);
    }
    else
    {
LABEL_211:
      AddUpValInfos = 0LL;
      v327 = 0;
    }
    CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    commandCardParam = (EventServantPointRankMaster_o *)servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             v7->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         v7->fields.questRestrictionInfo,
                                         0LL,
                                         0LL);
    v166 = servantLeaderInfo;
    v167 = IsUniqueIndividualityRestriction;
    eventIda = (System_Collections_Generic_IEnumerable_T__o *)AddUpValInfos;
    if ( ServantLeaderInfo__IsSlotRestriction(v166, v7->fields.questRestrictionInfo, 0LL) )
    {
      v168 = 1;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_560;
      v169 = *(_DWORD *)(gameObject + 48);
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_560;
      if ( v169 < 1 )
        goto LABEL_237;
      if ( !v7->fields.questRestrictionInfo )
        goto LABEL_560;
      v170 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_41505772(v7->fields.questRestrictionInfo, v170, 0LL) )
      {
        v171 = v7->fields.questRestrictionInfo;
        v173 = *(_QWORD *)&v343->fields.svtId.fields.currentCryptoKey;
        v172 = *(_QWORD *)&v343->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v376.fields.currentCryptoKey = v173;
        *(_QWORD *)&v376.fields.fakeValue = v172;
        v174 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v376, 0LL);
        v175 = v343->fields.limitCount;
        v176 = v174;
        gameObject = ServantLeaderInfo__getDispLimitCount(v343, 0LL);
        if ( !v171 )
          goto LABEL_560;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v171,
                                              v176,
                                              v175,
                                              gameObject,
                                              v170,
                                              1,
                                              0LL);
        v7 = v357;
        v168 = IsRestrictionServantIndividuality;
      }
      else
      {
LABEL_237:
        v168 = 0;
      }
    }
    v163 = v327;
    IsDataLost = ServantLeaderInfo__IsDataLost(v343, v7->fields.questRestrictionInfo, 0LL);
    TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v343, v7->fields.questRestrictionInfo, 0LL);
  }
  else
  {
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            UserServantLeaderEntity->fields.userSvtId,
                            (const MethodInfo_32167DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !gameObject )
      goto LABEL_560;
    v108 = (UserServantEntity_o *)gameObject;
    gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0LL, 0LL);
    lv[1] = v108->fields.lv;
    if ( !gameObject )
      goto LABEL_560;
    v109 = *(_DWORD *)(gameObject + 20);
    lv[0] = v109;
    if ( v70 )
    {
      lv[0] = LODWORD(v70[16].monitor) + v109;
      v110 = HIDWORD(v70[16].monitor) + *(_DWORD *)(gameObject + 16);
    }
    else
    {
      v110 = *(_DWORD *)(gameObject + 16);
    }
    v158 = v108->fields.adjustAtk;
    v369 = v110;
    v159 = v108->fields.adjustHp;
    v334 = gameObject;
    rarity = *(_DWORD *)(gameObject + 24);
    exceedCount = v108->fields.exceedCount;
    FrameType = UserServantEntity__GetFrameType(v108, *(_DWORD *)(gameObject + 40), 0LL);
    limitCount = UserServantEntity__getCardImageLimitCount(v108, 0, 0LL);
    UserServantEntity__getSkillInfo(v108, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
    gameObject = UserServantEntity__getTreasureDeviceInfo(v108, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_560;
    v160 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    strengthStatus = tdInfo->fields.strengthStatus;
    UserServantEntity__GetAppendPassiveSkillInfo_41271132(v108, &v366, 0LL);
    adjustHp = v159;
    v332 = v160;
    v333 = v158;
    if ( v7->fields.eventSetupInfo )
    {
      if ( v70 )
      {
        v161 = v70[2];
        *(Il2CppObject *)&v363.fields.currentCryptoKey = v70[1];
        *(Il2CppObject *)&v363.fields.fakeValue = v161;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v362 = v363;
        v162 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v362, 0LL);
      }
      else
      {
        v162 = -1LL;
      }
      gameObject = sub_1B86460(long___TypeInfo, 1LL);
      if ( !gameObject )
        goto LABEL_560;
      if ( !*(_DWORD *)(gameObject + 24) )
        goto LABEL_561;
      *(_QWORD *)(gameObject + 32) = v162;
      EventUpVal_41244764 = UserServantEntity__getEventUpVal_41244764(
                              v108,
                              &eventUpVallInfo,
                              v7->fields.eventSetupInfo,
                              (System_Int64_array *)gameObject,
                              0LL,
                              0LL);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_560;
      v345 = EventUpVal_41244764;
      v179 = DataManager__GetMasterData_object_(
               (DataManager_o *)gameObject,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v180 = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v351 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v181 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v181,
        (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v182 = v7->fields.eventSetupInfo;
      if ( !v182 )
        goto LABEL_560;
      v183 = v182->fields.eventIdList;
      v326 = this;
      if ( !v183 )
        goto LABEL_560;
      v184 = *(_QWORD *)&v183->max_length;
      if ( (int)v184 >= 1 )
      {
        p_userId = &v108->fields.userId;
        v185 = (const MethodInfo_3214280 **)&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__;
        v186 = 0LL;
        eventIdb = v108;
        while ( 1 )
        {
          if ( v186 >= (unsigned int)v184 )
            goto LABEL_561;
          if ( !v179 )
            goto LABEL_560;
          v187 = v183->m_Items[v186 + 1];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v179,
                                  v187,
                                  *v185);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                (gameObject & 1) == 0) )
          {
            if ( !v180 )
              goto LABEL_560;
            if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v180, v187, 0LL) )
            {
              v188 = *(_OWORD *)&p_userId->fields.fakeValue;
              *(_OWORD *)&v363.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
              *(_OWORD *)&v363.fields.fakeValue = v188;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v361 = v363;
              v189 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v361, 0LL);
              v190 = UserServantEntity__getSvtId(v108, 0LL);
              gameObject = (__int64)v351;
              if ( !v351 )
                goto LABEL_560;
              if ( UserEventServantPointMaster__TryGetEntity(v351, &entity, v189, v187, v190, 0LL) )
              {
                gameObject = (__int64)entity;
                if ( !entity )
                  goto LABEL_560;
                BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
              }
              else
              {
                BuddyPoint = 0;
              }
              v192 = v185;
              v193 = UserServantEntity__getSvtId(eventIdb, 0LL);
              v194 = EventServantPointRankMaster__GetEnableEntity(
                       (EventServantPointRankMaster_o *)v180,
                       v187,
                       BuddyPoint,
                       v193,
                       0LL);
              v195 = v194 ? v194->fields.svtPointRank : 0;
              v196 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_39869604(v196, v187, 0LL);
              if ( !v196 )
                goto LABEL_560;
              EventMargeItemUpValInfo__SetServantPointInfo(v196, BuddyPoint, v195, 0, 0LL);
              if ( !v181 )
                goto LABEL_560;
              System_Collections_Generic_List_object___Insert(
                v181,
                0,
                (Il2CppObject *)v196,
                (const MethodInfo_35FD708 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              v185 = v192;
              v108 = eventIdb;
            }
            v197 = (EventPersonalMargeUpValInfo_o *)sub_1B86604(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v197, v187, servantEntity, 0LL);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_560;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
            if ( !v197 )
              goto LABEL_560;
            EventPersonalMargeUpValInfo__Add(v197, (EventDropItemUpValInfo_array *)gameObject, 0LL);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v197, 0LL);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v197, 0LL);
              if ( !gameObject )
                goto LABEL_560;
              v200 = *(_QWORD *)(gameObject + 24);
              v201 = gameObject;
              if ( (int)v200 >= 1 )
                break;
            }
          }
LABEL_281:
          LODWORD(v184) = v183->max_length;
          if ( (__int64)++v186 >= (int)v184 )
            goto LABEL_282;
        }
        v202 = 0LL;
        while ( v202 < (unsigned int)v200 )
        {
          if ( !v181 )
            goto LABEL_560;
          v58 = *(_QWORD *)(v201 + 32 + 8 * v202);
          v203 = v181->fields._items;
          v204 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v181->fields._version;
          if ( !v203 )
            goto LABEL_560;
          v205 = v181->fields._size;
          if ( (unsigned int)v205 >= v203->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v181,
              (Il2CppObject *)v58,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
          }
          else
          {
            v206 = &v203->obj.klass + v205;
            v181->fields._size = v205 + 1;
            v206[4] = (Il2CppClass *)v58;
            sub_1B8635C((CGThumbnailListItem_o *)(v206 + 4), v58, v198, v199);
          }
          LODWORD(v200) = *(_DWORD *)(v201 + 24);
          if ( (__int64)++v202 >= (int)v200 )
            goto LABEL_281;
        }
LABEL_561:
        sub_1B8661C(gameObject, v58);
      }
LABEL_282:
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_560;
      v163 = v345;
      eventIda = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                  (PartyOrganizationUtility_o *)gameObject,
                                                                  (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v181,
                                                                  0LL);
      this = v326;
      v7 = v357;
      v70 = v352;
    }
    else
    {
      eventIda = 0LL;
      v163 = 0;
    }
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList(v108, 0LL);
    QuestRestriction = UserServantEntity__getQuestRestriction(v108, v7->fields.questRestrictionInfo, rarity, 2, 0LL);
    UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(v108, v7->fields.questRestrictionInfo, 0LL);
    v167 = UserServantEntity__IsUniqueIndividualityRestriction(v108, v7->fields.questRestrictionInfo, 0LL);
    v168 = 0;
    TimesToRestart = 0;
    IsDataLost = 0;
    commandCardParam = 0LL;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_560;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 svtId,
                 limitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_560;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0LL, 0LL);
  v207 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v207, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_560;
      ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)gameObject, classId, FrameType, 0, 0LL);
    }
  }
  v208 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v208, 0LL, 0LL) )
  {
    v209 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v209 )
      goto LABEL_560;
    UILabel__set_text(v209, (System_String_o *)gameObject, 0LL);
  }
  v210 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v210, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v211 = lv[1];
    v212 = *(_DWORD *)(v334 + 40);
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_38655684 = Rarity__getIcon_38655684(rarity, exceedCount, v211, v212, 0LL);
    if ( exceedCount < 1 )
    {
      v215 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_560;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v212, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_560;
      v215 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, v212, lv[1], RarityIcon, 0LL);
    }
    v216 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v215 >= 3 )
    {
      AtlasManager__SetEventSprite(v216, Icon_38655684, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v216, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_560;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_38655684, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    v7 = v357;
    if ( !gameObject )
      goto LABEL_560;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v217 = exceedCount >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_560;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    v381.fields.x = v217;
    v381.fields.y = y;
    v381.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v381, 0LL);
  }
  v220 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v220, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v221 = this->fields.skillListTreasureDevice;
    v222 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_39437440(v222, 0LL);
    if ( !v221 )
      goto LABEL_560;
    SkillListTreasureDeviceComponent__Set(
      v221,
      (System_String_o *)gameObject,
      v332,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v58 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v225 = *(_QWORD *)(gameObject + 16);
      v226 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v225 )
        goto LABEL_560;
      v227 = *(int *)(gameObject + 24);
      if ( (unsigned int)v227 >= *(_DWORD *)(v225 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v58,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
      }
      else
      {
        v228 = v225 + 8 * v227;
        *(_DWORD *)(gameObject + 24) = v227 + 1;
        *(_QWORD *)(v228 + 32) = v58;
        sub_1B8635C((CGThumbnailListItem_o *)(v228 + 32), v58, v223, v224);
      }
    }
  }
  v229 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v229, 0LL, 0LL) )
  {
    if ( v366 && *(_QWORD *)&v366->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v230 = this->fields.appendSkillList;
      v231 = v366;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_39437440(v231, 0LL);
      if ( !v230 )
        goto LABEL_560;
      AppendSkillListComponent__Set(v230, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v58 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v234 = *(_QWORD *)(gameObject + 16);
        v235 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v234 )
          goto LABEL_560;
        v236 = *(int *)(gameObject + 24);
        if ( (unsigned int)v236 >= *(_DWORD *)(v234 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v58,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v235[4] + 192LL) + 112LL));
        }
        else
        {
          v237 = v234 + 8 * v236;
          *(_DWORD *)(gameObject + 24) = v236 + 1;
          *(_QWORD *)(v237 + 32) = v58;
          sub_1B8635C((CGThumbnailListItem_o *)(v237 + 32), v58, v232, v233);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v239 = this->fields.switchSkillUIList;
    if ( v239 )
    {
      v240 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v239,
                              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v240 )
        goto LABEL_560;
      SwitchUIWidgetComponent__Set(v240, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v241 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v241, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_560;
    if ( v7->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_39170332(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        (System_Int32_array *)commandCardParam,
        CommandCodeIdList,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_39170576(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        CommandCodeIdList,
        2,
        0,
        0LL);
  }
  v242 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v242, 0LL, 0LL) )
  {
    v243 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v333 <= 0 )
      v244 = 1.0;
    else
      v244 = 0.015686;
    if ( v333 <= 0 )
      v243 = 1.0;
    if ( !gameObject )
      goto LABEL_560;
    v245 = 1.0;
    v246 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v243 - 1), 0LL);
    v247 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_63159428((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
    if ( !v247 )
      goto LABEL_560;
    UILabel__set_text(v247, (System_String_o *)gameObject, 0LL);
  }
  v248 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v248, 0LL, 0LL) )
  {
    v249 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v250 = 1.0;
    else
      v250 = 0.015686;
    if ( adjustHp <= 0 )
      v249 = 1.0;
    if ( !gameObject )
      goto LABEL_560;
    v251 = 1.0;
    v252 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v249 - 1), 0LL);
    v253 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_63159428((int32_t)&v369, (System_String_o *)StringLiteral_397/*"#,0"*/, 0LL);
    if ( !v253 )
      goto LABEL_560;
    UILabel__set_text(v253, (System_String_o *)gameObject, 0LL);
  }
  v254 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v254, 0LL, 0LL) )
  {
    v255 = this->fields.baseSprite;
    v256 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v255, FrameType, v256, 0, 0LL);
  }
  v257 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v257, 0LL, 0LL) )
  {
    v258 = this->fields.base2Sprite;
    v259 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v258, FrameType, v259, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_560;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v168 | QuestRestriction) & 1) != 0 )
  {
    v261 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v261, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v262 = LocalizationManager__Get((System_String_o *)StringLiteral_10113/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_418;
  }
  if ( !v7->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(servantEntity, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_38640612(126, 0LL) )
    {
      v267 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v267, 0LL, 0LL) )
        goto LABEL_449;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_560;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_560;
      v268 = 1;
LABEL_448:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v268, 0LL);
LABEL_449:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v58);
      goto LABEL_450;
    }
  }
  if ( !v167 && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v266 = 1;
      v265 = this;
      v264 = 0;
      v263 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_419;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v271 = LocalizationManager__Get((System_String_o *)StringLiteral_11342/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v363.fields.currentCryptoKey) = TimesToRestart;
      v275 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v363, v272, v273, v274);
      v262 = System_String__Format(v271, v275, 0LL);
LABEL_418:
      v263 = v262;
      v264 = 1;
      v265 = this;
      v266 = 0;
LABEL_419:
      SupportSelectItemDraw__SetMaskMessage(v265, v263, v264, v266, v260);
      goto LABEL_450;
    }
    v276 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v276, 0LL, 0LL) )
      goto LABEL_449;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    v268 = 0;
    goto LABEL_448;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v269 = LocalizationManager__Get((System_String_o *)StringLiteral_6390/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v269, 1, v270);
LABEL_450:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v278 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v278, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_560;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  v98 = (System_Object_array *)eventIda;
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v79 = 0;
  v99 = v163 != 0;
  if ( eventFriendPoints && (gameObject & 1) != 0 )
  {
    max_length = eventFriendPoints->max_length;
    if ( max_length < 1 )
      goto LABEL_558;
    v281 = 0LL;
    v282 = 0;
    value = 0;
    m_Items = eventFriendPoints->m_Items;
    do
    {
      if ( (unsigned int)v281 >= max_length )
        goto LABEL_561;
      v285 = m_Items[v281];
      if ( !v285 )
        goto LABEL_560;
      gameObject = System_Array__IndexOf_int_(
                     v285->fields.targetIds,
                     svtId,
                     (const MethodInfo_3069870 *)Method_System_Array_IndexOf_int___);
      max_length = eventFriendPoints->max_length;
      if ( (unsigned int)v281 >= max_length )
        goto LABEL_561;
      v286 = m_Items[v281];
      if ( !v286 )
        goto LABEL_560;
      targetIds = v286->fields.targetIds;
      if ( targetIds )
        v288 = targetIds->max_length == 0;
      else
        v288 = 1;
      if ( (v288 || (int)gameObject >= 0) && value < v286->fields.value )
      {
        v282 = v286->fields.eventId;
        value = v286->fields.value;
      }
      ++v281;
    }
    while ( (int)v281 < max_length );
    if ( value >= 1 )
    {
      v289 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      v290 = v289;
      if ( eventIda )
        System_Collections_Generic_List_object____ctor_56607308(
          v289,
          eventIda,
          (const MethodInfo_35FC24C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030432);
      else
        System_Collections_Generic_List_object____ctor(
          v289,
          (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v317 = (EventMargeItemUpValInfo_o *)sub_1B86604(EventMargeItemUpValInfo_TypeInfo);
      EventMargeItemUpValInfo___ctor_39869524(v317, v282, value, 0LL);
      if ( !v290 )
        goto LABEL_560;
      v320 = v290->fields._items;
      v321 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
      ++v290->fields._version;
      v7 = v357;
      if ( !v320 )
        goto LABEL_560;
      v322 = v290->fields._size;
      if ( (unsigned int)v322 >= v320->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v290,
          (Il2CppObject *)v317,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v321[4] + 192LL) + 112LL));
      }
      else
      {
        v323 = &v320->obj.klass + v322;
        v290->fields._size = v322 + 1;
        v323[4] = (Il2CppClass *)v317;
        sub_1B8635C((CGThumbnailListItem_o *)(v323 + 4), (int32_t)v317, v318, v319);
      }
      v98 = System_Collections_Generic_List_object___ToArray(
              v290,
              (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_558:
      v79 = 0;
      if ( !v70 )
        goto LABEL_123;
      goto LABEL_480;
    }
    v7 = v357;
    v79 = 0;
  }
  if ( v70 )
  {
LABEL_480:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    equipSprite = (UISprite_o *)this->fields.equipSprite;
    v293 = v70[5].klass;
    v292 = v70[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v377.fields.currentCryptoKey = v293;
    *(_QWORD *)&v377.fields.fakeValue = v292;
    v294 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v377, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEquipFace(equipSprite, v294, 0LL, 0LL);
    equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    v7 = v357;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      goto LABEL_500;
    v297 = v70[6].klass;
    v296 = v70[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v378.fields.currentCryptoKey = v297;
    *(_QWORD *)&v378.fields.fakeValue = v296;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v378, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v298 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v298 >= 4 )
      {
        if ( !v338 )
          goto LABEL_560;
        v58 = SLODWORD(v338[5].monitor) >= v298;
      }
      else
      {
        v58 = 0LL;
      }
      if ( gameObject )
      {
LABEL_499:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v58, 0LL);
        goto LABEL_500;
      }
    }
LABEL_560:
    sub_1B86614(gameObject, v58);
  }
LABEL_123:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_560;
  if ( !v339 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    v111 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v111, 0LL, 0LL) )
      goto LABEL_500;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    LOBYTE(v58) = 0;
    goto LABEL_499;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_560;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_560;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v100 = (UISprite_o *)this->fields.equipSprite;
  v102 = *(_QWORD *)&v339->fields.svtId.fields.currentCryptoKey;
  v101 = *(_QWORD *)&v339->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v374.fields.currentCryptoKey = v102;
  *(_QWORD *)&v374.fields.fakeValue = v101;
  v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v374, 0LL);
  ImagePartsGroupIdxs_k__BackingField = v339->fields._ImagePartsGroupIdxs_k__BackingField;
  v105 = v103;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v100, v105, ImagePartsGroupIdxs_k__BackingField, 0LL);
  v106 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = v357;
  if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.equipLimitCountSprite;
    if ( !gameObject )
      goto LABEL_560;
    v107 = v339->fields.limitCount;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( v107 >= 4 )
    {
      if ( !v338 )
        goto LABEL_560;
      v58 = SLODWORD(v338[5].monitor) >= v107;
    }
    else
    {
      v58 = 0LL;
    }
    if ( !gameObject )
      goto LABEL_560;
    goto LABEL_499;
  }
LABEL_500:
  v299 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v299, 0LL, 0LL) )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( (v79 & 1) == 0 )
      {
        v300 = v342;
        v301 = v342->fields.servantLeaderInfo;
        if ( v301 )
        {
          v303 = *(_QWORD *)&v301->fields.svtId.fields.currentCryptoKey;
          v302 = *(_QWORD *)&v301->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v379.fields.currentCryptoKey = v303;
          *(_QWORD *)&v379.fields.fakeValue = v302;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v379, 0LL);
          if ( !v342->fields.servantLeaderInfo )
            goto LABEL_560;
          v304 = gameObject;
          v305 = ServantLeaderInfo__getRarity(v342->fields.servantLeaderInfo, 0LL);
LABEL_523:
          v308 = v305;
LABEL_524:
          if ( eventUpVallInfo )
            equipSvtId = eventUpVallInfo->fields.equipSvtId;
          else
            equipSvtId = 0;
          gameObject = (__int64)this->fields.eventUpValIcon;
          if ( !gameObject )
            goto LABEL_560;
          EventUpValIconComponent__Set(
            (EventUpValIconComponent_o *)gameObject,
            (EventMargeItemUpValInfo_array *)v98,
            v304,
            v308,
            equipSvtId,
            0LL);
          bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
          {
            gameObject = (__int64)this->fields.bounusIcon;
            if ( !gameObject )
              goto LABEL_560;
            v307 = 0;
            goto LABEL_533;
          }
          goto LABEL_534;
        }
        goto LABEL_517;
      }
    }
    else if ( (v79 & 1) == 0 )
    {
      v300 = v342;
      userServantEntity = v342->fields.userServantEntity;
      if ( userServantEntity )
      {
        v311 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v310 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v380.fields.currentCryptoKey = v311;
        *(_QWORD *)&v380.fields.fakeValue = v310;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v380, 0LL);
        if ( !v342->fields.userServantEntity )
          goto LABEL_560;
        v304 = gameObject;
        v305 = UserServantEntity__getRarity(v342->fields.userServantEntity, 0LL);
        goto LABEL_523;
      }
LABEL_517:
      v308 = -1;
      v304 = -1;
      goto LABEL_524;
    }
    v300 = v342;
    goto LABEL_517;
  }
  v306 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v300 = v342;
  if ( UnityEngine_Object__op_Inequality(v306, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_560;
    v307 = v99;
LABEL_533:
    ShiningIconComponent__Set_39191784((ShiningIconComponent_o *)gameObject, v307, 0LL);
  }
LABEL_534:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_560;
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
      goto LABEL_560;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_560;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    pushUserServantId = v7->fields.pushUserServantId;
    if ( pushUserServantId )
    {
      if ( !v300 )
        goto LABEL_560;
      if ( pushUserServantId == v300->fields.userSvtId )
      {
        gameObject = (__int64)this->fields.pushSprite;
        if ( !gameObject )
          goto LABEL_560;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_560;
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

  if ( (byte_4A4AC21 & 1) == 0 )
  {
    sub_1B863B8(&AtlasManager_TypeInfo, message);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_20114/*"img_frames_mask05"*/, v11);
    sub_1B863B8(&StringLiteral_18248/*"datalost_party_edit"*/, v12);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    byte_4A4AC21 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18248/*"datalost_party_edit"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20114/*"img_frames_mask05"*/, 0LL);
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
        if ( !byte_4A487E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4A487E6 = 1;
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
      if ( !byte_4A487E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4A487E6 = 1;
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
    sub_1B86614(gameObject, v15);
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

  if ( (byte_4A4AC22 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, message);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A4AC22 = 1;
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
        if ( !byte_4A487E6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v9);
          byte_4A487E6 = 1;
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
      if ( !byte_4A487E6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4A487E6 = 1;
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
    sub_1B86614(gameObject, v9);
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
  if ( (byte_4A4AC27 & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass52_0_o *)sub_1B863B8(
                                                              &Method_System_Linq_Enumerable_Contains_int___,
                                                              *(_QWORD *)&individuality);
    byte_4A4AC27 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1B86614(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___);
}