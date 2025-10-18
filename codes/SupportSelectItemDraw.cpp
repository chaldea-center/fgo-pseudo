void SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  SupportSelectItemDraw_c *v1; // x8
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  SupportSelectItemDraw_c *v34; // x8
  struct SupportSelectItemDraw_StaticFields *v35; // x8

  if ( (byte_4C3F646 & 1) == 0 )
  {
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&SupportSelectItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_20147/*"icon_class1002"*/);
    sub_1C37058(&StringLiteral_20145/*"icon_class007"*/);
    sub_1C37058(&StringLiteral_20144/*"icon_class006"*/);
    sub_1C37058(&StringLiteral_20142/*"icon_class004"*/);
    sub_1C37058(&StringLiteral_20139/*"icon_class001"*/);
    sub_1C37058(&StringLiteral_20146/*"icon_class1001"*/);
    sub_1C37058(&StringLiteral_20140/*"icon_class002"*/);
    sub_1C37058(&StringLiteral_20143/*"icon_class005"*/);
    sub_1C37058(&StringLiteral_20141/*"icon_class003"*/);
    byte_4C3F646 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v2 = sub_1C37100(string___TypeInfo, 9);
  if ( !v2 )
    sub_1C372B4(0);
  v5 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_14;
  v6 = StringLiteral_20146/*"icon_class1001"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_20146/*"icon_class1001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v2 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_14;
  v9 = StringLiteral_20139/*"icon_class001"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_20139/*"icon_class001"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), v9, v7, v8);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_14;
  v12 = StringLiteral_20140/*"icon_class002"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_20140/*"icon_class002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 48), v12, v10, v11);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_14;
  v15 = StringLiteral_20141/*"icon_class003"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_20141/*"icon_class003"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 56), v15, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_14;
  v18 = StringLiteral_20142/*"icon_class004"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_20142/*"icon_class004"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 64), v18, v16, v17);
  if ( *(_DWORD *)(v5 + 24) <= 5u )
    goto LABEL_14;
  v21 = StringLiteral_20143/*"icon_class005"*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_20143/*"icon_class005"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 72), v21, v19, v20);
  if ( *(_DWORD *)(v5 + 24) <= 6u
    || (v24 = StringLiteral_20144/*"icon_class006"*/,
        *(_QWORD *)(v5 + 80) = StringLiteral_20144/*"icon_class006"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 80), v24, v22, v23),
        *(_DWORD *)(v5 + 24) <= 7u)
    || (v27 = StringLiteral_20145/*"icon_class007"*/,
        *(_QWORD *)(v5 + 88) = StringLiteral_20145/*"icon_class007"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 88), v27, v25, v26),
        *(_DWORD *)(v5 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C372BC(v2);
  }
  v30 = StringLiteral_20147/*"icon_class1002"*/;
  *(_QWORD *)(v5 + 96) = StringLiteral_20147/*"icon_class1002"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 96), v30, v28, v29);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->backClassIconFileList, v5, v32, v33);
  v34 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_C0E860;
  v35 = v34->static_fields;
  v35->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&v35->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v35->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  System_Collections_IEnumerator_c *v9; // x8
  __int64 v10; // x9
  System_Collections_IEnumerator_c **v11; // x10
  __int64 v12; // x0
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Component_o *v14; // x21
  __int64 naturalAligment; // x9
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v18; // x23
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C3F645 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Transform_TypeInfo);
    byte_4C3F645 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v6 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_9;
      }
      v8 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v8 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v8)(Enumerator, *(_QWORD *)(v8 + 8)) & 1) == 0 )
      break;
    v9 = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v11 = (System_Collections_IEnumerator_c **)&v9->_1.interfaceOffsets->offset;
      while ( *(v11 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        v11 += 2;
        if ( !v10 )
          goto LABEL_16;
      }
      v12 = (__int64)&v9->vtable[*(_DWORD *)v11 + 1];
    }
    else
    {
LABEL_16:
      v12 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v13 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(
                                       Enumerator,
                                       *(_QWORD *)(v12 + 8));
    v14 = v13;
    if ( !v13 )
      goto LABEL_37;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v13->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v13->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C37574(v13);
LABEL_37:
      sub_1C372B4(v13);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C372B4(0);
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v18, 0) )
    {
      v19 = UnityEngine_Component__get_gameObject(v14, 0);
      if ( !v19 )
        sub_1C372B4(0);
      UnityEngine_GameObject__SetActive(v19, 0, 0);
    }
  }
  v20 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_32;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_32:
      v25 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}


void SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *v9; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UISprite_o *v13; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *sortieMaskSprite; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UISprite_o *v18; // x8
  struct UIAtlas_o *v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct UISprite_o *v22; // x8
  struct System_String_o *v23; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct UISprite_o *v27; // x8
  struct UIAtlas_o *v28; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x3
  struct UISprite_o *v32; // x8
  struct UIAtlas_o *v33; // x1
  System_Collections_Generic_List_object__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F63D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C37058(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F63D = 1;
  }
  raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
  {
    transform = this->fields.raritySprite;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.baseRarityPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    transform = this->fields.restrictionWarningMessageLabel;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionWarningBase;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionWarningCenter = UnityEngine_Transform__get_localPosition(
                                              (UnityEngine_Transform_o *)transform,
                                              0);
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    this->fields.restrictionMaskMessageWidth = *((_DWORD *)transform + 42);
    UIWidget__set_width((UIWidget_o *)transform, 1000, 0);
    transform = this->fields.restrictionMaskMessageText;
    if ( !transform )
      goto LABEL_46;
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    v9 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v9 )
      goto LABEL_46;
    mSpriteName = v9->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultSpriteName, (int32_t)mSpriteName, v7, v8);
    v13 = this->fields.restrictionMaskSprite;
    if ( !v13 )
      goto LABEL_46;
    mAtlas = v13->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v11, v12);
    transform = this->fields.restrictionMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.maskSpriteDefaultWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.maskSpriteDefaultPosition = UnityEngine_Transform__get_localPosition(
                                               (UnityEngine_Transform_o *)transform,
                                               0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v18 = this->fields.sortieMaskSprite;
    if ( !v18 )
      goto LABEL_46;
    v19 = v18->fields.mAtlas;
    this->fields.defaultSortieMaskAtlas = v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultSortieMaskAtlas, (int32_t)v19, v16, v17);
    v22 = this->fields.sortieMaskSprite;
    if ( !v22 )
      goto LABEL_46;
    v23 = v22->fields.mSpriteName;
    this->fields.defaultSortieMaskSpriteName = v23;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultSortieMaskSpriteName, (int32_t)v23, v20, v21);
    transform = this->fields.sortieMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.defaultSortieMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    v38 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultSortieMaskPosition.fields.x = v38.fields.x;
    this->fields.defaultSortieMaskPosition.fields.y = v38.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v27 = this->fields.baseSprite;
    if ( !v27 )
      goto LABEL_46;
    v28 = v27->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v28;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v28, v25, v26);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v32 = this->fields.base2Sprite;
    if ( v32 )
    {
      v33 = v32->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v33;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v33, (int32_t)v30, v31);
      goto LABEL_45;
    }
LABEL_46:
    sub_1C372B4(transform);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v30);
  v34 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v34,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v34, v35, v36);
}


void SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20
  const MethodInfo *v6; // x1

  if ( (byte_4C3F63E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F63E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.servantNarrowTexture;
  if ( !gameObject )
    goto LABEL_20;
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)gameObject, 0);
  noneEquipSprite = (UnityEngine_Object_o *)this->fields.noneEquipSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noneEquipSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.equipSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.sortieMaskSprite;
    if ( gameObject )
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        goto LABEL_19;
      }
    }
LABEL_20:
    sub_1C372B4(gameObject);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v6);
}


void SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C3F640 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F640 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_18;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_1C372B4(gameObject);
  }
}


void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_4C3F643 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F643 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v6 = this->fields.dragSwapGuideObj;
    if ( !v6 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v6, flag, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetEquipAlpha(SupportSelectItemDraw_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  struct UIWidget_o *v6; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4C3F644 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3F644 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v6 = this->fields.equipRootObj;
    if ( !v6 )
      sub_1C372B4(0);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v6->klass->vtable._8_set_alpha.methodPtr)(
      v6,
      v6->klass->vtable._8_set_alpha.method,
      v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v13; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x27
  struct EquipTargetInfo_o *equipTarget1; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x19
  __int64 v19; // x20
  __int64 v20; // x21
  Il2CppObject *v21; // x28
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t svtId; // w22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x24
  int32_t v28; // w8
  int v29; // w8
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_43487304; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v34; // x23
  Il2CppObject *v35; // x26
  System_Collections_Generic_List_object__o *v36; // x27
  struct EventUpValSetupInfo_o *v37; // x8
  struct System_Int32_array *v38; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v40; // x22
  int32_t eventSvtPoint; // w19
  __int64 v42; // x20
  __int64 v43; // x25
  int32_t v44; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v47; // x20
  EventPersonalMargeUpValInfo_o *v48; // x19
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x8
  __int64 v52; // x29
  unsigned __int64 v53; // x28
  Il2CppObject *v54; // x25
  __int64 v55; // x20
  _DWORD *v56; // x8
  int v57; // w8
  __int64 v58; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v60; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Func_int__bool__o *v64; // x21
  System_Func_TSource__bool__o *v65; // x1
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  struct QuestRestrictionInfo_o *v70; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v72; // x1
  char v73; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v75; // x8
  UnityEngine_Object_o *v76; // x19
  UISprite_o *v77; // x19
  UIAtlas_o *v78; // x20
  UnityEngine_Object_o *v79; // x19
  UISprite_o *v80; // x19
  UIAtlas_o *v81; // x20
  UnityEngine_Object_o *v82; // x19
  UnityEngine_Object_o *v83; // x19
  UnityEngine_Object_o *v84; // x19
  UnityEngine_Object_o *v85; // x19
  UnityEngine_Object_o *v86; // x19
  UnityEngine_Object_o *v87; // x19
  const MethodInfo *v88; // x1
  UnityEngine_Object_o *v89; // x19
  UnityEngine_Object_o *v90; // x19
  UnityEngine_Object_o *v91; // x19
  UnityEngine_Object_o *v92; // x19
  System_Object_array *v93; // x29
  bool v94; // w22
  UISprite_o *v95; // x19
  void *v96; // x20
  Il2CppClass *v97; // x21
  int32_t v98; // w20
  UnityEngine_Object_o *v99; // x19
  void *v100; // x19
  Il2CppClass *v101; // x20
  int v102; // w19
  UserServantEntity_o *v103; // x22
  int32_t v104; // w8
  int v105; // w8
  int32_t v106; // w20
  int32_t v107; // w23
  Il2CppObject v108; // q1
  int64_t v109; // x19
  int v110; // w23
  ServantLeaderInfo_o *v111; // x19
  _BOOL4 UniqueSvtRestriction; // w24
  int v113; // w19
  int v114; // w20
  int32_t v115; // w20
  QuestRestrictionInfo_o *v116; // x19
  __int64 v117; // x21
  __int64 v118; // x22
  int32_t v119; // w0
  int32_t v120; // w21
  int32_t v121; // w22
  _BOOL4 IsRestrictionServantIndividuality; // w0
  bool EventUpVal_43172176; // w19
  Il2CppObject *v124; // x23
  Il2CppObject *v125; // x27
  Il2CppObject *v126; // x25
  System_Collections_Generic_List_object__o *v127; // x26
  struct EventUpValSetupInfo_o *v128; // x8
  struct System_Int32_array *v129; // x29
  il2cpp_array_size_t v130; // x8
  unsigned __int64 v131; // x21
  int32_t v132; // w24
  System_Collections_Generic_IEnumerable_T__o v133; // q0
  int64_t v134; // x19
  int32_t BuddyPoint; // w20
  Il2CppObject *v136; // x22
  int32_t v137; // w0
  EventServantPointRankEntity_o *v138; // x0
  int32_t v139; // w25
  EventMargeItemUpValInfo_o *v140; // x19
  EventPersonalMargeUpValInfo_o *v141; // x19
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  int v144; // w8
  __int64 v145; // x20
  unsigned int v146; // w19
  __int64 v147; // x1
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  _BOOL4 v152; // w0
  UnityEngine_Object_o *servantClassIcon; // x19
  _BOOL4 isGrandServant; // w20
  ServantClassIconComponent_o *v155; // x19
  UnityEngine_Vector2_o *v156; // x8
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  struct SupportSelectItemDraw_StaticFields *v160; // x8
  UnityEngine_Object_o *levelLabel; // x19
  UILabel_o *v162; // x19
  UnityEngine_Object_o *raritySprite; // x19
  int32_t v164; // w19
  int32_t v165; // w20
  System_String_o *Icon_40443180; // x21
  int32_t RarityIcon; // w19
  int32_t v168; // w19
  UISprite_o *v169; // x20
  float v170; // s8
  float v171; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  SkillListTreasureDeviceComponent_o *v174; // x19
  SkillInfo_array *v175; // x20
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  Il2CppObject *v178; // x1
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x8
  UnityEngine_Object_o *appendSkillList; // x19
  AppendSkillListComponent_o *v184; // x19
  SkillInfo_array *v185; // x20
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  Il2CppObject *v188; // x1
  __int64 v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v194; // x0
  SwitchUIWidgetComponent_o *v195; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *attackLabel; // x19
  float v198; // s1 OVERLAPPED
  float v199; // s2
  float v200; // s0
  float v201; // s3
  UILabel_o *v202; // x19
  UnityEngine_Object_o *hpLabel; // x19
  float v204; // s1 OVERLAPPED
  float v205; // s2
  float v206; // s0
  float v207; // s3
  UILabel_o *v208; // x19
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v210; // x20
  UIAtlas_o *baseDefaultUIAtlas; // x19
  _BOOL4 v212; // w21
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v214; // x20
  UIAtlas_o *base2DefaultUIAtlas; // x19
  _BOOL4 v216; // w21
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  _BOOL4 v218; // w22
  UISprite_o *v219; // x21
  UIAtlas_o *maskSpriteDefaultAtlas; // x19
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIWidget_o *v222; // x19
  float v223; // s2 OVERLAPPED
  struct SupportSelectItemDraw_StaticFields *v224; // x9
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x9
  int v227; // s1
  float v228; // s0
  UnityEngine_Object_o *sortieMaskSprite; // x19
  const MethodInfo *v230; // x4
  _BOOL4 v231; // w22
  UISprite_o *v232; // x21
  UIAtlas_o *defaultSortieMaskAtlas; // x19
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIWidget_o *v235; // x19
  struct SupportSelectItemDraw_StaticFields *v236; // x9
  float *v237; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v239; // x19
  System_String_o *v240; // x0
  System_String_o *v241; // x1
  bool v242; // w2
  SupportSelectItemDraw_o *v243; // x0
  bool v244; // w3
  UnityEngine_Object_o *v245; // x19
  const MethodInfo *v246; // x1
  bool v247; // w1
  System_String_o *v248; // x0
  const MethodInfo *v249; // x3
  System_String_o *v250; // x19
  __int64 v251; // x2
  __int64 v252; // x3
  __int64 v253; // x4
  __int64 v254; // x5
  __int64 v255; // x6
  __int64 v256; // x7
  Il2CppObject *v257; // x0
  UnityEngine_Object_o *v258; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v262; // w8
  __int64 v263; // x19
  int32_t v264; // w21
  int32_t v265; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v267; // x8
  EventCampaignEntity_o *v268; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v270; // w10
  System_Collections_Generic_List_object__o *v271; // x0
  System_Collections_Generic_List_object__o *v272; // x20
  UISprite_o *equipSprite; // x19
  __int64 v274; // x20
  __int64 v275; // x21
  int32_t v276; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v278; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  bool v280; // w1
  UnityEngine_Object_o *v281; // x19
  struct ServantLeaderInfo_o *v282; // x8
  __int64 v283; // x19
  __int64 v284; // x20
  int32_t v285; // w20
  int32_t v286; // w0
  UnityEngine_Object_o *v287; // x19
  bool v288; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v290; // x19
  __int64 v291; // x20
  int32_t v292; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  UnityEngine_Object_o *v298; // x19
  EventMargeItemUpValInfo_o *v299; // x19
  int32_t v300; // w2
  const MethodInfo *v301; // x3
  struct System_Object_array *v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  Il2CppClass **v305; // x0
  bool v306; // [xsp+14h] [xbp-1DCh]
  int32_t AddedHp; // [xsp+18h] [xbp-1D8h]
  int32_t AddedAtk; // [xsp+1Ch] [xbp-1D4h]
  int32_t adjustHp; // [xsp+20h] [xbp-1D0h]
  int32_t classId; // [xsp+24h] [xbp-1CCh]
  System_Int32_array *cardParams; // [xsp+28h] [xbp-1C8h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+34h] [xbp-1BCh]
  UserServantLeaderEntity_o *v313; // [xsp+38h] [xbp-1B8h]
  UserServantLeaderEntity_o *v314; // [xsp+38h] [xbp-1B8h]
  SupportSelectItemDraw_o *codeIds; // [xsp+40h] [xbp-1B0h]
  System_Int32_array *codeIdsa; // [xsp+40h] [xbp-1B0h]
  SupportSelectItemDraw_o *codeIdsb; // [xsp+40h] [xbp-1B0h]
  int32_t adjustAtk; // [xsp+48h] [xbp-1A8h]
  int32_t HpBoostValue; // [xsp+48h] [xbp-1A8h]
  int32_t treasureDeviceNum; // [xsp+4Ch] [xbp-1A4h]
  int32_t strengthStatus; // [xsp+50h] [xbp-1A0h]
  int32_t v322; // [xsp+54h] [xbp-19Ch]
  int32_t rarity; // [xsp+58h] [xbp-198h]
  int32_t limitCount; // [xsp+5Ch] [xbp-194h]
  int32_t frameType; // [xsp+60h] [xbp-190h]
  int exceedCount; // [xsp+64h] [xbp-18Ch]
  _DWORD *v327; // [xsp+68h] [xbp-188h]
  Il2CppObject *v328; // [xsp+70h] [xbp-180h]
  EventServantPointRankMaster_o *v329; // [xsp+78h] [xbp-178h]
  int32_t AtkBoostValue; // [xsp+78h] [xbp-178h]
  struct EquipTargetInfo_o *v331; // [xsp+80h] [xbp-170h]
  ServantLeaderInfo_o *v332; // [xsp+88h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+88h] [xbp-168h]
  struct System_Int32_array *v334; // [xsp+90h] [xbp-160h]
  bool IsDataLost; // [xsp+90h] [xbp-160h]
  bool v336; // [xsp+90h] [xbp-160h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectiona; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectionb; // [xsp+98h] [xbp-158h]
  EventCampaignEntity_array *v340; // [xsp+A0h] [xbp-150h]
  EventCampaignEntity_array *v341; // [xsp+A0h] [xbp-150h]
  Il2CppObject *v342; // [xsp+A8h] [xbp-148h]
  int v343; // [xsp+A8h] [xbp-148h]
  ServantEntity_o *servantEntity; // [xsp+B0h] [xbp-140h]
  int32_t value; // [xsp+BCh] [xbp-134h]
  SupportServantData_o *v346; // [xsp+C0h] [xbp-130h]
  int32_t eventId; // [xsp+C8h] [xbp-128h]
  _BOOL4 eventIda; // [xsp+C8h] [xbp-128h]
  UserServantEntity_o *eventIdb; // [xsp+C8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v350; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v351; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v352; // [xsp+110h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+138h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+144h] [xbp-ACh] BYREF
  SkillInfo_array *v355; // [xsp+148h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+150h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+158h] [xbp-98h] BYREF
  int v358; // [xsp+164h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+168h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+178h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v361; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v362; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v363; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v364; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v365; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v366; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v367; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v368; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v369; // 0:x0.16
  UnityEngine_Vector3_o v370; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v371; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F63F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_int___);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int____78145032);
    sub_1C37058(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C37058(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C37058(&System_Func_int__bool__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78049648);
    sub_1C37058(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&Rarity_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C37058(&SupportSelectItemDraw_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_1C37058(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_1C37058(&StringLiteral_11547/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C37058(&StringLiteral_10265/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C37058(&StringLiteral_6458/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C37058(&StringLiteral_397/*"#,0"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F63F = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v358 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v355 = 0;
  isDuplicate = 0;
  entity = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_608;
  size = switchSkillUIList->fields._size;
  v13 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0);
  skillInfoUiWidget = (UnityEngine_Object_o *)this->fields.skillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(skillInfoUiWidget, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_608;
    (*(void (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
      0.0);
  }
  appendSkillInfoUiWidget = (UnityEngine_Object_o *)this->fields.appendSkillInfoUiWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(appendSkillInfoUiWidget, 0, 0);
  if ( (gameObject & 1) != 0 )
  {
    gameObject = (__int64)this->fields.appendSkillInfoUiWidget;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_608;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0);
  eventUpVallInfo = 0;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
  v346 = supportServantData;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_608;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_608;
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v361.fields.currentCryptoKey = v20;
      *(_QWORD *)&v361.fields.fakeValue = v19;
      v331 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v361, 0);
      if ( !v18 )
        goto LABEL_608;
      supportServantData = v346;
      v21 = 0;
      v328 = DataMasterBase_object__object__int___GetEntity(
               v18,
               gameObject,
               (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_608;
    v21 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v21 )
      goto LABEL_608;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v21[5].klass;
    monitor = v21[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v362.fields.currentCryptoKey = klass;
    *(_QWORD *)&v362.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v362, 0);
    if ( !v23 )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v23,
                            gameObject,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    supportServantData = v346;
  }
  else
  {
    v21 = 0;
  }
  v331 = 0;
  v328 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v73 = 1;
    goto LABEL_109;
  }
LABEL_37:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            svtId,
                            (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_608;
    v342 = v21;
    servantEntity = (ServantEntity_o *)gameObject;
    value = svtId;
    classId = *(_DWORD *)(gameObject + 80);
    if ( supportServantData->fields.isFriendInfo )
    {
      servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
      if ( !servantLeaderInfo )
        goto LABEL_608;
      ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
      gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
      lv[1] = servantLeaderInfo->fields.lv;
      if ( !gameObject )
        goto LABEL_608;
      v28 = *(_DWORD *)(gameObject + 20);
      v327 = (_DWORD *)gameObject;
      lv[0] = v28;
      if ( v331 )
        lv[0] = v331->fields.atk + v28;
      adjustAtk = servantLeaderInfo->fields.adjustAtk;
      gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( !gameObject )
        goto LABEL_608;
      AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0);
      adjustHp = servantLeaderInfo->fields.adjustHp;
      gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
      if ( !gameObject )
        goto LABEL_608;
      AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0);
      v29 = v327[4];
      v358 = v29;
      if ( v331 )
        v358 = v331->fields.hp + v29;
      rarity = v327[6];
      exceedCount = servantLeaderInfo->fields.exceedCount;
      frameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v327[10], 0);
      limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0);
      gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_608;
      strengthStatus = tdInfo->fields.strengthStatus;
      v322 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_43499912(servantLeaderInfo, &v355, 0, 0);
      gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
      this->fields.isGrandServant = gameObject & 1;
      eventSetupInfo = supportServantData->fields.eventSetupInfo;
      v332 = servantLeaderInfo;
      if ( !eventSetupInfo )
        goto LABEL_199;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_608;
      if ( eventIdList->max_length )
      {
        v313 = UserServantLeaderEntity;
        codeIds = this;
        EventUpVal_43487304 = ServantLeaderInfo__getEventUpVal_43487304(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventDetailMaster___);
        v329 = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v34 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FunctionMaster___);
        v35 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        v36 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v36,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v37 = supportServantData->fields.eventSetupInfo;
        if ( !v37 )
          goto LABEL_608;
        v38 = v37->fields.eventIdList;
        v306 = EventUpVal_43487304;
        if ( !v38 )
          goto LABEL_608;
        max_length = v38->max_length;
        if ( (int)max_length >= 1 )
        {
          v40 = 0;
          collection = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
          v340 = eventFriendPoints;
          v334 = v38;
          while ( 1 )
          {
            if ( v40 >= (unsigned int)max_length )
              goto LABEL_609;
            if ( !Master_object )
              goto LABEL_608;
            eventId = v38->m_Items[v40];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    eventId,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v329 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent(v329, eventId, 0) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v43 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v42 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v363.fields.currentCryptoKey = v43;
                *(_QWORD *)&v363.fields.fakeValue = v42;
                v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v363, 0);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v329, eventId, eventSvtPoint, v44, 0);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v47 = (EventMargeItemUpValInfo_o *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41718176(v47, eventId, 0);
                if ( !v47 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v47,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0);
                if ( !v36 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v36,
                  0,
                  (Il2CppObject *)v47,
                  (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v48 = (EventPersonalMargeUpValInfo_o *)sub_1C372A4(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v48, eventId, servantEntity, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_608;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v48 )
                goto LABEL_608;
              EventPersonalMargeUpValInfo__Add(v48, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v48, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v48, 0);
                if ( !gameObject )
                  goto LABEL_608;
                v51 = *(_QWORD *)(gameObject + 24);
                v52 = gameObject;
                if ( (int)v51 >= 1 )
                  break;
              }
            }
LABEL_102:
            v38 = v334;
            Master_object = (Il2CppObject *)collection;
            eventFriendPoints = v340;
            v21 = v342;
            ++v40;
            LODWORD(max_length) = v334->max_length;
            if ( (__int64)v40 >= (int)max_length )
              goto LABEL_103;
          }
          v53 = 0;
          while ( v53 < (unsigned int)v51 )
          {
            v54 = *(Il2CppObject **)(v52 + 32 + 8 * v53);
            if ( !supportServantData->fields.questRestrictionInfo )
              goto LABEL_612;
            v55 = sub_1C372A4(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v55, 0);
            if ( !v54 )
              goto LABEL_608;
            v56 = v54[2].monitor;
            if ( !v56 )
              goto LABEL_608;
            if ( !v34 )
              goto LABEL_608;
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v34,
                                    v56[4],
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
            if ( !gameObject )
              goto LABEL_608;
            v57 = *(_DWORD *)(gameObject + 24);
            v58 = gameObject;
            if ( v57 == 1 || v57 == 16 )
              goto LABEL_613;
            questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              goto LABEL_608;
            if ( eventId == questRestrictionInfo->fields.eventId )
            {
LABEL_613:
              v60 = supportServantData->fields.questRestrictionInfo;
              if ( !v60 )
                goto LABEL_608;
              if ( !v35 )
                goto LABEL_608;
              gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                      (QuestPhaseMaster_o *)v35,
                                      v60->fields.questId,
                                      v60->fields.questPhase,
                                      0);
              if ( !v55 )
                goto LABEL_608;
              *(_QWORD *)(v55 + 16) = gameObject;
              sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 16), gameObject, v61, v62);
              v63 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v58 + 80);
              if ( !v63 )
                goto LABEL_608;
              if ( !v63[1].monitor
                || (v64 = (System_Func_int__bool__o *)sub_1C372A4(System_Func_int__bool__TypeInfo),
                    System_Func_int__bool____ctor(
                      v64,
                      (Il2CppObject *)v55,
                      Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                      0),
                    v65 = (System_Func_TSource__bool__o *)v64,
                    supportServantData = v346,
                    gameObject = System_Linq_Enumerable__Any_int__51336052(
                                   v63,
                                   v65,
                                   (const MethodInfo_30F5374 *)Method_System_Linq_Enumerable_Any_int____78145032),
                    (gameObject & 1) != 0) )
              {
LABEL_612:
                if ( !v36 )
                  goto LABEL_608;
                items = v36->fields._items;
                v67 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v36->fields._version;
                if ( !items )
                  goto LABEL_608;
                v68 = v36->fields._size;
                if ( (unsigned int)v68 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v36,
                    v54,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
                }
                else
                {
                  v69 = &items->obj.klass + v68;
                  v36->fields._size = v68 + 1;
                  v69[4] = (Il2CppClass *)v54;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)v54, v49, v50);
                }
              }
            }
            LODWORD(v51) = *(_DWORD *)(v52 + 24);
            if ( (__int64)++v53 >= (int)v51 )
              goto LABEL_102;
          }
          goto LABEL_609;
        }
LABEL_103:
        v70 = supportServantData->fields.questRestrictionInfo;
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        svtId = value;
        if ( v70 )
        {
          AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                   (PartyOrganizationUtility_o *)gameObject,
                                   &isDuplicate,
                                   (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v36,
                                   0);
          gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !gameObject )
            goto LABEL_608;
          v72 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
        }
        else
        {
          v72 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v36;
        }
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       v72,
                                                                       0);
        UserServantLeaderEntity = v313;
        this = codeIds;
      }
      else
      {
LABEL_199:
        collectiona = 0;
        v306 = 0;
      }
      codeIdsa = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0);
      cardParams = servantLeaderInfo->fields.commandCardParam;
      eventIda = ServantLeaderInfo__getQuestRestriction(
                   servantLeaderInfo,
                   supportServantData->fields.questRestrictionInfo,
                   0);
      v111 = servantLeaderInfo;
      UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                               servantLeaderInfo,
                               supportServantData->fields.questRestrictionInfo,
                               0);
      IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                           v111,
                                           supportServantData->fields.questRestrictionInfo,
                                           0,
                                           0);
      if ( ServantLeaderInfo__IsSlotRestriction(v111, supportServantData->fields.questRestrictionInfo, 0) )
      {
        v113 = 1;
      }
      else
      {
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v114 = *(_DWORD *)(gameObject + 56);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        if ( v114 < 1 )
          goto LABEL_228;
        if ( !supportServantData->fields.questRestrictionInfo )
          goto LABEL_608;
        v115 = *(_DWORD *)(gameObject + 60);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43442220(
               supportServantData->fields.questRestrictionInfo,
               v115,
               0) )
        {
          v116 = supportServantData->fields.questRestrictionInfo;
          v118 = *(_QWORD *)&v332->fields.svtId.fields.currentCryptoKey;
          v117 = *(_QWORD *)&v332->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v366.fields.currentCryptoKey = v118;
          *(_QWORD *)&v366.fields.fakeValue = v117;
          v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v366, 0);
          v120 = v332->fields.limitCount;
          v121 = v119;
          gameObject = ServantLeaderInfo__getDispLimitCount(v332, 0);
          if ( !v116 )
            goto LABEL_608;
          IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                                v116,
                                                v121,
                                                v120,
                                                gameObject,
                                                v115,
                                                1,
                                                0);
          supportServantData = v346;
          svtId = value;
          v113 = IsRestrictionServantIndividuality;
        }
        else
        {
LABEL_228:
          v113 = 0;
        }
      }
      AtkBoostValue = AddedAtk + adjustAtk;
      HpBoostValue = AddedHp + adjustHp;
      v110 = v306;
      IsDataLost = ServantLeaderInfo__IsDataLost(v332, supportServantData->fields.questRestrictionInfo, 0);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v332, supportServantData->fields.questRestrictionInfo, 0);
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_608;
      v103 = (UserServantEntity_o *)gameObject;
      gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0, 0);
      lv[1] = v103->fields.lv;
      if ( !gameObject )
        goto LABEL_608;
      v104 = *(_DWORD *)(gameObject + 20);
      v327 = (_DWORD *)gameObject;
      lv[0] = v104;
      if ( v21 )
        lv[0] = LODWORD(v21[16].monitor) + v104;
      AtkBoostValue = UserServantEntity__get_AtkBoostValue(v103, 0);
      HpBoostValue = UserServantEntity__get_HpBoostValue(v103, 0);
      v105 = v327[4];
      v358 = v105;
      if ( v21 )
        v358 = HIDWORD(v21[16].monitor) + v105;
      rarity = v327[6];
      exceedCount = v103->fields.exceedCount;
      frameType = UserServantEntity__GetFrameType(v103, v327[10], 0);
      limitCount = UserServantEntity__getCardImageLimitCount(v103, 0, 0);
      UserServantEntity__getSkillInfo(v103, &skillInfoList, -1, -1, 1, 0, -1, 0);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v103, &tdInfo, -1, -1, 0, 0);
      if ( !tdInfo )
        goto LABEL_608;
      v106 = tdInfo->fields.lv;
      v107 = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_43199088(v103, &v355, 0);
      this->fields.isGrandServant = UserServantEntity__IsGrandServant(v103, 0);
      strengthStatus = v107;
      v322 = v106;
      if ( supportServantData->fields.eventSetupInfo )
      {
        if ( v21 )
        {
          v108 = v21[2];
          *(Il2CppObject *)&v352.fields.currentCryptoKey = v21[1];
          *(Il2CppObject *)&v352.fields.fakeValue = v108;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v351 = v352;
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v351, 0);
        }
        else
        {
          v109 = -1;
        }
        gameObject = sub_1C37100(long___TypeInfo, 1);
        if ( !gameObject )
          goto LABEL_608;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_609;
        *(_QWORD *)(gameObject + 32) = v109;
        EventUpVal_43172176 = UserServantEntity__getEventUpVal_43172176(
                                v103,
                                &eventUpVallInfo,
                                supportServantData->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0,
                                0);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v314 = UserServantLeaderEntity;
        codeIdsb = this;
        v124 = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v341 = eventFriendPoints;
        v125 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v126 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v127 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v127,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v128 = supportServantData->fields.eventSetupInfo;
        if ( !v128 )
          goto LABEL_608;
        v129 = v128->fields.eventIdList;
        v336 = EventUpVal_43172176;
        if ( !v129 )
          goto LABEL_608;
        v130 = v129->max_length;
        if ( (int)v130 >= 1 )
        {
          collectionb = (System_Collections_Generic_IEnumerable_T__o *)&v103->fields.userId;
          v131 = 0;
          eventIdb = v103;
          while ( 1 )
          {
            if ( v131 >= (unsigned int)v130 )
              goto LABEL_609;
            if ( !v124 )
              goto LABEL_608;
            v132 = v129->m_Items[v131];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v124,
                                    v132,
                                    (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v125 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v125, v132, 0) )
              {
                v133 = collectionb[1];
                *(System_Collections_Generic_IEnumerable_T__o *)&v352.fields.currentCryptoKey = *collectionb;
                *(System_Collections_Generic_IEnumerable_T__o *)&v352.fields.fakeValue = v133;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v350 = v352;
                v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v350, 0);
                gameObject = UserServantEntity__getSvtId(v103, 0);
                if ( !v126 )
                  goto LABEL_608;
                if ( UserEventServantPointMaster__TryGetEntity(
                       (UserEventServantPointMaster_o *)v126,
                       &entity,
                       v134,
                       v132,
                       gameObject,
                       0) )
                {
                  gameObject = (__int64)entity;
                  if ( !entity )
                    goto LABEL_608;
                  BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
                }
                else
                {
                  BuddyPoint = 0;
                }
                v136 = v126;
                v137 = UserServantEntity__getSvtId(eventIdb, 0);
                v138 = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)v125,
                         v132,
                         BuddyPoint,
                         v137,
                         0);
                v139 = v138 ? v138->fields.svtPointRank : 0;
                v140 = (EventMargeItemUpValInfo_o *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41718176(v140, v132, 0);
                if ( !v140 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(v140, BuddyPoint, v139, 0, 0);
                if ( !v127 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v127,
                  0,
                  (Il2CppObject *)v140,
                  (const MethodInfo_37A3DD4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v126 = v136;
                v103 = eventIdb;
              }
              v141 = (EventPersonalMargeUpValInfo_o *)sub_1C372A4(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v141, v132, servantEntity, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_608;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v141 )
                goto LABEL_608;
              EventPersonalMargeUpValInfo__Add(v141, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v141, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v141, 0);
                if ( !gameObject )
                  goto LABEL_608;
                v144 = *(_DWORD *)(gameObject + 24);
                v145 = gameObject;
                if ( v144 >= 1 )
                  break;
              }
            }
LABEL_274:
            LODWORD(v130) = v129->max_length;
            if ( (__int64)++v131 >= (int)v130 )
              goto LABEL_275;
          }
          v146 = 0;
          while ( v146 < v144 )
          {
            v147 = *(_QWORD *)(v145 + 8LL * (int)v146 + 32);
            if ( !v147 )
              goto LABEL_608;
            if ( *(_DWORD *)(v147 + 60) != 111 )
            {
              if ( !v127 )
                goto LABEL_608;
              v148 = v127->fields._items;
              v149 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v127->fields._version;
              if ( !v148 )
                goto LABEL_608;
              v150 = v127->fields._size;
              if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v127,
                  (Il2CppObject *)v147,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
              }
              else
              {
                v151 = &v148->obj.klass + v150;
                v127->fields._size = v150 + 1;
                v151[4] = (Il2CppClass *)v147;
                sub_1C36FFC((CGThumbnailListItem_o *)(v151 + 4), v147, v142, v143);
              }
            }
            v144 = *(_DWORD *)(v145 + 24);
            if ( (int)++v146 >= v144 )
              goto LABEL_274;
          }
LABEL_609:
          sub_1C372BC(gameObject);
        }
LABEL_275:
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v110 = v336;
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v127,
                                                                       0);
        UserServantLeaderEntity = v314;
        this = codeIdsb;
        supportServantData = v346;
        eventFriendPoints = v341;
      }
      else
      {
        collectiona = 0;
        v110 = 0;
      }
      codeIdsa = UserServantEntity__getCommandCodeIdList(v103, 0);
      eventIda = UserServantEntity__getQuestRestriction(
                   v103,
                   supportServantData->fields.questRestrictionInfo,
                   rarity,
                   2,
                   0);
      UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                               v103,
                               supportServantData->fields.questRestrictionInfo,
                               0);
      v152 = UserServantEntity__IsUniqueIndividualityRestriction(
               v103,
               supportServantData->fields.questRestrictionInfo,
               0);
      svtId = value;
      v113 = 0;
      IsUniqueIndividualityRestriction = v152;
      TimesToRestart = 0;
      IsDataLost = 0;
      cardParams = 0;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_608;
    v343 = v113;
    gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                   (ServantLimitImageMaster_o *)gameObject,
                   svtId,
                   limitCount,
                   0);
    if ( !this->fields.servantNarrowTexture )
      goto LABEL_608;
    UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0, 0);
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      if ( IsDataLost )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_608;
        ServantClassIconComponent__SetImage(
          (ServantClassIconComponent_o *)gameObject,
          classId,
          frameType,
          0,
          this->fields.isGrandServant,
          0,
          0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_608;
        ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0);
        isGrandServant = this->fields.isGrandServant;
        v155 = this->fields.servantClassIcon;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        }
        v156 = *(UnityEngine_Vector2_o **)(gameObject + 184);
        if ( isGrandServant )
        {
          if ( !v155 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v155, v156[1], 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
          x = static_fields->GrandClassNamePosition.fields.x;
          y = static_fields->GrandClassNamePosition.fields.y;
        }
        else
        {
          if ( !v155 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v155, *v156, 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          v160 = SupportSelectItemDraw_TypeInfo->static_fields;
          x = v160->ClassNamePosition.fields.x;
          y = v160->ClassNamePosition.fields.y;
        }
        ServantClassIconComponent__RePositionClassName(
          (ServantClassIconComponent_o *)gameObject,
          *(UnityEngine_Vector2_o *)&x,
          0);
      }
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      v162 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
      if ( !v162 )
        goto LABEL_608;
      UILabel__set_text(v162, (System_String_o *)gameObject, 0);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v164 = lv[1];
      v165 = v327[10];
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon_40443180 = Rarity__getIcon_40443180(rarity, exceedCount, v164, v165, 0);
      if ( exceedCount < 1 )
      {
        v168 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_608;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v165, exceedCount, 0, 0, 0);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_608;
        v168 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v165,
                 lv[1],
                 RarityIcon,
                 0,
                 0);
      }
      v169 = this->fields.raritySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( v168 >= 3 )
      {
        AtlasManager__SetEventSprite(v169, Icon_40443180, 0);
      }
      else
      {
        AtlasManager__SetCommon(v169, 0);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_608;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_40443180, 0);
      }
      gameObject = (__int64)this->fields.raritySprite;
      supportServantData = v346;
      if ( !gameObject )
        goto LABEL_608;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v170 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_608;
      v171 = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v370.fields.x = v170;
      v370.fields.y = v171;
      v370.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v370, 0);
    }
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v174 = this->fields.skillListTreasureDevice;
      v175 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_41278156(v175, 0);
      if ( !v174 )
        goto LABEL_608;
      SkillListTreasureDeviceComponent__Set(
        v174,
        (System_String_o *)gameObject,
        v322,
        strengthStatus,
        treasureDeviceNum,
        0,
        0);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v178 = (Il2CppObject *)this->fields.skillInfoUiWidget;
        v179 = *(_QWORD *)(gameObject + 16);
        v180 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v179 )
          goto LABEL_608;
        v181 = *(int *)(gameObject + 24);
        if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            v178,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
        }
        else
        {
          v182 = v179 + 8 * v181;
          *(_DWORD *)(gameObject + 24) = v181 + 1;
          *(_QWORD *)(v182 + 32) = v178;
          sub_1C36FFC((CGThumbnailListItem_o *)(v182 + 32), (int32_t)v178, v176, v177);
        }
      }
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
    {
      if ( v355 && v355->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v184 = this->fields.appendSkillList;
        v185 = v355;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__GetLevelList_41278156(v185, 0);
        if ( !v184 )
          goto LABEL_608;
        AppendSkillListComponent__Set(v184, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          v188 = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
          v189 = *(_QWORD *)(gameObject + 16);
          v190 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(gameObject + 28);
          if ( !v189 )
            goto LABEL_608;
          v191 = *(int *)(gameObject + 24);
          if ( (unsigned int)v191 >= *(_DWORD *)(v189 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              v188,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
          }
          else
          {
            v192 = v189 + 8 * v191;
            *(_DWORD *)(gameObject + 24) = v191 + 1;
            *(_QWORD *)(v192 + 32) = v188;
            sub_1C36FFC((CGThumbnailListItem_o *)(v192 + 32), (int32_t)v188, v186, v187);
          }
        }
      }
      else
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
    }
    switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
    {
      v194 = this->fields.switchSkillUIList;
      if ( v194 )
      {
        v195 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v194,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v195 )
          goto LABEL_608;
        SwitchUIWidgetComponent__Set(v195, (UIWidget_array *)gameObject, 0, 0);
      }
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_608;
      if ( supportServantData->fields.isFriendInfo )
        ServantCommandCardListComponent__Set_40994424(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0);
      else
        ServantCommandCardListComponent__Set_40994668(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          codeIdsa,
          2,
          0,
          0);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
    {
      v198 = 0.92157;
      gameObject = (__int64)this->fields.attackLabel;
      if ( AtkBoostValue <= 0 )
        v199 = 1.0;
      else
        v199 = 0.015686;
      if ( AtkBoostValue <= 0 )
        v198 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v200 = 1.0;
      v201 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v198 - 1), 0);
      v202 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_65071764((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( !v202 )
        goto LABEL_608;
      UILabel__set_text(v202, (System_String_o *)gameObject, 0);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
    {
      v204 = 0.92157;
      gameObject = (__int64)this->fields.hpLabel;
      if ( HpBoostValue <= 0 )
        v205 = 1.0;
      else
        v205 = 0.015686;
      if ( HpBoostValue <= 0 )
        v204 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v206 = 1.0;
      v207 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v204 - 1), 0);
      v208 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_65071764((int32_t)&v358, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( !v208 )
        goto LABEL_608;
      UILabel__set_text(v208, (System_String_o *)gameObject, 0);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v210 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      v212 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v210, frameType, baseDefaultUIAtlas, 0, v212, 0);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
    {
      v214 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      v216 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v214, frameType, base2DefaultUIAtlas, 0, v216, 0);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    supportServantData = v346;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
    {
      v218 = this->fields.isGrandServant;
      v219 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v218,
                     v219,
                     maskSpriteDefaultSpriteName,
                     maskSpriteDefaultAtlas,
                     0);
      v222 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v346;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v222 )
          goto LABEL_608;
        UIWidget__set_width(v222, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
        gameObject = (__int64)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        UIWidget__set_height(
          (UIWidget_o *)gameObject,
          SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
          0);
        gameObject = (__int64)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        v223 = 0.0;
        v224 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v224->GrandMaskPosition05.fields.y;
        p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&v224->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v346;
        if ( !v222 )
          goto LABEL_608;
        UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultWidth, 0);
        gameObject = (__int64)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
        gameObject = (__int64)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        v223 = this->fields.maskSpriteDefaultPosition.fields.z;
        p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
      v227 = *(_DWORD *)p_y;
      v228 = p_GrandMaskPosition05->fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        *(UnityEngine_Vector3_o *)(&v223 - 2),
        0);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
    {
      v231 = this->fields.isGrandServant;
      v232 = this->fields.sortieMaskSprite;
      defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
      defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v231,
                     v232,
                     defaultSortieMaskSpriteName,
                     defaultSortieMaskAtlas,
                     0);
      v235 = (UIWidget_o *)this->fields.sortieMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v346;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v235 )
          goto LABEL_608;
        UIWidget__set_width(v235, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        UIWidget__set_height(
          (UIWidget_o *)gameObject,
          SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
          0);
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        v236 = SupportSelectItemDraw_TypeInfo->static_fields;
        v237 = &v236->GrandMaskPosition05.fields.y;
        p_defaultSortieMaskPosition = &v236->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v346;
        if ( !v235 )
          goto LABEL_608;
        UIWidget__set_width((UIWidget_o *)this->fields.sortieMaskSprite, this->fields.defaultSortieMaskWidth, 0);
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultSortieMaskHeight, 0);
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        v237 = &this->fields.defaultSortieMaskPosition.fields.y;
        p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
      }
      v371.fields.y = *v237;
      v371.fields.x = p_defaultSortieMaskPosition->fields.x;
      v371.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v371, 0);
    }
    if ( ((v343 | eventIda) & 1) != 0 )
    {
      v239 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v239, 0, 0) )
      {
        gameObject = (__int64)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v240 = LocalizationManager__Get((System_String_o *)StringLiteral_10265/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      goto LABEL_459;
    }
    if ( supportServantData->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
      goto LABEL_472;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40427704(126, 0) )
    {
      v245 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v245, 0, 0) )
        goto LABEL_490;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v247 = 1;
    }
    else
    {
LABEL_472:
      if ( IsUniqueIndividualityRestriction || UniqueSvtRestriction )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v248 = LocalizationManager__Get((System_String_o *)StringLiteral_6458/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
        SupportSelectItemDraw__SetWarningMessage(this, v248, 1, v249);
LABEL_491:
        friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0, 0) )
        {
          friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0, 0) )
          {
            gameObject = (__int64)this->fields.friendPointBonusBase;
            if ( !gameObject )
              goto LABEL_608;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          }
        }
        eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
        v73 = 0;
        v94 = v110 != 0;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          v262 = eventFriendPoints->max_length;
          if ( v262 < 1 )
          {
            v73 = 0;
          }
          else
          {
            v263 = 0;
            v264 = 0;
            v265 = 0;
            m_Items = eventFriendPoints->m_Items;
            do
            {
              if ( (unsigned int)v263 >= v262 )
                goto LABEL_609;
              v267 = m_Items[v263];
              if ( !v267 )
                goto LABEL_608;
              gameObject = System_Array__IndexOf_int_(
                             v267->fields.targetIds,
                             value,
                             (const MethodInfo_31EECD8 *)Method_System_Array_IndexOf_int___);
              v262 = eventFriendPoints->max_length;
              if ( (unsigned int)v263 >= v262 )
                goto LABEL_609;
              v268 = m_Items[v263];
              if ( !v268 )
                goto LABEL_608;
              targetIds = v268->fields.targetIds;
              if ( targetIds )
                v270 = LODWORD(targetIds->max_length) == 0;
              else
                v270 = 1;
              if ( (v270 || (int)gameObject >= 0) && v265 < v268->fields.value )
              {
                v264 = v268->fields.eventId;
                v265 = v268->fields.value;
              }
              ++v263;
            }
            while ( (int)v263 < v262 );
            if ( v265 >= 1 )
            {
              v271 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
              v272 = v271;
              if ( collectiona )
                System_Collections_Generic_List_object____ctor_58337560(
                  v271,
                  collectiona,
                  (const MethodInfo_37A2918 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___78049648);
              else
                System_Collections_Generic_List_object____ctor(
                  v271,
                  (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
              v299 = (EventMargeItemUpValInfo_o *)sub_1C372A4(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_41718096(v299, v264, v265, 0);
              if ( !v272 )
                goto LABEL_608;
              v302 = v272->fields._items;
              v303 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v272->fields._version;
              supportServantData = v346;
              if ( !v302 )
                goto LABEL_608;
              v304 = v272->fields._size;
              if ( (unsigned int)v304 >= LODWORD(v302->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v272,
                  (Il2CppObject *)v299,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
              }
              else
              {
                v305 = &v302->obj.klass + v304;
                v272->fields._size = v304 + 1;
                v305[4] = (Il2CppClass *)v299;
                sub_1C36FFC((CGThumbnailListItem_o *)(v305 + 4), (int32_t)v299, v300, v301);
              }
              v93 = System_Collections_Generic_List_object___ToArray(
                      v272,
                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              v73 = 0;
              if ( !v21 )
                goto LABEL_522;
              goto LABEL_184;
            }
            supportServantData = v346;
            v73 = 0;
          }
        }
        v93 = (System_Object_array *)collectiona;
        if ( !v21 )
          goto LABEL_522;
        goto LABEL_184;
      }
      if ( IsDataLost )
      {
        v244 = 1;
        v243 = this;
        v242 = 0;
        v241 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_460;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v250 = LocalizationManager__Get((System_String_o *)StringLiteral_11547/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
        LODWORD(v352.fields.currentCryptoKey) = TimesToRestart;
        v257 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v352, v251, v252, v253, v254, v255, v256);
        v240 = System_String__Format(v250, v257, 0);
LABEL_459:
        v241 = v240;
        v242 = 1;
        v243 = this;
        v244 = 0;
LABEL_460:
        SupportSelectItemDraw__SetMaskMessage(v243, v241, v242, v244, v230);
        goto LABEL_491;
      }
      v258 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v258, 0, 0) )
      {
LABEL_490:
        SupportSelectItemDraw__ClearMessage(this, v246);
        goto LABEL_491;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v247 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v247, 0);
    goto LABEL_490;
  }
  v73 = 0;
LABEL_109:
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  backClassIcon = this->fields.backClassIcon;
  if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
  }
  v75 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
  if ( !v75 )
    goto LABEL_608;
  if ( *(_DWORD *)(v75 + 24) <= (unsigned int)classPos )
    goto LABEL_609;
  if ( !backClassIcon )
    goto LABEL_608;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v75 + 8LL * classPos + 32), 0);
  v76 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v76, 0, 0) )
  {
    v77 = this->fields.baseSprite;
    v78 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v77, 9, v78, 0, 0, 0);
  }
  v79 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v79, 0, 0) )
  {
    v80 = this->fields.base2Sprite;
    v81 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v80, 9, v81, 0, 0, 0);
  }
  v82 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v82, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v83 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v83, 0, 0) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v84 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v85 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v86 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v86, 0, 0) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v87 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  SupportSelectItemDraw__ClearMessage(this, v88);
  v89 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v89, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v90 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v90, 0, 0) )
  {
    gameObject = (__int64)this->fields.appendSkillList;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v91 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v91, 0, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_608;
    ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
  }
  v92 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v92, 0, 0) )
  {
    gameObject = (__int64)this->fields.friendPointBonusBase;
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v93 = 0;
  v94 = 0;
  if ( !v21 )
  {
LABEL_522:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    if ( v331 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v275 = *(_QWORD *)&v331->fields.svtId.fields.currentCryptoKey;
      v274 = *(_QWORD *)&v331->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v367.fields.currentCryptoKey = v275;
      *(_QWORD *)&v367.fields.fakeValue = v274;
      v276 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v367, 0);
      ImagePartsGroupIdxs_k__BackingField = v331->fields._ImagePartsGroupIdxs_k__BackingField;
      v278 = v276;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v278, ImagePartsGroupIdxs_k__BackingField, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      supportServantData = v346;
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        v102 = v331->fields.limitCount;
        goto LABEL_536;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v298 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v298, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        v280 = 0;
        goto LABEL_541;
      }
    }
    goto LABEL_542;
  }
LABEL_184:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_608;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_608;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v95 = (UISprite_o *)this->fields.equipSprite;
  v97 = v21[5].klass;
  v96 = v21[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v364.fields.currentCryptoKey = v97;
  *(_QWORD *)&v364.fields.fakeValue = v96;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v364, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v95, v98, 0, 0);
  v99 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  supportServantData = v346;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v99, 0, 0) )
  {
    v101 = v21[6].klass;
    v100 = v21[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v365.fields.currentCryptoKey = v101;
    *(_QWORD *)&v365.fields.fakeValue = v100;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v365, 0);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_608;
    v102 = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_536:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( v102 >= 4 )
    {
      if ( !v328 )
        goto LABEL_608;
      v280 = SLODWORD(v328[5].monitor) >= v102;
    }
    else
    {
      v280 = 0;
    }
    if ( gameObject )
    {
LABEL_541:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v280, 0);
      goto LABEL_542;
    }
LABEL_608:
    sub_1C372B4(gameObject);
  }
LABEL_542:
  v281 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v281, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v73 & 1) == 0 )
      {
        v282 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v282 )
        {
          v284 = *(_QWORD *)&v282->fields.svtId.fields.currentCryptoKey;
          v283 = *(_QWORD *)&v282->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v368.fields.currentCryptoKey = v284;
          *(_QWORD *)&v368.fields.fakeValue = v283;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v368, 0);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_608;
          v285 = gameObject;
          v286 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_563:
          v292 = v286;
          goto LABEL_565;
        }
      }
    }
    else if ( (v73 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v291 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v290 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v369.fields.currentCryptoKey = v291;
        *(_QWORD *)&v369.fields.fakeValue = v290;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v369, 0);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_608;
        v285 = gameObject;
        v286 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_563;
      }
    }
    v292 = -1;
    v285 = -1;
LABEL_565:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_608;
    EventUpValIconComponent__Set(
      (EventUpValIconComponent_o *)gameObject,
      (EventMargeItemUpValInfo_array *)v93,
      v285,
      v292,
      equipSvtId,
      0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_608;
      v288 = 0;
      goto LABEL_574;
    }
    goto LABEL_575;
  }
  v287 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v287, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_608;
    v288 = v94;
LABEL_574:
    ShiningIconComponent__Set_41022000((ShiningIconComponent_o *)gameObject, v288, 0);
  }
LABEL_575:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_608;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)gameObject + 536LL))(
      gameObject,
      0,
      1,
      *(_QWORD *)(*(_QWORD *)gameObject + 544LL));
  }
  pushSprite = (UnityEngine_Object_o *)this->fields.pushSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pushSprite, 0, 0) )
  {
    gameObject = (__int64)this->fields.pushSprite;
    if ( gameObject )
    {
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
        pushUserServantId = supportServantData->fields.pushUserServantId;
        if ( !pushUserServantId )
          return;
        if ( UserServantLeaderEntity )
        {
          if ( pushUserServantId != UserServantLeaderEntity->fields.userSvtId )
            return;
          gameObject = (__int64)this->fields.pushSprite;
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
              return;
            }
          }
        }
      }
    }
    goto LABEL_608;
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetMaskMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        bool isDataLost,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v11; // x21
  UIWidget_o *v12; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float z; // s2 OVERLAPPED
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  _BOOL4 isGrandServant; // w23
  UISprite_o *v18; // x22
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  UIWidget_o *sortieMaskSprite; // x21
  struct SupportSelectItemDraw_StaticFields *v21; // x9
  int v22; // s1
  float x; // s0
  float v24; // s0
  float v25; // s8
  UnityEngine_Transform_o *v26; // x20
  float restrictionMaskMessageWidth; // s0
  float v28; // s0 OVERLAPPED
  float v29; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C3F641 & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SupportSelectItemDraw_TypeInfo);
    sub_1C37058(&StringLiteral_20399/*"img_frames_mask05"*/);
    sub_1C37058(&StringLiteral_18481/*"datalost_party_edit"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F641 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_56;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_56;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    if ( isDataLost )
    {
      v11 = this->fields.restrictionMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v11, (System_String_o *)StringLiteral_18481/*"datalost_party_edit"*/, 0);
      v12 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v12 )
        goto LABEL_56;
      UIWidget__set_width(v12, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_56;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_HEIGHT,
        0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_56;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      if ( !gameObject )
        goto LABEL_56;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
      p_y = &static_fields->DATA_LOST_MASK_POSITION.fields.y;
      p_DATA_LOST_MASK_POSITION = &static_fields->DATA_LOST_MASK_POSITION;
    }
    else
    {
      isGrandServant = this->fields.isGrandServant;
      v18 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
             isGrandServant,
             v18,
             (System_String_o *)StringLiteral_20399/*"img_frames_mask05"*/,
             maskSpriteDefaultAtlas,
             0) )
      {
        sortieMaskSprite = (UIWidget_o *)this->fields.sortieMaskSprite;
        gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !sortieMaskSprite )
          goto LABEL_56;
        UIWidget__set_width(sortieMaskSprite, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_height(
          (UIWidget_o *)gameObject,
          SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
          0);
        gameObject = (UnityEngine_Component_o *)this->fields.sortieMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_56;
        z = 0.0;
        v21 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v21->GrandMaskPosition05.fields.y;
        p_DATA_LOST_MASK_POSITION = (struct UnityEngine_Vector3_o *)&v21->GrandMaskPosition05;
      }
      else
      {
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_width((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultWidth, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
        if ( !gameObject )
          goto LABEL_56;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
        if ( !gameObject )
          goto LABEL_56;
        z = this->fields.maskSpriteDefaultPosition.fields.z;
        p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
    }
    v22 = *(_DWORD *)p_y;
    x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition(
      (UnityEngine_Transform_o *)gameObject,
      *(UnityEngine_Vector3_o *)(&z - 2),
      0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_56;
    if ( isScale )
    {
      LODWORD(v24) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_56;
      v25 = v24;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v26 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v25 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4C3C926 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        v32 = UnityEngine_Vector3_TypeInfo->static_fields;
        v28 = v32->oneVector.fields.x;
        y = v32->oneVector.fields.y;
        v29 = v32->oneVector.fields.z;
      }
      else
      {
        v28 = restrictionMaskMessageWidth / v25;
        v29 = 1.0;
        y = 1.0;
      }
      if ( !v26 )
        goto LABEL_56;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v26 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C3C926 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v26 )
        goto LABEL_56;
      v31 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v31->oneVector.fields.y;
      v29 = v31->oneVector.fields.z;
      v28 = v31->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v28, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
      if ( gameObject )
      {
        FlashingIconComponent__Clear((FlashingIconComponent_o *)gameObject, 0);
        gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
        if ( gameObject )
        {
          UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
          return;
        }
      }
    }
LABEL_56:
    sub_1C372B4(gameObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetWarningMessage(
        SupportSelectItemDraw_o *this,
        System_String_o *message,
        bool isScale,
        const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x22
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v11; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v16; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3F642 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3F642 = 1;
  }
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  restrictionWarningBase = (UnityEngine_Object_o *)this->fields.restrictionWarningBase;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionWarningBase, 0, 0) )
  {
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( !gameObject )
      goto LABEL_33;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningIcon;
    if ( !gameObject )
      goto LABEL_33;
    FlashingIconComponent__SetFast((FlashingIconComponent_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    UILabel__set_text((UILabel_o *)gameObject, message, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    printedSize = UILabel__get_printedSize((UILabel_o *)gameObject, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningMessageLabel;
    if ( !gameObject )
      goto LABEL_33;
    gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
    v11 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4C3C926 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
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
      if ( !v11 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4C3C926 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      if ( !v11 )
        goto LABEL_33;
      v16 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v16->oneVector.fields.y;
      z = v16->oneVector.fields.z;
      x = v16->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v18.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v18.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v18.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v18, 0);
        return;
      }
    }
LABEL_33:
    sub_1C372B4(gameObject);
  }
}


void SupportSelectItemDraw___c__DisplayClass66_0___ctor(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SupportSelectItemDraw___c__DisplayClass66_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  SupportSelectItemDraw___c__DisplayClass66_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4C3F647 & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass66_0_o *)sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C3F647 = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1C372B4(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
}