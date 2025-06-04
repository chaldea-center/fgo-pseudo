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
  SupportSelectItemDraw_c *v12; // x8
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x19
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct SupportSelectItemDraw_StaticFields *v38; // x8

  if ( (byte_4AFE6B7 & 1) == 0 )
  {
    sub_1BC3008(&string___TypeInfo, v1);
    sub_1BC3008(&SupportSelectItemDraw_TypeInfo, v2);
    sub_1BC3008(&StringLiteral_19953/*"icon_class1002"*/, v3);
    sub_1BC3008(&StringLiteral_19951/*"icon_class007"*/, v4);
    sub_1BC3008(&StringLiteral_19950/*"icon_class006"*/, v5);
    sub_1BC3008(&StringLiteral_19948/*"icon_class004"*/, v6);
    sub_1BC3008(&StringLiteral_19945/*"icon_class001"*/, v7);
    sub_1BC3008(&StringLiteral_19952/*"icon_class1001"*/, v8);
    sub_1BC3008(&StringLiteral_19946/*"icon_class002"*/, v9);
    sub_1BC3008(&StringLiteral_19949/*"icon_class005"*/, v10);
    sub_1BC3008(&StringLiteral_19947/*"icon_class003"*/, v11);
    byte_4AFE6B7 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v12 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v12->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v12->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v13 = sub_1BC30B0(string___TypeInfo, 9LL);
  if ( !v13 )
    sub_1BC3264(0LL, v14);
  v17 = v13;
  if ( !*(_DWORD *)(v13 + 24) )
    goto LABEL_14;
  v18 = StringLiteral_19952/*"icon_class1001"*/;
  *(_QWORD *)(v13 + 32) = StringLiteral_19952/*"icon_class1001"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v13 + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_14;
  v20 = StringLiteral_19945/*"icon_class001"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_19945/*"icon_class001"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 40), v20, v15, v19);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_14;
  v22 = StringLiteral_19946/*"icon_class002"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_19946/*"icon_class002"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 48), v22, v15, v21);
  if ( *(_DWORD *)(v17 + 24) <= 3u )
    goto LABEL_14;
  v24 = StringLiteral_19947/*"icon_class003"*/;
  *(_QWORD *)(v17 + 56) = StringLiteral_19947/*"icon_class003"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 56), v24, v15, v23);
  if ( *(_DWORD *)(v17 + 24) <= 4u )
    goto LABEL_14;
  v26 = StringLiteral_19948/*"icon_class004"*/;
  *(_QWORD *)(v17 + 64) = StringLiteral_19948/*"icon_class004"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 64), v26, v15, v25);
  if ( *(_DWORD *)(v17 + 24) <= 5u )
    goto LABEL_14;
  v28 = StringLiteral_19949/*"icon_class005"*/;
  *(_QWORD *)(v17 + 72) = StringLiteral_19949/*"icon_class005"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 72), v28, v15, v27);
  if ( *(_DWORD *)(v17 + 24) <= 6u
    || (v30 = StringLiteral_19950/*"icon_class006"*/,
        *(_QWORD *)(v17 + 80) = StringLiteral_19950/*"icon_class006"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 80), v30, v15, v29),
        *(_DWORD *)(v17 + 24) <= 7u)
    || (v32 = StringLiteral_19951/*"icon_class007"*/,
        *(_QWORD *)(v17 + 88) = StringLiteral_19951/*"icon_class007"*/,
        sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 88), v32, v15, v31),
        *(_DWORD *)(v17 + 24) <= 8u) )
  {
LABEL_14:
    sub_1BC326C(v13, v14, v15);
  }
  v34 = StringLiteral_19953/*"icon_class1002"*/;
  *(_QWORD *)(v17 + 96) = StringLiteral_19953/*"icon_class1002"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v17 + 96), v34, v15, v33);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v17;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->backClassIconFileList, v17, v36, v37);
  v38 = SupportSelectItemDraw_TypeInfo->static_fields;
  v38->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&v38->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v38->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
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

  if ( (byte_4AFE6B6 & 1) == 0 )
  {
    sub_1BC3008(&System_IDisposable_TypeInfo, method);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    sub_1BC3008(&UnityEngine_Transform_TypeInfo, v5);
    byte_4AFE6B6 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BC3264(0LL, v7);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BC3264(0LL, v8);
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
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v17 = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
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
      sub_1BC3524(v18);
LABEL_37:
      sub_1BC3264(v18, v19);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v18, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1BC3264(0LL, v22);
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v25, 0LL) )
    {
      v26 = UnityEngine_Component__get_gameObject(v20, 0LL);
      if ( !v26 )
        sub_1BC3264(0LL, v27);
      UnityEngine_GameObject__SetActive(v26, 0, 0LL);
    }
  }
  v28 = sub_1BC3144(Enumerator, System_IDisposable_TypeInfo);
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
      v33 = sub_1C13570(v28, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4AFE6AE & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4AFE6AE = 1;
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v10, v11);
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
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v18, v15, v16);
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
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v23, (int32_t)v20, v21);
      goto LABEL_36;
    }
LABEL_37:
    sub_1BC3264(transform, v6);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v20);
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v24, v25, v26);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4AFE6AF & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE6AF = 1;
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
    sub_1BC3264(gameObject, v4);
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

  if ( (byte_4AFE6B1 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    sub_1BC3008(&StringLiteral_1/*""*/, v3);
    byte_4AFE6B1 = 1;
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
    sub_1BC3264(gameObject, v5);
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

  if ( (byte_4AFE6B4 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, flag);
    byte_4AFE6B4 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
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
  if ( (byte_4AFE6B5 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4AFE6B5 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1BC3264(0LL, v6);
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
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x23
  DataMasterBase_TMaster__TEntity__PKType__o *v66; // x19
  __int64 v67; // x20
  __int64 v68; // x21
  Il2CppObject *v69; // x23
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v71; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v74; // w19
  ServantLeaderInfo_o *servantLeaderInfo; // x27
  int32_t v76; // w8
  _DWORD *v77; // x20
  int32_t adjustAtk; // w22
  int32_t AddedAtk; // w0
  int32_t adjustHp; // w23
  int32_t v81; // w28
  int32_t AddedHp; // w0
  int v83; // w8
  int32_t FrameType; // w28
  EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_42457020; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v89; // x22
  Il2CppObject *v90; // x23
  Il2CppObject *v91; // x28
  System_Collections_Generic_List_object__o *v92; // x29
  __int64 v93; // x2
  struct EventUpValSetupInfo_o *v94; // x8
  struct System_Int32_array *v95; // x9
  __int64 v96; // x8
  unsigned __int64 v97; // x27
  int32_t eventSvtPoint; // w19
  __int64 v99; // x20
  __int64 v100; // x24
  int32_t v101; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v104; // x20
  EventPersonalMargeUpValInfo_o *v105; // x19
  const MethodInfo *v106; // x3
  __int64 v107; // x8
  __int64 v108; // x24
  unsigned __int64 v109; // x22
  Il2CppObject *v110; // x25
  __int64 v111; // x20
  _DWORD *v112; // x8
  int v113; // w8
  __int64 v114; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v116; // x8
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x19
  System_Func_int__bool__o *v120; // x21
  System_Func_TSource__bool__o *v121; // x1
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct QuestRestrictionInfo_o *v126; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v128; // x1
  char v129; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v131; // x8
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v133; // x19
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v136; // x19
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
  System_Object_array *v148; // x28
  bool v149; // w22
  UISprite_o *equipSprite; // x19
  __int64 v151; // x20
  __int64 v152; // x21
  int32_t v153; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v155; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  int v157; // w19
  EventMargeItemUpValInfo_array *AddUpValInfos; // x23
  __int64 v159; // x22
  int32_t v160; // w8
  _DWORD *v161; // x19
  int32_t AtkBoostValue; // w20
  int32_t HpBoostValue; // w0
  int v164; // w8
  Il2CppObject v165; // q1
  int64_t v166; // x19
  UnityEngine_Object_o *v167; // x19
  int v168; // w23
  _BOOL4 QuestRestriction; // w24
  int v170; // w27
  int v171; // w20
  int32_t v172; // w20
  QuestRestrictionInfo_o *v173; // x19
  __int64 v174; // x21
  __int64 v175; // x23
  int32_t v176; // w0
  int32_t v177; // w21
  int32_t v178; // w23
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v180; // w22
  bool EventUpVal_42146552; // w19
  Il2CppObject *v182; // x23
  Il2CppObject *v183; // x28
  System_Collections_Generic_List_object__o *v184; // x27
  struct EventUpValSetupInfo_o *v185; // x8
  struct System_Int32_array *v186; // x26
  __int64 v187; // x8
  ServantEntity_o *v188; // x25
  unsigned __int64 v189; // x21
  int32_t v190; // w24
  __int128 v191; // q0
  int64_t v192; // x19
  int32_t v193; // w4
  int32_t BuddyPoint; // w20
  int32_t v195; // w0
  EventServantPointRankEntity_o *v196; // x0
  int32_t v197; // w25
  EventMargeItemUpValInfo_o *v198; // x19
  EventPersonalMargeUpValInfo_o *v199; // x19
  const MethodInfo *v200; // x3
  int v201; // w8
  __int64 v202; // x20
  unsigned int v203; // w19
  struct System_Object_array *v204; // x8
  _QWORD *v205; // x9
  __int64 v206; // x10
  Il2CppClass **v207; // x0
  _BOOL4 v208; // w0
  UnityEngine_Object_o *v209; // x19
  ServantClassIconComponent_o *v210; // x19
  UnityEngine_Vector2_o *v211; // x8
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  struct SupportSelectItemDraw_StaticFields *v215; // x8
  UnityEngine_Object_o *v216; // x19
  UILabel_o *v217; // x19
  UnityEngine_Object_o *v218; // x19
  int32_t v219; // w19
  int32_t v220; // w20
  System_String_o *Icon_39481952; // x21
  int32_t RarityIcon; // w19
  int32_t v223; // w19
  UISprite_o *v224; // x20
  float v225; // s8
  float v226; // s9
  float z; // s10
  UnityEngine_Object_o *v228; // x19
  SkillListTreasureDeviceComponent_o *v229; // x19
  SkillInfo_array *v230; // x20
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  __int64 v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  __int64 v236; // x8
  UnityEngine_Object_o *v237; // x19
  AppendSkillListComponent_o *v238; // x19
  SkillInfo_array *v239; // x20
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  __int64 v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  __int64 v245; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v247; // x0
  SwitchUIWidgetComponent_o *v248; // x19
  UnityEngine_Object_o *v249; // x19
  UnityEngine_Object_o *v250; // x19
  float v251; // s1
  float v252; // s2
  float v253; // s0
  float v254; // s3
  UILabel_o *v255; // x19
  UnityEngine_Object_o *v256; // x19
  float v257; // s1
  float v258; // s2
  float v259; // s0
  float v260; // s3
  UILabel_o *v261; // x19
  UnityEngine_Object_o *v262; // x19
  UISprite_o *v263; // x20
  UIAtlas_o *v264; // x19
  UnityEngine_Object_o *v265; // x19
  UISprite_o *v266; // x20
  UIAtlas_o *v267; // x19
  const MethodInfo *v268; // x4
  UnityEngine_Object_o *v269; // x19
  System_String_o *v270; // x0
  System_String_o *v271; // x1
  bool v272; // w2
  SupportSelectItemDraw_o *v273; // x0
  bool v274; // w3
  UnityEngine_Object_o *v275; // x19
  bool v276; // w1
  System_String_o *v277; // x0
  const MethodInfo *v278; // x3
  System_String_o *v279; // x19
  __int64 v280; // x2
  __int64 v281; // x3
  __int64 v282; // x4
  Il2CppObject *v283; // x0
  UnityEngine_Object_o *v284; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *v286; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  signed int max_length; // w8
  __int64 v289; // x19
  int32_t v290; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v293; // x8
  EventCampaignEntity_o *v294; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v296; // w10
  System_Collections_Generic_List_object__o *v297; // x0
  System_Collections_Generic_List_object__o *v298; // x20
  UISprite_o *v299; // x19
  void *v300; // x20
  Il2CppClass *v301; // x21
  int32_t v302; // w20
  UnityEngine_Object_o *v303; // x19
  void *v304; // x19
  Il2CppClass *v305; // x20
  UnityEngine_Object_o *v306; // x19
  struct ServantLeaderInfo_o *v307; // x8
  __int64 v308; // x19
  __int64 v309; // x20
  int32_t v310; // w20
  int32_t v311; // w0
  UnityEngine_Object_o *v312; // x19
  bool v313; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v315; // x19
  __int64 v316; // x20
  int32_t v317; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v323; // x19
  int32_t v324; // w2
  const MethodInfo *v325; // x3
  struct System_Object_array *v326; // x8
  _QWORD *v327; // x9
  __int64 v328; // x10
  Il2CppClass **v329; // x0
  bool v330; // [xsp+10h] [xbp-1E0h]
  int32_t v331; // [xsp+14h] [xbp-1DCh]
  int32_t v332; // [xsp+18h] [xbp-1D8h]
  int32_t v333; // [xsp+1Ch] [xbp-1D4h]
  int32_t v334; // [xsp+20h] [xbp-1D0h]
  int v335; // [xsp+20h] [xbp-1D0h]
  int32_t classId; // [xsp+24h] [xbp-1CCh]
  System_Int32_array *cardParams; // [xsp+28h] [xbp-1C8h]
  UserServantLeaderEntity_o *v338; // [xsp+30h] [xbp-1C0h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+30h] [xbp-1C0h]
  SupportSelectItemDraw_o *v340; // [xsp+38h] [xbp-1B8h]
  _BOOL4 UniqueSvtRestriction; // [xsp+38h] [xbp-1B8h]
  SupportSelectItemDraw_o *v342; // [xsp+38h] [xbp-1B8h]
  int32_t codeIds; // [xsp+40h] [xbp-1B0h]
  System_Int32_array *codeIdsa; // [xsp+40h] [xbp-1B0h]
  int32_t codeIdsb; // [xsp+40h] [xbp-1B0h]
  int32_t treasureDeviceNum; // [xsp+4Ch] [xbp-1A4h]
  int32_t strengthStatus; // [xsp+50h] [xbp-1A0h]
  int32_t v348; // [xsp+54h] [xbp-19Ch]
  _DWORD *v349; // [xsp+58h] [xbp-198h]
  int32_t rarity; // [xsp+60h] [xbp-190h]
  int32_t limitCount; // [xsp+64h] [xbp-18Ch]
  Il2CppObject *v352; // [xsp+68h] [xbp-188h]
  int exceedCount; // [xsp+70h] [xbp-180h]
  bool IsGrandServant; // [xsp+74h] [xbp-17Ch]
  Il2CppObject *v355; // [xsp+78h] [xbp-178h]
  struct EquipTargetInfo_o *v356; // [xsp+80h] [xbp-170h]
  EventServantPointRankMaster_o *v357; // [xsp+88h] [xbp-168h]
  int v358; // [xsp+88h] [xbp-168h]
  ServantLeaderInfo_o *v359; // [xsp+90h] [xbp-160h]
  int32_t TimesToRestart; // [xsp+90h] [xbp-160h]
  struct System_Int32_array *v361; // [xsp+98h] [xbp-158h]
  bool IsDataLost; // [xsp+98h] [xbp-158h]
  bool v363; // [xsp+98h] [xbp-158h]
  Il2CppObject *v364; // [xsp+A0h] [xbp-150h]
  System_Collections_Generic_IEnumerable_T__o *v365; // [xsp+A0h] [xbp-150h]
  ServantEntity_o *v366; // [xsp+A8h] [xbp-148h]
  int32_t svtId; // [xsp+B4h] [xbp-13Ch]
  SupportServantData_o *v369; // [xsp+C0h] [xbp-130h]
  int32_t eventId; // [xsp+C8h] [xbp-128h]
  _BOOL4 eventIda; // [xsp+C8h] [xbp-128h]
  Il2CppObject *eventIdb; // [xsp+C8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v373; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v374; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v375; // [xsp+110h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+138h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+144h] [xbp-ACh] BYREF
  SkillInfo_array *v378; // [xsp+148h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+150h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+158h] [xbp-98h] BYREF
  int v381; // [xsp+164h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+168h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+178h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v384; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v385; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v386; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v387; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v388; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v389; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v390; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v391; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v392; // 0:x0.16
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4

  v7 = supportServantData;
  if ( (byte_4AFE6B0 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_IndexOf_int___, supportServantData);
    sub_1BC3008(&AtlasManager_TypeInfo, v9);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventDetailMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, v11);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v12);
    sub_1BC3008(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_1BC3008(&Method_DataManager_GetMaster_EventDetailMaster___, v14);
    sub_1BC3008(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v15);
    sub_1BC3008(&Method_DataManager_GetMaster_FunctionMaster___, v16);
    sub_1BC3008(&Method_DataManager_GetMaster_QuestPhaseMaster___, v17);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantExceedMaster___, v18);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLvDetailMaster___, v19);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v20);
    sub_1BC3008(&DataManager_TypeInfo, v21);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v22);
    sub_1BC3008(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__, v23);
    sub_1BC3008(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v24);
    sub_1BC3008(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__, v25);
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_int____76848976, v26);
    sub_1BC3008(&EventMargeItemUpValInfo_TypeInfo, v27);
    sub_1BC3008(&EventPersonalMargeUpValInfo_TypeInfo, v28);
    sub_1BC3008(&System_Func_int__bool__TypeInfo, v29);
    sub_1BC3008(&int_TypeInfo, v30);
    sub_1BC3008(&long___TypeInfo, v31);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Add__, v32);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v33);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Clear__, v34);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v35);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v36);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__, v37);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v38);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76754552, v39);
    sub_1BC3008(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v40);
    sub_1BC3008(&LocalizationManager_TypeInfo, v41);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v42);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v43);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v44);
    sub_1BC3008(&Rarity_TypeInfo, v45);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v46);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v47);
    sub_1BC3008(&SupportSelectItemDraw_TypeInfo, v48);
    sub_1BC3008(&TutorialFlag_TypeInfo, v49);
    sub_1BC3008(&Method_SupportSelectItemDraw___c__DisplayClass56_0__SetItem_b__0__, v50);
    sub_1BC3008(&SupportSelectItemDraw___c__DisplayClass56_0_TypeInfo, v51);
    sub_1BC3008(&StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, v52);
    sub_1BC3008(&StringLiteral_10176/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, v53);
    sub_1BC3008(&StringLiteral_6404/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, v54);
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, v55);
    sub_1BC3008(&StringLiteral_1/*""*/, v56);
    byte_4AFE6B0 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v381 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  v378 = 0LL;
  isDuplicate = 0;
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_571;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_571;
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
      goto LABEL_571;
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
      goto LABEL_571;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !v7 )
    goto LABEL_571;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(v7, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
  v369 = v7;
  if ( gameObject )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_571;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_571;
      v66 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v68 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v67 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v384.fields.currentCryptoKey = v68;
      *(_QWORD *)&v384.fields.fakeValue = v67;
      v356 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v384, 0LL);
      if ( !v66 )
        goto LABEL_571;
      v7 = v369;
      v69 = 0LL;
      v355 = DataMasterBase_object__object__int___GetEntity(
               v66,
               gameObject,
               (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_571;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(v7, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_571;
    v69 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v69 )
      goto LABEL_571;
    v71 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v69[5].klass;
    monitor = v69[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v385.fields.currentCryptoKey = klass;
    *(_QWORD *)&v385.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v385, 0LL);
    if ( !v71 )
      goto LABEL_571;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v71,
                            gameObject,
                            (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    v7 = v369;
  }
  else
  {
    v69 = 0LL;
  }
  v355 = (Il2CppObject *)gameObject;
  v356 = 0LL;
  if ( !UserServantLeaderEntity )
  {
    v129 = 1;
    goto LABEL_109;
  }
LABEL_37:
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v129 = 0;
LABEL_109:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    backClassIcon = this->fields.backClassIcon;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v131 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
    if ( !v131 )
      goto LABEL_571;
    if ( *(_DWORD *)(v131 + 24) <= (unsigned int)classPos )
      goto LABEL_572;
    if ( !backClassIcon )
      goto LABEL_571;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v131 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v133 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v133, 9, baseDefaultUIAtlas, 0, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v136 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v136, 9, base2DefaultUIAtlas, 0, 0, 0LL);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_571;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_571;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_571;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
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
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_571;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0LL);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    v148 = 0LL;
    v149 = 0;
    if ( v69 )
      goto LABEL_491;
LABEL_184:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    if ( v356 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v152 = *(_QWORD *)&v356->fields.svtId.fields.currentCryptoKey;
      v151 = *(_QWORD *)&v356->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v387.fields.currentCryptoKey = v152;
      *(_QWORD *)&v387.fields.fakeValue = v151;
      v153 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v387, 0LL);
      ImagePartsGroupIdxs_k__BackingField = v356->fields._ImagePartsGroupIdxs_k__BackingField;
      v155 = v153;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v155, ImagePartsGroupIdxs_k__BackingField, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v7 = v369;
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_571;
        v157 = v356->fields.limitCount;
        goto LABEL_506;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      v167 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_571;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_571;
        LOBYTE(v58) = 0;
        goto LABEL_511;
      }
    }
    goto LABEL_512;
  }
  v74 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v74,
                          (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_571;
  v366 = (ServantEntity_o *)gameObject;
  v352 = v69;
  svtId = v74;
  classId = *(_DWORD *)(gameObject + 80);
  if ( v7->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_571;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
    gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0LL);
    lv[1] = servantLeaderInfo->fields.lv;
    if ( !gameObject )
      goto LABEL_571;
    v76 = *(_DWORD *)(gameObject + 20);
    v77 = (_DWORD *)gameObject;
    lv[0] = v76;
    if ( v356 )
      lv[0] = v356->fields.atk + v76;
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0LL);
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v81 = AddedAtk;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    v334 = v81;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0LL);
    v83 = v77[4];
    v333 = AddedHp;
    v381 = v83;
    if ( v356 )
      v381 = v356->fields.hp + v83;
    rarity = v77[6];
    v349 = v77;
    exceedCount = servantLeaderInfo->fields.exceedCount;
    FrameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v77[10], 0LL);
    limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_571;
    strengthStatus = tdInfo->fields.strengthStatus;
    v348 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_42469628(servantLeaderInfo, &v378, 0, 0LL);
    gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0LL);
    eventSetupInfo = v7->fields.eventSetupInfo;
    IsGrandServant = gameObject;
    v359 = servantLeaderInfo;
    v331 = adjustHp;
    v332 = adjustAtk;
    if ( !eventSetupInfo )
      goto LABEL_198;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_571;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      codeIds = FrameType;
      v338 = UserServantLeaderEntity;
      v340 = this;
      EventUpVal_42457020 = ServantLeaderInfo__getEventUpVal_42457020(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v89 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v90 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FunctionMaster___);
      v91 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
      v92 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v92,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v94 = v7->fields.eventSetupInfo;
      if ( !v94 )
        goto LABEL_571;
      v95 = v94->fields.eventIdList;
      v357 = (EventServantPointRankMaster_o *)v89;
      v330 = EventUpVal_42457020;
      if ( !v95 )
        goto LABEL_571;
      v96 = *(_QWORD *)&v95->max_length;
      if ( (int)v96 >= 1 )
      {
        v97 = 0LL;
        v361 = v95;
        v364 = Master_object;
        while ( 1 )
        {
          if ( v97 >= (unsigned int)v96 )
            goto LABEL_572;
          if ( !Master_object )
            goto LABEL_571;
          eventId = v95->m_Items[v97 + 1];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  eventId,
                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                (gameObject & 1) == 0) )
          {
            if ( !v357 )
              goto LABEL_571;
            if ( EventServantPointRankMaster__IsEnableEvent(v357, eventId, 0LL) )
            {
              eventSvtPoint = v359->fields.eventSvtPoint;
              v100 = *(_QWORD *)&v359->fields.svtId.fields.currentCryptoKey;
              v99 = *(_QWORD *)&v359->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v386.fields.currentCryptoKey = v100;
              *(_QWORD *)&v386.fields.fakeValue = v99;
              v101 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v386, 0LL);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v357, eventId, eventSvtPoint, v101, 0LL);
              if ( EnableEntity )
                svtPointRank = EnableEntity->fields.svtPointRank;
              else
                svtPointRank = 0;
              v104 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_40736328(v104, eventId, 0LL);
              if ( !v104 )
                goto LABEL_571;
              EventMargeItemUpValInfo__SetServantPointInfo(v104, v359->fields.eventSvtPoint, svtPointRank, 1, 0LL);
              if ( !v92 )
                goto LABEL_571;
              System_Collections_Generic_List_object___Insert(
                v92,
                0,
                (Il2CppObject *)v104,
                (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            v105 = (EventPersonalMargeUpValInfo_o *)sub_1BC3254(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v105, eventId, v366, 0LL);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_571;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
            if ( !v105 )
              goto LABEL_571;
            EventPersonalMargeUpValInfo__Add(v105, (EventDropItemUpValInfo_array *)gameObject, 0LL);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v105, 0LL);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v105, 0LL);
              if ( !gameObject )
                goto LABEL_571;
              v107 = *(_QWORD *)(gameObject + 24);
              v108 = gameObject;
              if ( (int)v107 >= 1 )
                break;
            }
          }
LABEL_102:
          v95 = v361;
          Master_object = v364;
          ++v97;
          LODWORD(v96) = v361->max_length;
          if ( (__int64)v97 >= (int)v96 )
            goto LABEL_103;
        }
        v109 = 0LL;
        while ( v109 < (unsigned int)v107 )
        {
          v110 = *(Il2CppObject **)(v108 + 32 + 8 * v109);
          if ( !v7->fields.questRestrictionInfo )
            goto LABEL_575;
          v111 = sub_1BC3254(SupportSelectItemDraw___c__DisplayClass56_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v111, 0LL);
          if ( !v110 )
            goto LABEL_571;
          v112 = v110[2].monitor;
          if ( !v112 )
            goto LABEL_571;
          if ( !v90 )
            goto LABEL_571;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v90,
                                  v112[4],
                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( !gameObject )
            goto LABEL_571;
          v113 = *(_DWORD *)(gameObject + 24);
          v114 = gameObject;
          if ( v113 == 1 || v113 == 16 )
            goto LABEL_576;
          questRestrictionInfo = v7->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_571;
          if ( eventId == questRestrictionInfo->fields.eventId )
          {
LABEL_576:
            v116 = v7->fields.questRestrictionInfo;
            if ( !v116 )
              goto LABEL_571;
            if ( !v91 )
              goto LABEL_571;
            gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                    (QuestPhaseMaster_o *)v91,
                                    v116->fields.questId,
                                    v116->fields.questPhase,
                                    0LL);
            if ( !v111 )
              goto LABEL_571;
            *(_QWORD *)(v111 + 16) = gameObject;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v111 + 16), gameObject, v117, v118);
            v119 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v114 + 80);
            if ( !v119 )
              goto LABEL_571;
            if ( !v119[1].monitor
              || (v120 = (System_Func_int__bool__o *)sub_1BC3254(System_Func_int__bool__TypeInfo),
                  System_Func_int__bool____ctor(
                    v120,
                    (Il2CppObject *)v111,
                    Method_SupportSelectItemDraw___c__DisplayClass56_0__SetItem_b__0__,
                    0LL),
                  v121 = (System_Func_TSource__bool__o *)v120,
                  v7 = v369,
                  gameObject = System_Linq_Enumerable__Any_int__50394496(
                                 v119,
                                 v121,
                                 (const MethodInfo_300F580 *)Method_System_Linq_Enumerable_Any_int____76848976),
                  (gameObject & 1) != 0) )
            {
LABEL_575:
              if ( !v92 )
                goto LABEL_571;
              items = v92->fields._items;
              v123 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v92->fields._version;
              if ( !items )
                goto LABEL_571;
              v124 = v92->fields._size;
              if ( (unsigned int)v124 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v92,
                  v110,
                  *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
              }
              else
              {
                v125 = &items->obj.klass + v124;
                v92->fields._size = v124 + 1;
                v125[4] = (Il2CppClass *)v110;
                sub_1BC2FAC((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v110, v93, v106);
              }
            }
          }
          LODWORD(v107) = *(_DWORD *)(v108 + 24);
          if ( (__int64)++v109 >= (int)v107 )
            goto LABEL_102;
        }
        goto LABEL_572;
      }
LABEL_103:
      v126 = v7->fields.questRestrictionInfo;
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      FrameType = codeIds;
      servantLeaderInfo = v359;
      if ( v126 )
      {
        AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                 (PartyOrganizationUtility_o *)gameObject,
                                 &isDuplicate,
                                 (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v92,
                                 0LL);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_571;
        v128 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
      }
      else
      {
        v128 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v92;
      }
      UserServantLeaderEntity = v338;
      this = v340;
      AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos((PartyOrganizationUtility_o *)gameObject, v128, 0LL);
    }
    else
    {
LABEL_198:
      AddUpValInfos = 0LL;
      v330 = 0;
    }
    codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParams = servantLeaderInfo->fields.commandCardParam;
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
    v365 = (System_Collections_Generic_IEnumerable_T__o *)AddUpValInfos;
    eventIda = QuestRestriction;
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, v7->fields.questRestrictionInfo, 0LL) )
    {
      v170 = 1;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      v171 = *(_DWORD *)(gameObject + 56);
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      if ( v171 < 1 )
        goto LABEL_235;
      if ( !v7->fields.questRestrictionInfo )
        goto LABEL_571;
      v172 = *(_DWORD *)(gameObject + 60);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_42413184(v7->fields.questRestrictionInfo, v172, 0LL) )
      {
        v173 = v7->fields.questRestrictionInfo;
        v175 = *(_QWORD *)&v359->fields.svtId.fields.currentCryptoKey;
        v174 = *(_QWORD *)&v359->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v388.fields.currentCryptoKey = v175;
        *(_QWORD *)&v388.fields.fakeValue = v174;
        v176 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v388, 0LL);
        v177 = v359->fields.limitCount;
        v178 = v176;
        gameObject = ServantLeaderInfo__getDispLimitCount(v359, 0LL);
        if ( !v173 )
          goto LABEL_571;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v173,
                                              v178,
                                              v177,
                                              gameObject,
                                              v172,
                                              1,
                                              0LL);
        v7 = v369;
        v170 = IsRestrictionServantIndividuality;
      }
      else
      {
LABEL_235:
        v170 = 0;
      }
    }
    v358 = v334 + v332;
    v180 = v333 + v331;
    v168 = v330;
    IsDataLost = ServantLeaderInfo__IsDataLost(v359, v7->fields.questRestrictionInfo, 0LL);
    TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v359, v7->fields.questRestrictionInfo, 0LL);
  }
  else
  {
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            UserServantLeaderEntity->fields.userSvtId,
                            (const MethodInfo_32B15CC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !gameObject )
      goto LABEL_571;
    v159 = gameObject;
    gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0LL, 0LL);
    lv[1] = *(_DWORD *)(v159 + 256);
    if ( !gameObject )
      goto LABEL_571;
    v160 = *(_DWORD *)(gameObject + 20);
    v161 = (_DWORD *)gameObject;
    lv[0] = v160;
    if ( v69 )
      lv[0] = LODWORD(v69[16].monitor) + v160;
    AtkBoostValue = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v159, 0LL);
    HpBoostValue = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v159, 0LL);
    v164 = v161[4];
    v335 = HpBoostValue;
    v381 = v164;
    if ( v69 )
      v381 = HIDWORD(v69[16].monitor) + v164;
    rarity = v161[6];
    v349 = v161;
    exceedCount = *(_DWORD *)(v159 + 296);
    FrameType = UserServantEntity__GetFrameType((UserServantEntity_o *)v159, v161[10], 0LL);
    limitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v159, 0, 0LL);
    UserServantEntity__getSkillInfo((UserServantEntity_o *)v159, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
    gameObject = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)v159, &tdInfo, -1, -1, 0, 0LL);
    if ( !tdInfo )
      goto LABEL_571;
    strengthStatus = tdInfo->fields.strengthStatus;
    v348 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    UserServantEntity__GetAppendPassiveSkillInfo_42173308((UserServantEntity_o *)v159, &v378, 0LL);
    IsGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)v159, 0LL);
    v358 = AtkBoostValue;
    if ( v7->fields.eventSetupInfo )
    {
      if ( v69 )
      {
        v165 = v69[2];
        *(Il2CppObject *)&v375.fields.currentCryptoKey = v69[1];
        *(Il2CppObject *)&v375.fields.fakeValue = v165;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v374 = v375;
        v166 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v374, 0LL);
      }
      else
      {
        v166 = -1LL;
      }
      gameObject = sub_1BC30B0(long___TypeInfo, 1LL);
      if ( !gameObject )
        goto LABEL_571;
      if ( !*(_DWORD *)(gameObject + 24) )
        goto LABEL_572;
      *(_QWORD *)(gameObject + 32) = v166;
      EventUpVal_42146552 = UserServantEntity__getEventUpVal_42146552(
                              (UserServantEntity_o *)v159,
                              &eventUpVallInfo,
                              v7->fields.eventSetupInfo,
                              (System_Int64_array *)gameObject,
                              0LL,
                              0LL);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      codeIdsb = FrameType;
      v182 = DataManager__GetMasterData_object_(
               (DataManager_o *)gameObject,
               (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v363 = EventUpVal_42146552;
      v183 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      eventIdb = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v184 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v184,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v185 = v7->fields.eventSetupInfo;
      if ( !v185 )
        goto LABEL_571;
      v186 = v185->fields.eventIdList;
      v342 = this;
      if ( !v186 )
        goto LABEL_571;
      v187 = *(_QWORD *)&v186->max_length;
      v188 = v366;
      if ( (int)v187 >= 1 )
      {
        v189 = 0LL;
        while ( 1 )
        {
          if ( v189 >= (unsigned int)v187 )
            goto LABEL_572;
          if ( !v182 )
            goto LABEL_571;
          v190 = v186->m_Items[v189 + 1];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v182,
                                  v190,
                                  (const MethodInfo_32AF070 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
                (gameObject & 1) == 0) )
          {
            if ( !v183 )
              goto LABEL_571;
            if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v183, v190, 0LL) )
            {
              v191 = *(_OWORD *)(v159 + 64);
              *(_OWORD *)&v375.fields.currentCryptoKey = *(_OWORD *)(v159 + 48);
              *(_OWORD *)&v375.fields.fakeValue = v191;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v373 = v375;
              v192 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v373, 0LL);
              v193 = UserServantEntity__getSvtId((UserServantEntity_o *)v159, 0LL);
              gameObject = (__int64)eventIdb;
              if ( !eventIdb )
                goto LABEL_571;
              if ( UserEventServantPointMaster__TryGetEntity(
                     (UserEventServantPointMaster_o *)eventIdb,
                     &entity,
                     v192,
                     v190,
                     v193,
                     0LL) )
              {
                gameObject = (__int64)entity;
                if ( !entity )
                  goto LABEL_571;
                BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
              }
              else
              {
                BuddyPoint = 0;
              }
              v195 = UserServantEntity__getSvtId((UserServantEntity_o *)v159, 0LL);
              v196 = EventServantPointRankMaster__GetEnableEntity(
                       (EventServantPointRankMaster_o *)v183,
                       v190,
                       BuddyPoint,
                       v195,
                       0LL);
              v197 = v196 ? v196->fields.svtPointRank : 0;
              v198 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_40736328(v198, v190, 0LL);
              if ( !v198 )
                goto LABEL_571;
              EventMargeItemUpValInfo__SetServantPointInfo(v198, BuddyPoint, v197, 0, 0LL);
              if ( !v184 )
                goto LABEL_571;
              System_Collections_Generic_List_object___Insert(
                v184,
                0,
                (Il2CppObject *)v198,
                (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              v188 = v366;
            }
            v199 = (EventPersonalMargeUpValInfo_o *)sub_1BC3254(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v199, v190, v188, 0LL);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_571;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
            if ( !v199 )
              goto LABEL_571;
            EventPersonalMargeUpValInfo__Add(v199, (EventDropItemUpValInfo_array *)gameObject, 0LL);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v199, 0LL);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v199, 0LL);
              if ( !gameObject )
                goto LABEL_571;
              v201 = *(_DWORD *)(gameObject + 24);
              v202 = gameObject;
              if ( v201 >= 1 )
                break;
            }
          }
LABEL_281:
          LODWORD(v187) = v186->max_length;
          if ( (__int64)++v189 >= (int)v187 )
            goto LABEL_282;
        }
        v203 = 0;
        while ( v203 < v201 )
        {
          v58 = *(_QWORD *)(v202 + 8LL * (int)v203 + 32);
          if ( !v58 )
            goto LABEL_571;
          if ( *(_DWORD *)(v58 + 60) != 111 )
          {
            if ( !v184 )
              goto LABEL_571;
            v204 = v184->fields._items;
            v205 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v184->fields._version;
            if ( !v204 )
              goto LABEL_571;
            v206 = v184->fields._size;
            if ( (unsigned int)v206 >= v204->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v184,
                (Il2CppObject *)v58,
                *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
            }
            else
            {
              v207 = &v204->obj.klass + v206;
              v184->fields._size = v206 + 1;
              v207[4] = (Il2CppClass *)v58;
              sub_1BC2FAC((CGThumbnailListItem_o *)(v207 + 4), v58, v93, v200);
            }
          }
          v201 = *(_DWORD *)(v202 + 24);
          if ( (int)++v203 >= v201 )
            goto LABEL_281;
        }
LABEL_572:
        sub_1BC326C(gameObject, v58, v93);
      }
LABEL_282:
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_571;
      v168 = v363;
      v365 = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                              (PartyOrganizationUtility_o *)gameObject,
                                                              (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v184,
                                                              0LL);
      this = v342;
      v7 = v369;
      FrameType = codeIdsb;
    }
    else
    {
      v365 = 0LL;
      v168 = 0;
    }
    codeIdsa = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v159, 0LL);
    eventIda = UserServantEntity__getQuestRestriction(
                 (UserServantEntity_o *)v159,
                 v7->fields.questRestrictionInfo,
                 rarity,
                 2,
                 0LL);
    UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                             (UserServantEntity_o *)v159,
                             v7->fields.questRestrictionInfo,
                             0LL);
    v208 = UserServantEntity__IsUniqueIndividualityRestriction(
             (UserServantEntity_o *)v159,
             v7->fields.questRestrictionInfo,
             0LL);
    v180 = v335;
    v170 = 0;
    IsUniqueIndividualityRestriction = v208;
    TimesToRestart = 0;
    IsDataLost = 0;
    cardParams = 0LL;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_571;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 svtId,
                 limitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_571;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0LL, 0LL);
  v209 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v209, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_571;
      ServantClassIconComponent__SetImage(
        (ServantClassIconComponent_o *)gameObject,
        classId,
        FrameType,
        0,
        IsGrandServant,
        0,
        0LL);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_571;
      ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0LL);
      v210 = this->fields.servantClassIcon;
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      }
      v211 = *(UnityEngine_Vector2_o **)(gameObject + 184);
      if ( IsGrandServant )
      {
        if ( !v210 )
          goto LABEL_571;
        ServantClassIconComponent__RePositionClassIcon(v210, v211[1], 0LL);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_571;
        static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
        x = static_fields->GrandClassNamePosition.fields.x;
        y = static_fields->GrandClassNamePosition.fields.y;
      }
      else
      {
        if ( !v210 )
          goto LABEL_571;
        ServantClassIconComponent__RePositionClassIcon(v210, *v211, 0LL);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_571;
        v215 = SupportSelectItemDraw_TypeInfo->static_fields;
        x = v215->ClassNamePosition.fields.x;
        y = v215->ClassNamePosition.fields.y;
      }
      ServantClassIconComponent__RePositionClassName(
        (ServantClassIconComponent_o *)gameObject,
        *(UnityEngine_Vector2_o *)&x,
        0LL);
    }
  }
  v216 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v216, 0LL, 0LL) )
  {
    v217 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v217 )
      goto LABEL_571;
    UILabel__set_text(v217, (System_String_o *)gameObject, 0LL);
  }
  v218 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v218, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v219 = lv[1];
    v220 = v349[10];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_39481952 = Rarity__getIcon_39481952(rarity, exceedCount, v219, v220, 0LL);
    if ( exceedCount < 1 )
    {
      v223 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_571;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v220, exceedCount, 0, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_571;
      v223 = ServantLvDetailMaster__GetRarityIcon(
               (ServantLvDetailMaster_o *)gameObject,
               v220,
               lv[1],
               RarityIcon,
               0,
               0LL);
    }
    v224 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v223 >= 3 )
    {
      AtlasManager__SetEventSprite(v224, Icon_39481952, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v224, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_571;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_39481952, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    v7 = v369;
    if ( !gameObject )
      goto LABEL_571;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v225 = exceedCount >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_571;
    v226 = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    v393.fields.x = v225;
    v393.fields.y = v226;
    v393.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v393, 0LL);
  }
  v228 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v228, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v229 = this->fields.skillListTreasureDevice;
    v230 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_40303600(v230, 0LL);
    if ( !v229 )
      goto LABEL_571;
    SkillListTreasureDeviceComponent__Set(
      v229,
      (System_String_o *)gameObject,
      v348,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v58 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v233 = *(_QWORD *)(gameObject + 16);
      v234 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v233 )
        goto LABEL_571;
      v235 = *(int *)(gameObject + 24);
      if ( (unsigned int)v235 >= *(_DWORD *)(v233 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v58,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
      }
      else
      {
        v236 = v233 + 8 * v235;
        *(_DWORD *)(gameObject + 24) = v235 + 1;
        *(_QWORD *)(v236 + 32) = v58;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v236 + 32), v58, v231, v232);
      }
    }
  }
  v237 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v237, 0LL, 0LL) )
  {
    if ( v378 && *(_QWORD *)&v378->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v238 = this->fields.appendSkillList;
      v239 = v378;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_40303600(v239, 0LL);
      if ( !v238 )
        goto LABEL_571;
      AppendSkillListComponent__Set(v238, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v58 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v242 = *(_QWORD *)(gameObject + 16);
        v243 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v242 )
          goto LABEL_571;
        v244 = *(int *)(gameObject + 24);
        if ( (unsigned int)v244 >= *(_DWORD *)(v242 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v58,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
        }
        else
        {
          v245 = v242 + 8 * v244;
          *(_DWORD *)(gameObject + 24) = v244 + 1;
          *(_QWORD *)(v245 + 32) = v58;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v245 + 32), v58, v240, v241);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0LL, 0LL) )
  {
    v247 = this->fields.switchSkillUIList;
    if ( v247 )
    {
      v248 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v247,
                              (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v248 )
        goto LABEL_571;
      SwitchUIWidgetComponent__Set(v248, (UIWidget_array *)gameObject, 0, 0LL);
    }
  }
  v249 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v249, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_571;
    if ( v7->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_40024672(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParams,
        codeIdsa,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_40024916(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIdsa,
        2,
        0,
        0LL);
  }
  v250 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v250, 0LL, 0LL) )
  {
    v251 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v358 <= 0 )
      v252 = 1.0;
    else
      v252 = 0.015686;
    if ( v358 <= 0 )
      v251 = 1.0;
    if ( !gameObject )
      goto LABEL_571;
    v253 = 1.0;
    v254 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v251 - 1), 0LL);
    v255 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_63857360((int32_t)lv, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
    if ( !v255 )
      goto LABEL_571;
    UILabel__set_text(v255, (System_String_o *)gameObject, 0LL);
  }
  v256 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v256, 0LL, 0LL) )
  {
    v257 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( v180 <= 0 )
      v258 = 1.0;
    else
      v258 = 0.015686;
    if ( v180 <= 0 )
      v257 = 1.0;
    if ( !gameObject )
      goto LABEL_571;
    v259 = 1.0;
    v260 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v257 - 1), 0LL);
    v261 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_63857360((int32_t)&v381, (System_String_o *)StringLiteral_395/*"#,0"*/, 0LL);
    if ( !v261 )
      goto LABEL_571;
    UILabel__set_text(v261, (System_String_o *)gameObject, 0LL);
  }
  v262 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v262, 0LL, 0LL) )
  {
    v263 = this->fields.baseSprite;
    v264 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v263, FrameType, v264, 0, IsGrandServant, 0LL);
  }
  v265 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v265, 0LL, 0LL) )
  {
    v266 = this->fields.base2Sprite;
    v267 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v266, FrameType, v267, 0, IsGrandServant, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_571;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v170 | eventIda) & 1) != 0 )
  {
    v269 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v269, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v270 = LocalizationManager__Get((System_String_o *)StringLiteral_10176/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_428;
  }
  if ( !v7->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v366, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_39466584(126, 0LL) )
    {
      v275 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v275, 0LL, 0LL) )
        goto LABEL_459;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_571;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_571;
      v276 = 1;
LABEL_458:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v276, 0LL);
LABEL_459:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v58);
      goto LABEL_460;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v274 = 1;
      v273 = this;
      v272 = 0;
      v271 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_429;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v279 = LocalizationManager__Get((System_String_o *)StringLiteral_11431/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v375.fields.currentCryptoKey) = TimesToRestart;
      v283 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v375, v280, v281, v282);
      v270 = System_String__Format(v279, v283, 0LL);
LABEL_428:
      v271 = v270;
      v272 = 1;
      v273 = this;
      v274 = 0;
LABEL_429:
      SupportSelectItemDraw__SetMaskMessage(v273, v271, v272, v274, v268);
      goto LABEL_460;
    }
    v284 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v284, 0LL, 0LL) )
      goto LABEL_459;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_571;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_571;
    v276 = 0;
    goto LABEL_458;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v277 = LocalizationManager__Get((System_String_o *)StringLiteral_6404/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v277, 1, v278);
LABEL_460:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v286 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v286, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_571;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
    }
  }
  v148 = (System_Object_array *)v365;
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0LL, 0LL);
  v129 = 0;
  v149 = v168 != 0;
  if ( !eventFriendPoints )
    goto LABEL_489;
  v69 = v352;
  if ( (gameObject & 1) == 0 )
    goto LABEL_490;
  max_length = eventFriendPoints->max_length;
  if ( max_length < 1 )
    goto LABEL_569;
  v289 = 0LL;
  v290 = 0;
  value = 0;
  m_Items = eventFriendPoints->m_Items;
  do
  {
    if ( (unsigned int)v289 >= max_length )
      goto LABEL_572;
    v293 = m_Items[v289];
    if ( !v293 )
      goto LABEL_571;
    gameObject = System_Array__IndexOf_int_(
                   v293->fields.targetIds,
                   svtId,
                   (const MethodInfo_31002A8 *)Method_System_Array_IndexOf_int___);
    max_length = eventFriendPoints->max_length;
    if ( (unsigned int)v289 >= max_length )
      goto LABEL_572;
    v294 = m_Items[v289];
    if ( !v294 )
      goto LABEL_571;
    targetIds = v294->fields.targetIds;
    if ( targetIds )
      v296 = targetIds->max_length == 0;
    else
      v296 = 1;
    if ( (v296 || (int)gameObject >= 0) && value < v294->fields.value )
    {
      v290 = v294->fields.eventId;
      value = v294->fields.value;
    }
    ++v289;
  }
  while ( (int)v289 < max_length );
  if ( value < 1 )
  {
    v7 = v369;
    v129 = 0;
LABEL_489:
    v69 = v352;
LABEL_490:
    if ( v69 )
      goto LABEL_491;
    goto LABEL_184;
  }
  v297 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  v298 = v297;
  if ( v365 )
    System_Collections_Generic_List_object____ctor_57280308(
      v297,
      v365,
      (const MethodInfo_36A0734 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76754552);
  else
    System_Collections_Generic_List_object____ctor(
      v297,
      (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v323 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor_40736248(v323, v290, value, 0LL);
  if ( !v298 )
    goto LABEL_571;
  v326 = v298->fields._items;
  v7 = v369;
  v327 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  v69 = v352;
  ++v298->fields._version;
  if ( !v326 )
    goto LABEL_571;
  v328 = v298->fields._size;
  if ( (unsigned int)v328 >= v326->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v298,
      (Il2CppObject *)v323,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v327[4] + 192LL) + 112LL));
  }
  else
  {
    v329 = &v326->obj.klass + v328;
    v298->fields._size = v328 + 1;
    v329[4] = (Il2CppClass *)v323;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v329 + 4), (int32_t)v323, v324, v325);
  }
  v148 = System_Collections_Generic_List_object___ToArray(
           v298,
           (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
LABEL_569:
  v129 = 0;
  if ( !v69 )
    goto LABEL_184;
LABEL_491:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_571;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_571;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_571;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v299 = (UISprite_o *)this->fields.equipSprite;
  v301 = v69[5].klass;
  v300 = v69[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v389.fields.currentCryptoKey = v301;
  *(_QWORD *)&v389.fields.fakeValue = v300;
  v302 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v389, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v299, v302, 0LL, 0LL);
  v303 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  v7 = v369;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v303, 0LL, 0LL) )
  {
    v305 = v69[6].klass;
    v304 = v69[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v390.fields.currentCryptoKey = v305;
    *(_QWORD *)&v390.fields.fakeValue = v304;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v390, 0LL);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_571;
    v157 = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_506:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( v157 >= 4 )
    {
      if ( !v355 )
        goto LABEL_571;
      v58 = SLODWORD(v355[5].monitor) >= v157;
    }
    else
    {
      v58 = 0LL;
    }
    if ( gameObject )
    {
LABEL_511:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v58, 0LL);
      goto LABEL_512;
    }
LABEL_571:
    sub_1BC3264(gameObject, v58);
  }
LABEL_512:
  v306 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v306, 0LL, 0LL) )
  {
    if ( v7->fields.isFriendInfo )
    {
      if ( (v129 & 1) == 0 )
      {
        v307 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v307 )
        {
          v309 = *(_QWORD *)&v307->fields.svtId.fields.currentCryptoKey;
          v308 = *(_QWORD *)&v307->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v391.fields.currentCryptoKey = v309;
          *(_QWORD *)&v391.fields.fakeValue = v308;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v391, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_571;
          v310 = gameObject;
          v311 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_533:
          v317 = v311;
          goto LABEL_535;
        }
      }
    }
    else if ( (v129 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v316 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v315 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v392.fields.currentCryptoKey = v316;
        *(_QWORD *)&v392.fields.fakeValue = v315;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v392, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_571;
        v310 = gameObject;
        v311 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_533;
      }
    }
    v317 = -1;
    v310 = -1;
LABEL_535:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_571;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v148,
      v310,
      v317,
      equipSvtId,
      0LL);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0LL, 0LL) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_571;
      v313 = 0;
      goto LABEL_544;
    }
    goto LABEL_545;
  }
  v312 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v312, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_571;
    v313 = v149;
LABEL_544:
    ShiningIconComponent__Set_40053096((ShiningIconComponent_o *)gameObject, v313, 0LL);
  }
LABEL_545:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_571;
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
        pushUserServantId = v7->fields.pushUserServantId;
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
    goto LABEL_571;
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

  if ( (byte_4AFE6B2 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, message);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&SupportSelectItemDraw_TypeInfo, v10);
    sub_1BC3008(&StringLiteral_20199/*"img_frames_mask05"*/, v11);
    sub_1BC3008(&StringLiteral_18311/*"datalost_party_edit"*/, v12);
    sub_1BC3008(&StringLiteral_1/*""*/, v13);
    byte_4AFE6B2 = 1;
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
      AtlasManager__SetPartyOrganizationImage(v17, (System_String_o *)StringLiteral_18311/*"datalost_party_edit"*/, 0LL);
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
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20199/*"img_frames_mask05"*/, 0LL);
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
        if ( !byte_4AFBDB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4AFBDB6 = 1;
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
      if ( !byte_4AFBDB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v15);
        byte_4AFBDB6 = 1;
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
    sub_1BC3264(gameObject, v15);
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

  if ( (byte_4AFE6B3 & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, message);
    sub_1BC3008(&StringLiteral_1/*""*/, v7);
    byte_4AFE6B3 = 1;
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
        if ( !byte_4AFBDB6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v9);
          byte_4AFBDB6 = 1;
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
      if ( !byte_4AFBDB6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1BC3008(&UnityEngine_Vector3_TypeInfo, v9);
        byte_4AFBDB6 = 1;
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
    sub_1BC3264(gameObject, v9);
  }
}


void __fastcall SupportSelectItemDraw___c__DisplayClass56_0___ctor(
        SupportSelectItemDraw___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SupportSelectItemDraw___c__DisplayClass56_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass56_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  SupportSelectItemDraw___c__DisplayClass56_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4AFE6B8 & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass56_0_o *)sub_1BC3008(
                                                              &Method_System_Linq_Enumerable_Contains_int___,
                                                              *(_QWORD *)&individuality);
    byte_4AFE6B8 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1BC3264(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_301AE3C *)Method_System_Linq_Enumerable_Contains_int___);
}