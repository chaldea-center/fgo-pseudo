void SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  SupportSelectItemDraw_c *v1; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  const MethodInfo *v5; // x3
  __int64 v6; // x19
  int32_t v7; // w1
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  SupportSelectItemDraw_c *v27; // x8
  struct SupportSelectItemDraw_StaticFields *v28; // x8

  if ( (byte_4C2398B & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&SupportSelectItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_20132/*"icon_class1002"*/);
    sub_1C2D490(&StringLiteral_20130/*"icon_class007"*/);
    sub_1C2D490(&StringLiteral_20129/*"icon_class006"*/);
    sub_1C2D490(&StringLiteral_20127/*"icon_class004"*/);
    sub_1C2D490(&StringLiteral_20124/*"icon_class001"*/);
    sub_1C2D490(&StringLiteral_20131/*"icon_class1001"*/);
    sub_1C2D490(&StringLiteral_20125/*"icon_class002"*/);
    sub_1C2D490(&StringLiteral_20128/*"icon_class005"*/);
    sub_1C2D490(&StringLiteral_20126/*"icon_class003"*/);
    byte_4C2398B = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v2 = sub_1C2D538(string___TypeInfo, 9);
  if ( !v2 )
    sub_1C2D6EC(0, v3);
  v6 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_14;
  v7 = StringLiteral_20131/*"icon_class1001"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_20131/*"icon_class1001"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v2 + 32), v7, v4, v5);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_14;
  v9 = StringLiteral_20124/*"icon_class001"*/;
  *(_QWORD *)(v6 + 40) = StringLiteral_20124/*"icon_class001"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), v9, v4, v8);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_14;
  v11 = StringLiteral_20125/*"icon_class002"*/;
  *(_QWORD *)(v6 + 48) = StringLiteral_20125/*"icon_class002"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 48), v11, v4, v10);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_14;
  v13 = StringLiteral_20126/*"icon_class003"*/;
  *(_QWORD *)(v6 + 56) = StringLiteral_20126/*"icon_class003"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 56), v13, v4, v12);
  if ( *(_DWORD *)(v6 + 24) <= 4u )
    goto LABEL_14;
  v15 = StringLiteral_20127/*"icon_class004"*/;
  *(_QWORD *)(v6 + 64) = StringLiteral_20127/*"icon_class004"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 64), v15, v4, v14);
  if ( *(_DWORD *)(v6 + 24) <= 5u )
    goto LABEL_14;
  v17 = StringLiteral_20128/*"icon_class005"*/;
  *(_QWORD *)(v6 + 72) = StringLiteral_20128/*"icon_class005"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 72), v17, v4, v16);
  if ( *(_DWORD *)(v6 + 24) <= 6u
    || (v19 = StringLiteral_20129/*"icon_class006"*/,
        *(_QWORD *)(v6 + 80) = StringLiteral_20129/*"icon_class006"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 80), v19, v4, v18),
        *(_DWORD *)(v6 + 24) <= 7u)
    || (v21 = StringLiteral_20130/*"icon_class007"*/,
        *(_QWORD *)(v6 + 88) = StringLiteral_20130/*"icon_class007"*/,
        sub_1C2D434((CGThumbnailListItem_o *)(v6 + 88), v21, v4, v20),
        *(_DWORD *)(v6 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C2D6F4(v2, v3, v4);
  }
  v23 = StringLiteral_20132/*"icon_class1002"*/;
  *(_QWORD *)(v6 + 96) = StringLiteral_20132/*"icon_class1002"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 96), v23, v4, v22);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->backClassIconFileList, v6, v25, v26);
  v27 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_C09510;
  v28 = v27->static_fields;
  v28->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&v28->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v28->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
}


void SupportSelectItemDraw___ctor(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SupportSelectItemDraw__ActivateEquipOnly(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 v10; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  __int64 naturalAligment; // x9
  __int64 v19; // x1
  UnityEngine_Object_o *gameObject; // x22
  UnityEngine_Component_o *equipRootObj; // x0
  UnityEngine_Object_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C2398A & 1) == 0 )
  {
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Transform_TypeInfo);
    byte_4C2398A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C2D6EC(0, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C2D6EC(0, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      v10 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v10 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v10)(Enumerator, *(_QWORD *)(v10 + 8))
        & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1];
    }
    else
    {
LABEL_16:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_37;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v15->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C2D9AC(v15);
LABEL_37:
      sub_1C2D6EC(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C2D6EC(0, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0);
      if ( !v23 )
        sub_1C2D6EC(0, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0);
    }
  }
  v25 = sub_1C2D5CC(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_32;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_32:
      v30 = sub_1C7DCA8(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UISprite_o *v10; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct UISprite_o *v14; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *sortieMaskSprite; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct UISprite_o *v19; // x8
  struct UIAtlas_o *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct UISprite_o *v23; // x8
  struct System_String_o *v24; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UISprite_o *v28; // x8
  struct UIAtlas_o *v29; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x3
  struct UISprite_o *v33; // x8
  struct UIAtlas_o *v34; // x1
  System_Collections_Generic_List_object__o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23982 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23982 = 1;
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
    v10 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v10 )
      goto LABEL_46;
    mSpriteName = v10->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultSpriteName, (int32_t)mSpriteName, v8, v9);
    v14 = this->fields.restrictionMaskSprite;
    if ( !v14 )
      goto LABEL_46;
    mAtlas = v14->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v12, v13);
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
    v19 = this->fields.sortieMaskSprite;
    if ( !v19 )
      goto LABEL_46;
    v20 = v19->fields.mAtlas;
    this->fields.defaultSortieMaskAtlas = v20;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultSortieMaskAtlas, (int32_t)v20, v17, v18);
    v23 = this->fields.sortieMaskSprite;
    if ( !v23 )
      goto LABEL_46;
    v24 = v23->fields.mSpriteName;
    this->fields.defaultSortieMaskSpriteName = v24;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.defaultSortieMaskSpriteName, (int32_t)v24, v21, v22);
    transform = this->fields.sortieMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.defaultSortieMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    v39 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
    this->fields.defaultSortieMaskPosition.fields.x = v39.fields.x;
    this->fields.defaultSortieMaskPosition.fields.y = v39.fields.y;
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v28 = this->fields.baseSprite;
    if ( !v28 )
      goto LABEL_46;
    v29 = v28->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v29;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v29, v26, v27);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v33 = this->fields.base2Sprite;
    if ( v33 )
    {
      v34 = v33->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v34;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.base2DefaultUIAtlas, (int32_t)v34, (int32_t)v31, v32);
      goto LABEL_45;
    }
LABEL_46:
    sub_1C2D6EC(transform, v4);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v35;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.switchSkillUIList, (int32_t)v35, v36, v37);
}


void SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4C23983 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23983 = 1;
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
    sub_1C2D6EC(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C23985 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23985 = 1;
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
    sub_1C2D6EC(gameObject, v4);
  }
}


void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C23988 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23988 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    UnityEngine_GameObject__SetActive(v7, flag, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SupportSelectItemDraw__SetEquipAlpha(SupportSelectItemDraw_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q8
  UnityEngine_Object_o *equipRootObj; // x20
  __int64 v6; // x1
  struct UIWidget_o *v7; // x0

  v3 = *(long double *)&alpha;
  if ( (byte_4C23989 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C23989 = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v7->klass->vtable._8_set_alpha.methodPtr)(
      v7,
      v7->klass->vtable._8_set_alpha.method,
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
  unsigned __int64 v11; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x19
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x19
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x27
  struct EquipTargetInfo_o *equipTarget1; // x24
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x19
  __int64 v20; // x20
  __int64 v21; // x21
  Il2CppObject *v22; // x28
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t svtId; // w22
  struct ServantLeaderInfo_o *servantLeaderInfo; // x24
  int32_t v29; // w8
  int v30; // w8
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_43251356; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v35; // x23
  Il2CppObject *v36; // x26
  System_Collections_Generic_List_object__o *v37; // x27
  __int64 v38; // x2
  struct EventUpValSetupInfo_o *v39; // x8
  struct System_Int32_array *v40; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v42; // x22
  int32_t eventSvtPoint; // w19
  __int64 v44; // x20
  __int64 v45; // x25
  int32_t v46; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v49; // x20
  EventPersonalMargeUpValInfo_o *v50; // x19
  const MethodInfo *v51; // x3
  __int64 v52; // x8
  __int64 v53; // x29
  unsigned __int64 v54; // x28
  Il2CppObject *v55; // x25
  __int64 v56; // x20
  _DWORD *v57; // x8
  int v58; // w8
  __int64 v59; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  struct QuestRestrictionInfo_o *v61; // x8
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x19
  System_Func_int__bool__o *v65; // x21
  System_Func_TSource__bool__o *v66; // x1
  struct System_Object_array *items; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct QuestRestrictionInfo_o *v71; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v73; // x1
  char v74; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v76; // x8
  UnityEngine_Object_o *v77; // x19
  UISprite_o *v78; // x19
  UIAtlas_o *v79; // x20
  UnityEngine_Object_o *v80; // x19
  UISprite_o *v81; // x19
  UIAtlas_o *v82; // x20
  UnityEngine_Object_o *v83; // x19
  UnityEngine_Object_o *v84; // x19
  UnityEngine_Object_o *v85; // x19
  UnityEngine_Object_o *v86; // x19
  UnityEngine_Object_o *v87; // x19
  UnityEngine_Object_o *v88; // x19
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
  bool EventUpVal_42937112; // w19
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
  const MethodInfo *v142; // x3
  int v143; // w8
  __int64 v144; // x20
  unsigned int v145; // w19
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  _BOOL4 v150; // w0
  UnityEngine_Object_o *servantClassIcon; // x19
  _BOOL4 isGrandServant; // w20
  ServantClassIconComponent_o *v153; // x19
  UnityEngine_Vector2_o *v154; // x8
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  struct SupportSelectItemDraw_StaticFields *v158; // x8
  UnityEngine_Object_o *levelLabel; // x19
  UILabel_o *v160; // x19
  UnityEngine_Object_o *raritySprite; // x19
  int32_t v162; // w19
  int32_t v163; // w20
  System_String_o *Icon_40221568; // x21
  int32_t RarityIcon; // w19
  int32_t v166; // w19
  UISprite_o *v167; // x20
  float v168; // s8
  float v169; // s9
  float z; // s10
  UnityEngine_Object_o *skillListTreasureDevice; // x19
  SkillListTreasureDeviceComponent_o *v172; // x19
  SkillInfo_array *v173; // x20
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  __int64 v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  __int64 v179; // x8
  UnityEngine_Object_o *appendSkillList; // x19
  AppendSkillListComponent_o *v181; // x19
  SkillInfo_array *v182; // x20
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v190; // x0
  SwitchUIWidgetComponent_o *v191; // x19
  UnityEngine_Object_o *svtCommandCardList; // x19
  UnityEngine_Object_o *attackLabel; // x19
  float v194; // s1 OVERLAPPED
  float v195; // s2
  float v196; // s0
  float v197; // s3
  UILabel_o *v198; // x19
  UnityEngine_Object_o *hpLabel; // x19
  float v200; // s1 OVERLAPPED
  float v201; // s2
  float v202; // s0
  float v203; // s3
  UILabel_o *v204; // x19
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v206; // x20
  UIAtlas_o *baseDefaultUIAtlas; // x19
  _BOOL4 v208; // w21
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v210; // x20
  UIAtlas_o *base2DefaultUIAtlas; // x19
  _BOOL4 v212; // w21
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  _BOOL4 v214; // w22
  UISprite_o *v215; // x21
  UIAtlas_o *maskSpriteDefaultAtlas; // x19
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIWidget_o *v218; // x19
  float v219; // s2 OVERLAPPED
  struct SupportSelectItemDraw_StaticFields *v220; // x9
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x9
  int v223; // s1
  float v224; // s0
  UnityEngine_Object_o *sortieMaskSprite; // x19
  const MethodInfo *v226; // x4
  _BOOL4 v227; // w22
  UISprite_o *v228; // x21
  UIAtlas_o *defaultSortieMaskAtlas; // x19
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIWidget_o *v231; // x19
  struct SupportSelectItemDraw_StaticFields *v232; // x9
  float *v233; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v235; // x19
  System_String_o *v236; // x0
  System_String_o *v237; // x1
  bool v238; // w2
  SupportSelectItemDraw_o *v239; // x0
  bool v240; // w3
  UnityEngine_Object_o *v241; // x19
  bool v242; // w1
  System_String_o *v243; // x0
  const MethodInfo *v244; // x3
  System_String_o *v245; // x19
  __int64 v246; // x2
  __int64 v247; // x3
  __int64 v248; // x4
  Il2CppObject *v249; // x0
  UnityEngine_Object_o *v250; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *friendPointBonusBase; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v254; // w8
  __int64 v255; // x19
  int32_t v256; // w21
  int32_t v257; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v259; // x8
  EventCampaignEntity_o *v260; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v262; // w10
  System_Collections_Generic_List_object__o *v263; // x0
  System_Collections_Generic_List_object__o *v264; // x20
  UISprite_o *equipSprite; // x19
  __int64 v266; // x20
  __int64 v267; // x21
  int32_t v268; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v270; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  UnityEngine_Object_o *v272; // x19
  struct ServantLeaderInfo_o *v273; // x8
  __int64 v274; // x19
  __int64 v275; // x20
  int32_t v276; // w20
  int32_t v277; // w0
  UnityEngine_Object_o *v278; // x19
  bool v279; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v281; // x19
  __int64 v282; // x20
  int32_t v283; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  UnityEngine_Object_o *v289; // x19
  EventMargeItemUpValInfo_o *v290; // x19
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  struct System_Object_array *v293; // x8
  _QWORD *v294; // x9
  __int64 v295; // x10
  Il2CppClass **v296; // x0
  bool v297; // [xsp+14h] [xbp-1DCh]
  int32_t AddedHp; // [xsp+18h] [xbp-1D8h]
  int32_t AddedAtk; // [xsp+1Ch] [xbp-1D4h]
  int32_t adjustHp; // [xsp+20h] [xbp-1D0h]
  int32_t classId; // [xsp+24h] [xbp-1CCh]
  System_Int32_array *cardParams; // [xsp+28h] [xbp-1C8h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+34h] [xbp-1BCh]
  UserServantLeaderEntity_o *v304; // [xsp+38h] [xbp-1B8h]
  UserServantLeaderEntity_o *v305; // [xsp+38h] [xbp-1B8h]
  SupportSelectItemDraw_o *codeIds; // [xsp+40h] [xbp-1B0h]
  System_Int32_array *codeIdsa; // [xsp+40h] [xbp-1B0h]
  SupportSelectItemDraw_o *codeIdsb; // [xsp+40h] [xbp-1B0h]
  int32_t adjustAtk; // [xsp+48h] [xbp-1A8h]
  int32_t HpBoostValue; // [xsp+48h] [xbp-1A8h]
  int32_t treasureDeviceNum; // [xsp+4Ch] [xbp-1A4h]
  int32_t strengthStatus; // [xsp+50h] [xbp-1A0h]
  int32_t v313; // [xsp+54h] [xbp-19Ch]
  int32_t rarity; // [xsp+58h] [xbp-198h]
  int32_t limitCount; // [xsp+5Ch] [xbp-194h]
  int32_t frameType; // [xsp+60h] [xbp-190h]
  int exceedCount; // [xsp+64h] [xbp-18Ch]
  _DWORD *v318; // [xsp+68h] [xbp-188h]
  Il2CppObject *v319; // [xsp+70h] [xbp-180h]
  EventServantPointRankMaster_o *v320; // [xsp+78h] [xbp-178h]
  int32_t AtkBoostValue; // [xsp+78h] [xbp-178h]
  struct EquipTargetInfo_o *v322; // [xsp+80h] [xbp-170h]
  ServantLeaderInfo_o *v323; // [xsp+88h] [xbp-168h]
  int32_t TimesToRestart; // [xsp+88h] [xbp-168h]
  struct System_Int32_array *v325; // [xsp+90h] [xbp-160h]
  bool IsDataLost; // [xsp+90h] [xbp-160h]
  bool v327; // [xsp+90h] [xbp-160h]
  System_Collections_Generic_IEnumerable_T__o *collection; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectiona; // [xsp+98h] [xbp-158h]
  System_Collections_Generic_IEnumerable_T__o *collectionb; // [xsp+98h] [xbp-158h]
  EventCampaignEntity_array *v331; // [xsp+A0h] [xbp-150h]
  EventCampaignEntity_array *v332; // [xsp+A0h] [xbp-150h]
  Il2CppObject *v333; // [xsp+A8h] [xbp-148h]
  int v334; // [xsp+A8h] [xbp-148h]
  ServantEntity_o *servantEntity; // [xsp+B0h] [xbp-140h]
  int32_t value; // [xsp+BCh] [xbp-134h]
  SupportServantData_o *v337; // [xsp+C0h] [xbp-130h]
  int32_t eventId; // [xsp+C8h] [xbp-128h]
  _BOOL4 eventIda; // [xsp+C8h] [xbp-128h]
  UserServantEntity_o *eventIdb; // [xsp+C8h] [xbp-128h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v341; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v342; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v343; // [xsp+110h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+138h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+144h] [xbp-ACh] BYREF
  SkillInfo_array *v346; // [xsp+148h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+150h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+158h] [xbp-98h] BYREF
  int v349; // [xsp+164h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+168h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+178h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v352; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v353; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v354; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v355; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v356; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v357; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v358; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v359; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v360; // 0:x0.16
  UnityEngine_Vector3_o v361; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23984 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_QuestPhaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_int____78033856);
    sub_1C2D490(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C2D490(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C2D490(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
    sub_1C2D490(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C2D490(&Rarity_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C2D490(&SupportSelectItemDraw_TypeInfo);
    sub_1C2D490(&TutorialFlag_TypeInfo);
    sub_1C2D490(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_1C2D490(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_1C2D490(&StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C2D490(&StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C2D490(&StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C2D490(&StringLiteral_397/*"#,0"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23984 = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v349 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v346 = 0;
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
  v14 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v14;
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
  v337 = supportServantData;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_608;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_608;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v352.fields.currentCryptoKey = v21;
      *(_QWORD *)&v352.fields.fakeValue = v20;
      v322 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v352, 0);
      if ( !v19 )
        goto LABEL_608;
      supportServantData = v337;
      v22 = 0;
      v319 = DataMasterBase_object__object__int___GetEntity(
               v19,
               gameObject,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_608;
    v22 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v22 )
      goto LABEL_608;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v353.fields.currentCryptoKey = klass;
    *(_QWORD *)&v353.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v353, 0);
    if ( !v24 )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v24,
                            gameObject,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    supportServantData = v337;
  }
  else
  {
    v22 = 0;
  }
  v322 = 0;
  v319 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v74 = 1;
    goto LABEL_109;
  }
LABEL_37:
  if ( UserServantLeaderEntity->fields.userSvtId )
  {
    svtId = UserServantLeaderEntity->fields.svtId;
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            svtId,
                            (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !gameObject )
      goto LABEL_608;
    v333 = v22;
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
      v29 = *(_DWORD *)(gameObject + 20);
      v318 = (_DWORD *)gameObject;
      lv[0] = v29;
      if ( v322 )
        lv[0] = v322->fields.atk + v29;
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
      v30 = v318[4];
      v349 = v30;
      if ( v322 )
        v349 = v322->fields.hp + v30;
      rarity = v318[6];
      exceedCount = servantLeaderInfo->fields.exceedCount;
      frameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v318[10], 0);
      limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0);
      ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0);
      gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0);
      if ( !tdInfo )
        goto LABEL_608;
      strengthStatus = tdInfo->fields.strengthStatus;
      v313 = tdInfo->fields.lv;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      ServantLeaderInfo__GetAppendPassiveSkillInfo_43263964(servantLeaderInfo, &v346, 0, 0);
      gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
      this->fields.isGrandServant = gameObject & 1;
      eventSetupInfo = supportServantData->fields.eventSetupInfo;
      v323 = servantLeaderInfo;
      if ( !eventSetupInfo )
        goto LABEL_199;
      eventIdList = eventSetupInfo->fields.eventIdList;
      if ( !eventIdList )
        goto LABEL_608;
      if ( eventIdList->max_length )
      {
        v304 = UserServantLeaderEntity;
        codeIds = this;
        EventUpVal_43251356 = ServantLeaderInfo__getEventUpVal_43251356(
                                servantLeaderInfo,
                                &eventUpVallInfo,
                                eventSetupInfo,
                                0);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventDetailMaster___);
        v320 = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v35 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
        v36 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_QuestPhaseMaster___);
        v37 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v37,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v39 = supportServantData->fields.eventSetupInfo;
        if ( !v39 )
          goto LABEL_608;
        v40 = v39->fields.eventIdList;
        v297 = EventUpVal_43251356;
        if ( !v40 )
          goto LABEL_608;
        max_length = v40->max_length;
        if ( (int)max_length >= 1 )
        {
          v42 = 0;
          collection = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
          v331 = eventFriendPoints;
          v325 = v40;
          while ( 1 )
          {
            if ( v42 >= (unsigned int)max_length )
              goto LABEL_609;
            if ( !Master_object )
              goto LABEL_608;
            eventId = v40->m_Items[v42];
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    eventId,
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v320 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent(v320, eventId, 0) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v45 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v44 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v354.fields.currentCryptoKey = v45;
                *(_QWORD *)&v354.fields.fakeValue = v44;
                v46 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v354, 0);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v320, eventId, eventSvtPoint, v46, 0);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v49 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41495560(v49, eventId, 0);
                if ( !v49 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v49,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0);
                if ( !v37 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v37,
                  0,
                  (Il2CppObject *)v49,
                  (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v50 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v50, eventId, servantEntity, 0);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_608;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
              if ( !v50 )
                goto LABEL_608;
              EventPersonalMargeUpValInfo__Add(v50, (EventDropItemUpValInfo_array *)gameObject, 0);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v50, 0);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v50, 0);
                if ( !gameObject )
                  goto LABEL_608;
                v52 = *(_QWORD *)(gameObject + 24);
                v53 = gameObject;
                if ( (int)v52 >= 1 )
                  break;
              }
            }
LABEL_102:
            v40 = v325;
            Master_object = (Il2CppObject *)collection;
            eventFriendPoints = v331;
            v22 = v333;
            ++v42;
            LODWORD(max_length) = v325->max_length;
            if ( (__int64)v42 >= (int)max_length )
              goto LABEL_103;
          }
          v54 = 0;
          while ( v54 < (unsigned int)v52 )
          {
            v55 = *(Il2CppObject **)(v53 + 32 + 8 * v54);
            if ( !supportServantData->fields.questRestrictionInfo )
              goto LABEL_612;
            v56 = sub_1C2D6DC(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
            System_Object___ctor((Il2CppObject *)v56, 0);
            if ( !v55 )
              goto LABEL_608;
            v57 = v55[2].monitor;
            if ( !v57 )
              goto LABEL_608;
            if ( !v35 )
              goto LABEL_608;
            gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                                    v57[4],
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
            if ( !gameObject )
              goto LABEL_608;
            v58 = *(_DWORD *)(gameObject + 24);
            v59 = gameObject;
            if ( v58 == 1 || v58 == 16 )
              goto LABEL_613;
            questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
            if ( !questRestrictionInfo )
              goto LABEL_608;
            if ( eventId == questRestrictionInfo->fields.eventId )
            {
LABEL_613:
              v61 = supportServantData->fields.questRestrictionInfo;
              if ( !v61 )
                goto LABEL_608;
              if ( !v36 )
                goto LABEL_608;
              gameObject = (__int64)QuestPhaseMaster__GetEntity(
                                      (QuestPhaseMaster_o *)v36,
                                      v61->fields.questId,
                                      v61->fields.questPhase,
                                      0);
              if ( !v56 )
                goto LABEL_608;
              *(_QWORD *)(v56 + 16) = gameObject;
              sub_1C2D434((CGThumbnailListItem_o *)(v56 + 16), gameObject, v62, v63);
              v64 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v59 + 80);
              if ( !v64 )
                goto LABEL_608;
              if ( !v64[1].monitor
                || (v65 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo),
                    System_Func_int__bool____ctor(
                      v65,
                      (Il2CppObject *)v56,
                      Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                      0),
                    v66 = (System_Func_TSource__bool__o *)v65,
                    supportServantData = v337,
                    gameObject = System_Linq_Enumerable__Any_int__51232876(
                                   v64,
                                   v66,
                                   (const MethodInfo_30DC06C *)Method_System_Linq_Enumerable_Any_int____78033856),
                    (gameObject & 1) != 0) )
              {
LABEL_612:
                if ( !v37 )
                  goto LABEL_608;
                items = v37->fields._items;
                v68 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v37->fields._version;
                if ( !items )
                  goto LABEL_608;
                v69 = v37->fields._size;
                if ( (unsigned int)v69 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v37,
                    v55,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = &items->obj.klass + v69;
                  v37->fields._size = v69 + 1;
                  v70[4] = (Il2CppClass *)v55;
                  sub_1C2D434((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v55, v38, v51);
                }
              }
            }
            LODWORD(v52) = *(_DWORD *)(v53 + 24);
            if ( (__int64)++v54 >= (int)v52 )
              goto LABEL_102;
          }
          goto LABEL_609;
        }
LABEL_103:
        v71 = supportServantData->fields.questRestrictionInfo;
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        svtId = value;
        if ( v71 )
        {
          AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                   (PartyOrganizationUtility_o *)gameObject,
                                   &isDuplicate,
                                   (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v37,
                                   0);
          gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
          if ( !gameObject )
            goto LABEL_608;
          v73 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
        }
        else
        {
          v73 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v37;
        }
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       v73,
                                                                       0);
        UserServantLeaderEntity = v304;
        this = codeIds;
      }
      else
      {
LABEL_199:
        collectiona = 0;
        v297 = 0;
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
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v114 = *(_DWORD *)(gameObject + 56);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        if ( v114 < 1 )
          goto LABEL_228;
        if ( !supportServantData->fields.questRestrictionInfo )
          goto LABEL_608;
        v115 = *(_DWORD *)(gameObject + 60);
        if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_43206784(
               supportServantData->fields.questRestrictionInfo,
               v115,
               0) )
        {
          v116 = supportServantData->fields.questRestrictionInfo;
          v118 = *(_QWORD *)&v323->fields.svtId.fields.currentCryptoKey;
          v117 = *(_QWORD *)&v323->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v357.fields.currentCryptoKey = v118;
          *(_QWORD *)&v357.fields.fakeValue = v117;
          v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v357, 0);
          v120 = v323->fields.limitCount;
          v121 = v119;
          gameObject = ServantLeaderInfo__getDispLimitCount(v323, 0);
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
          supportServantData = v337;
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
      v110 = v297;
      IsDataLost = ServantLeaderInfo__IsDataLost(v323, supportServantData->fields.questRestrictionInfo, 0);
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v323, supportServantData->fields.questRestrictionInfo, 0);
    }
    else
    {
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                              UserServantLeaderEntity->fields.userSvtId,
                              (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      if ( !gameObject )
        goto LABEL_608;
      v103 = (UserServantEntity_o *)gameObject;
      gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0, 0);
      lv[1] = v103->fields.lv;
      if ( !gameObject )
        goto LABEL_608;
      v104 = *(_DWORD *)(gameObject + 20);
      v318 = (_DWORD *)gameObject;
      lv[0] = v104;
      if ( v22 )
        lv[0] = LODWORD(v22[16].monitor) + v104;
      AtkBoostValue = UserServantEntity__get_AtkBoostValue(v103, 0);
      HpBoostValue = UserServantEntity__get_HpBoostValue(v103, 0);
      v105 = v318[4];
      v349 = v105;
      if ( v22 )
        v349 = HIDWORD(v22[16].monitor) + v105;
      rarity = v318[6];
      exceedCount = v103->fields.exceedCount;
      frameType = UserServantEntity__GetFrameType(v103, v318[10], 0);
      limitCount = UserServantEntity__getCardImageLimitCount(v103, 0, 0);
      UserServantEntity__getSkillInfo(v103, &skillInfoList, -1, -1, 1, 0, -1, 0);
      gameObject = UserServantEntity__getTreasureDeviceInfo(v103, &tdInfo, -1, -1, 0, 0);
      if ( !tdInfo )
        goto LABEL_608;
      v106 = tdInfo->fields.lv;
      v107 = tdInfo->fields.strengthStatus;
      treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
      UserServantEntity__GetAppendPassiveSkillInfo_42964024(v103, &v346, 0);
      this->fields.isGrandServant = UserServantEntity__IsGrandServant(v103, 0);
      strengthStatus = v107;
      v313 = v106;
      if ( supportServantData->fields.eventSetupInfo )
      {
        if ( v22 )
        {
          v108 = v22[2];
          *(Il2CppObject *)&v343.fields.currentCryptoKey = v22[1];
          *(Il2CppObject *)&v343.fields.fakeValue = v108;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v342 = v343;
          v109 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v342, 0);
        }
        else
        {
          v109 = -1;
        }
        gameObject = sub_1C2D538(long___TypeInfo, 1);
        if ( !gameObject )
          goto LABEL_608;
        if ( !*(_DWORD *)(gameObject + 24) )
          goto LABEL_609;
        *(_QWORD *)(gameObject + 32) = v109;
        EventUpVal_42937112 = UserServantEntity__getEventUpVal_42937112(
                                v103,
                                &eventUpVallInfo,
                                supportServantData->fields.eventSetupInfo,
                                (System_Int64_array *)gameObject,
                                0,
                                0);
        gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v305 = UserServantLeaderEntity;
        codeIdsb = this;
        v124 = DataManager__GetMasterData_object_(
                 (DataManager_o *)gameObject,
                 (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___);
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v332 = eventFriendPoints;
        v125 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
        v126 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
        v127 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v127,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
        v128 = supportServantData->fields.eventSetupInfo;
        if ( !v128 )
          goto LABEL_608;
        v129 = v128->fields.eventIdList;
        v327 = EventUpVal_42937112;
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
                                    (const MethodInfo_3387D98 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !gameObject
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                  (gameObject & 1) == 0) )
            {
              if ( !v125 )
                goto LABEL_608;
              if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v125, v132, 0) )
              {
                v133 = collectionb[1];
                *(System_Collections_Generic_IEnumerable_T__o *)&v343.fields.currentCryptoKey = *collectionb;
                *(System_Collections_Generic_IEnumerable_T__o *)&v343.fields.fakeValue = v133;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
                v341 = v343;
                v134 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48831392(&v341, 0);
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
                v140 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_41495560(v140, v132, 0);
                if ( !v140 )
                  goto LABEL_608;
                EventMargeItemUpValInfo__SetServantPointInfo(v140, BuddyPoint, v139, 0, 0);
                if ( !v127 )
                  goto LABEL_608;
                System_Collections_Generic_List_object___Insert(
                  v127,
                  0,
                  (Il2CppObject *)v140,
                  (const MethodInfo_378A934 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
                v126 = v136;
                v103 = eventIdb;
              }
              v141 = (EventPersonalMargeUpValInfo_o *)sub_1C2D6DC(EventPersonalMargeUpValInfo_TypeInfo);
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
                v143 = *(_DWORD *)(gameObject + 24);
                v144 = gameObject;
                if ( v143 >= 1 )
                  break;
              }
            }
LABEL_274:
            LODWORD(v130) = v129->max_length;
            if ( (__int64)++v131 >= (int)v130 )
              goto LABEL_275;
          }
          v145 = 0;
          while ( v145 < v143 )
          {
            v11 = *(_QWORD *)(v144 + 8LL * (int)v145 + 32);
            if ( !v11 )
              goto LABEL_608;
            if ( *(_DWORD *)(v11 + 60) != 111 )
            {
              if ( !v127 )
                goto LABEL_608;
              v146 = v127->fields._items;
              v147 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v127->fields._version;
              if ( !v146 )
                goto LABEL_608;
              v148 = v127->fields._size;
              if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v127,
                  (Il2CppObject *)v11,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
              }
              else
              {
                v149 = &v146->obj.klass + v148;
                v127->fields._size = v148 + 1;
                v149[4] = (Il2CppClass *)v11;
                sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), v11, v38, v142);
              }
            }
            v143 = *(_DWORD *)(v144 + 24);
            if ( (int)++v145 >= v143 )
              goto LABEL_274;
          }
LABEL_609:
          sub_1C2D6F4(gameObject, v11, v38);
        }
LABEL_275:
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_39D40EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_608;
        v110 = v327;
        collectiona = (System_Collections_Generic_IEnumerable_T__o *)PartyOrganizationUtility__GetAddUpValInfos(
                                                                       (PartyOrganizationUtility_o *)gameObject,
                                                                       (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v127,
                                                                       0);
        UserServantLeaderEntity = v305;
        this = codeIdsb;
        supportServantData = v337;
        eventFriendPoints = v332;
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
      v150 = UserServantEntity__IsUniqueIndividualityRestriction(
               v103,
               supportServantData->fields.questRestrictionInfo,
               0);
      svtId = value;
      v113 = 0;
      IsUniqueIndividualityRestriction = v150;
      TimesToRestart = 0;
      IsDataLost = 0;
      cardParams = 0;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !gameObject )
      goto LABEL_608;
    v334 = v113;
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
        v153 = this->fields.servantClassIcon;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
          gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        }
        v154 = *(UnityEngine_Vector2_o **)(gameObject + 184);
        if ( isGrandServant )
        {
          if ( !v153 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v153, v154[1], 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
          x = static_fields->GrandClassNamePosition.fields.x;
          y = static_fields->GrandClassNamePosition.fields.y;
        }
        else
        {
          if ( !v153 )
            goto LABEL_608;
          ServantClassIconComponent__RePositionClassIcon(v153, *v154, 0);
          gameObject = (__int64)this->fields.servantClassIcon;
          if ( !gameObject )
            goto LABEL_608;
          v158 = SupportSelectItemDraw_TypeInfo->static_fields;
          x = v158->ClassNamePosition.fields.x;
          y = v158->ClassNamePosition.fields.y;
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
      v160 = this->fields.levelLabel;
      gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
      if ( !v160 )
        goto LABEL_608;
      UILabel__set_text(v160, (System_String_o *)gameObject, 0);
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
      v162 = lv[1];
      v163 = v318[10];
      if ( !Rarity_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
      Icon_40221568 = Rarity__getIcon_40221568(rarity, exceedCount, v162, v163, 0);
      if ( exceedCount < 1 )
      {
        v166 = 0;
      }
      else
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantExceedMaster___);
        if ( !gameObject )
          goto LABEL_608;
        RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v163, exceedCount, 0, 0, 0);
        gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
        if ( !gameObject )
          goto LABEL_608;
        v166 = ServantLvDetailMaster__GetRarityIcon(
                 (ServantLvDetailMaster_o *)gameObject,
                 v163,
                 lv[1],
                 RarityIcon,
                 0,
                 0);
      }
      v167 = this->fields.raritySprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( v166 >= 3 )
      {
        AtlasManager__SetEventSprite(v167, Icon_40221568, 0);
      }
      else
      {
        AtlasManager__SetCommon(v167, 0);
        gameObject = (__int64)this->fields.raritySprite;
        if ( !gameObject )
          goto LABEL_608;
        UISprite__set_spriteName((UISprite_o *)gameObject, Icon_40221568, 0);
      }
      gameObject = (__int64)this->fields.raritySprite;
      supportServantData = v337;
      if ( !gameObject )
        goto LABEL_608;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
        gameObject,
        *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
      gameObject = (__int64)this->fields.raritySprite;
      v168 = exceedCount >= 1
           ? this->fields.baseRarityPosition.fields.x + 1.0
           : this->fields.baseRarityPosition.fields.x;
      if ( !gameObject )
        goto LABEL_608;
      v169 = this->fields.baseRarityPosition.fields.y;
      z = this->fields.baseRarityPosition.fields.z;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v361.fields.x = v168;
      v361.fields.y = v169;
      v361.fields.z = z;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v361, 0);
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
      v172 = this->fields.skillListTreasureDevice;
      v173 = skillInfoList;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_41056784(v173, 0);
      if ( !v172 )
        goto LABEL_608;
      SkillListTreasureDeviceComponent__Set(
        v172,
        (System_String_o *)gameObject,
        v313,
        strengthStatus,
        treasureDeviceNum,
        0,
        0);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v11 = (unsigned __int64)this->fields.skillInfoUiWidget;
        v176 = *(_QWORD *)(gameObject + 16);
        v177 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v176 )
          goto LABEL_608;
        v178 = *(int *)(gameObject + 24);
        if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        }
        else
        {
          v179 = v176 + 8 * v178;
          *(_DWORD *)(gameObject + 24) = v178 + 1;
          *(_QWORD *)(v179 + 32) = v11;
          sub_1C2D434((CGThumbnailListItem_o *)(v179 + 32), v11, v174, v175);
        }
      }
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
    {
      if ( v346 && v346->max_length )
      {
        gameObject = (__int64)this->fields.appendSkillList;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v181 = this->fields.appendSkillList;
        v182 = v346;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (__int64)LocalizationManager__GetLevelList_41056784(v182, 0);
        if ( !v181 )
          goto LABEL_608;
        AppendSkillListComponent__Set(v181, (System_String_o *)gameObject, 0);
        gameObject = (__int64)this->fields.switchSkillUIList;
        if ( gameObject )
        {
          v11 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
          v185 = *(_QWORD *)(gameObject + 16);
          v186 = Method_System_Collections_Generic_List_UIWidget__Add__;
          ++*(_DWORD *)(gameObject + 28);
          if ( !v185 )
            goto LABEL_608;
          v187 = *(int *)(gameObject + 24);
          if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)gameObject,
              (Il2CppObject *)v11,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v188 = v185 + 8 * v187;
            *(_DWORD *)(gameObject + 24) = v187 + 1;
            *(_QWORD *)(v188 + 32) = v11;
            sub_1C2D434((CGThumbnailListItem_o *)(v188 + 32), v11, v183, v184);
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
      v190 = this->fields.switchSkillUIList;
      if ( v190 )
      {
        v191 = this->fields.switchSkillInfo;
        gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                                (System_Collections_Generic_List_object__o *)v190,
                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
        if ( !v191 )
          goto LABEL_608;
        SwitchUIWidgetComponent__Set(v191, (UIWidget_array *)gameObject, 0, 0);
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
        ServantCommandCardListComponent__Set_40772840(
          (ServantCommandCardListComponent_o *)gameObject,
          svtId,
          cardParams,
          codeIdsa,
          2,
          0,
          0);
      else
        ServantCommandCardListComponent__Set_40773084(
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
      v194 = 0.92157;
      gameObject = (__int64)this->fields.attackLabel;
      if ( AtkBoostValue <= 0 )
        v195 = 1.0;
      else
        v195 = 0.015686;
      if ( AtkBoostValue <= 0 )
        v194 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v196 = 1.0;
      v197 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v194 - 1), 0);
      v198 = this->fields.attackLabel;
      gameObject = (__int64)System_Int32__ToString_64968716((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( !v198 )
        goto LABEL_608;
      UILabel__set_text(v198, (System_String_o *)gameObject, 0);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
    {
      v200 = 0.92157;
      gameObject = (__int64)this->fields.hpLabel;
      if ( HpBoostValue <= 0 )
        v201 = 1.0;
      else
        v201 = 0.015686;
      if ( HpBoostValue <= 0 )
        v200 = 1.0;
      if ( !gameObject )
        goto LABEL_608;
      v202 = 1.0;
      v203 = 1.0;
      UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v200 - 1), 0);
      v204 = this->fields.hpLabel;
      gameObject = (__int64)System_Int32__ToString_64968716((int32_t)&v349, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
      if ( !v204 )
        goto LABEL_608;
      UILabel__set_text(v204, (System_String_o *)gameObject, 0);
    }
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v206 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      v208 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v206, frameType, baseDefaultUIAtlas, 0, v208, 0);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
    {
      v210 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      v212 = this->fields.isGrandServant;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v210, frameType, base2DefaultUIAtlas, 0, v212, 0);
    }
    gameObject = (__int64)this->fields.backClassIcon;
    supportServantData = v337;
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
      v214 = this->fields.isGrandServant;
      v215 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v214,
                     v215,
                     maskSpriteDefaultSpriteName,
                     maskSpriteDefaultAtlas,
                     0);
      v218 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v337;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v218 )
          goto LABEL_608;
        UIWidget__set_width(v218, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
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
        v219 = 0.0;
        v220 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v220->GrandMaskPosition05.fields.y;
        p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&v220->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v337;
        if ( !v218 )
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
        v219 = this->fields.maskSpriteDefaultPosition.fields.z;
        p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
      v223 = *(_DWORD *)p_y;
      v224 = p_GrandMaskPosition05->fields.x;
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)gameObject,
        *(UnityEngine_Vector3_o *)(&v219 - 2),
        0);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
    {
      v227 = this->fields.isGrandServant;
      v228 = this->fields.sortieMaskSprite;
      defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
      defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                     v227,
                     v228,
                     defaultSortieMaskSpriteName,
                     defaultSortieMaskAtlas,
                     0);
      v231 = (UIWidget_o *)this->fields.sortieMaskSprite;
      if ( (gameObject & 1) != 0 )
      {
        supportServantData = v337;
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
        if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        if ( !v231 )
          goto LABEL_608;
        UIWidget__set_width(v231, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
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
        v232 = SupportSelectItemDraw_TypeInfo->static_fields;
        v233 = &v232->GrandMaskPosition05.fields.y;
        p_defaultSortieMaskPosition = &v232->GrandMaskPosition05;
      }
      else
      {
        supportServantData = v337;
        if ( !v231 )
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
        v233 = &this->fields.defaultSortieMaskPosition.fields.y;
        p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
      }
      v362.fields.y = *v233;
      v362.fields.x = p_defaultSortieMaskPosition->fields.x;
      v362.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v362, 0);
    }
    if ( ((v334 | eventIda) & 1) != 0 )
    {
      v235 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v235, 0, 0) )
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
      v236 = LocalizationManager__Get((System_String_o *)StringLiteral_10258/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
      goto LABEL_459;
    }
    if ( supportServantData->fields.isFriendInfo || !ServantEntity__checkIsHeroineSvt(servantEntity, 0) )
      goto LABEL_472;
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_40206092(126, 0) )
    {
      v241 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v241, 0, 0) )
        goto LABEL_490;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v242 = 1;
    }
    else
    {
LABEL_472:
      if ( IsUniqueIndividualityRestriction || UniqueSvtRestriction )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v243 = LocalizationManager__Get((System_String_o *)StringLiteral_6452/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
        SupportSelectItemDraw__SetWarningMessage(this, v243, 1, v244);
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
        v74 = 0;
        v94 = v110 != 0;
        if ( eventFriendPoints && (gameObject & 1) != 0 )
        {
          v254 = eventFriendPoints->max_length;
          if ( v254 < 1 )
          {
            v74 = 0;
          }
          else
          {
            v255 = 0;
            v256 = 0;
            v257 = 0;
            m_Items = eventFriendPoints->m_Items;
            do
            {
              if ( (unsigned int)v255 >= v254 )
                goto LABEL_609;
              v259 = m_Items[v255];
              if ( !v259 )
                goto LABEL_608;
              gameObject = System_Array__IndexOf_int_(
                             v259->fields.targetIds,
                             value,
                             (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
              v254 = eventFriendPoints->max_length;
              if ( (unsigned int)v255 >= v254 )
                goto LABEL_609;
              v260 = m_Items[v255];
              if ( !v260 )
                goto LABEL_608;
              targetIds = v260->fields.targetIds;
              if ( targetIds )
                v262 = LODWORD(targetIds->max_length) == 0;
              else
                v262 = 1;
              if ( (v262 || (int)gameObject >= 0) && v257 < v260->fields.value )
              {
                v256 = v260->fields.eventId;
                v257 = v260->fields.value;
              }
              ++v255;
            }
            while ( (int)v255 < v254 );
            if ( v257 >= 1 )
            {
              v263 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
              v264 = v263;
              if ( collectiona )
                System_Collections_Generic_List_object____ctor_58233976(
                  v263,
                  collectiona,
                  (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___77938608);
              else
                System_Collections_Generic_List_object____ctor(
                  v263,
                  (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
              v290 = (EventMargeItemUpValInfo_o *)sub_1C2D6DC(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_41495480(v290, v256, v257, 0);
              if ( !v264 )
                goto LABEL_608;
              v293 = v264->fields._items;
              v294 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
              ++v264->fields._version;
              supportServantData = v337;
              if ( !v293 )
                goto LABEL_608;
              v295 = v264->fields._size;
              if ( (unsigned int)v295 >= LODWORD(v293->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v264,
                  (Il2CppObject *)v290,
                  *(const MethodInfo_3789B84 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
              }
              else
              {
                v296 = &v293->obj.klass + v295;
                v264->fields._size = v295 + 1;
                v296[4] = (Il2CppClass *)v290;
                sub_1C2D434((CGThumbnailListItem_o *)(v296 + 4), (int32_t)v290, v291, v292);
              }
              v93 = System_Collections_Generic_List_object___ToArray(
                      v264,
                      (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
              v74 = 0;
              if ( !v22 )
                goto LABEL_522;
              goto LABEL_184;
            }
            supportServantData = v337;
            v74 = 0;
          }
        }
        v93 = (System_Object_array *)collectiona;
        if ( !v22 )
          goto LABEL_522;
        goto LABEL_184;
      }
      if ( IsDataLost )
      {
        v240 = 1;
        v239 = this;
        v238 = 0;
        v237 = (System_String_o *)StringLiteral_1/*""*/;
        goto LABEL_460;
      }
      if ( TimesToRestart >= 1 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v245 = LocalizationManager__Get((System_String_o *)StringLiteral_11540/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
        LODWORD(v343.fields.currentCryptoKey) = TimesToRestart;
        v249 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v343, v246, v247, v248);
        v236 = System_String__Format(v245, v249, 0);
LABEL_459:
        v237 = v236;
        v238 = 1;
        v239 = this;
        v240 = 0;
LABEL_460:
        SupportSelectItemDraw__SetMaskMessage(v239, v237, v238, v240, v226);
        goto LABEL_491;
      }
      v250 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v250, 0, 0) )
      {
LABEL_490:
        SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
        goto LABEL_491;
      }
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_608;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_608;
      v242 = 0;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v242, 0);
    goto LABEL_490;
  }
  v74 = 0;
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
  v76 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
  if ( !v76 )
    goto LABEL_608;
  if ( *(_DWORD *)(v76 + 24) <= (unsigned int)classPos )
    goto LABEL_609;
  if ( !backClassIcon )
    goto LABEL_608;
  UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v76 + 8LL * classPos + 32), 0);
  v77 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v77, 0, 0) )
  {
    v78 = this->fields.baseSprite;
    v79 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v78, 9, v79, 0, 0, 0);
  }
  v80 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v80, 0, 0) )
  {
    v81 = this->fields.base2Sprite;
    v82 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v81, 9, v82, 0, 0, 0);
  }
  v83 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v83, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v84 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v84, 0, 0) )
  {
    gameObject = (__int64)this->fields.levelLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v85 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v85, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  v86 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v86, 0, 0) )
  {
    gameObject = (__int64)this->fields.attackLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v87 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v87, 0, 0) )
  {
    gameObject = (__int64)this->fields.hpLabel;
    if ( !gameObject )
      goto LABEL_608;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  v88 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v88, 0, 0) )
  {
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
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
  if ( !v22 )
  {
LABEL_522:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_608;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_608;
    if ( v322 )
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
      v267 = *(_QWORD *)&v322->fields.svtId.fields.currentCryptoKey;
      v266 = *(_QWORD *)&v322->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v358.fields.currentCryptoKey = v267;
      *(_QWORD *)&v358.fields.fakeValue = v266;
      v268 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v358, 0);
      ImagePartsGroupIdxs_k__BackingField = v322->fields._ImagePartsGroupIdxs_k__BackingField;
      v270 = v268;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v270, ImagePartsGroupIdxs_k__BackingField, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      supportServantData = v337;
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        v102 = v322->fields.limitCount;
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
      v289 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v289, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_608;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_608;
        LOBYTE(v11) = 0;
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
  v97 = v22[5].klass;
  v96 = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v355.fields.currentCryptoKey = v97;
  *(_QWORD *)&v355.fields.fakeValue = v96;
  v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v355, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v95, v98, 0, 0);
  v99 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  supportServantData = v337;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v99, 0, 0) )
  {
    v101 = v22[6].klass;
    v100 = v22[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v356.fields.currentCryptoKey = v101;
    *(_QWORD *)&v356.fields.fakeValue = v100;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v356, 0);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_608;
    v102 = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_536:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( v102 >= 4 )
    {
      if ( !v319 )
        goto LABEL_608;
      v11 = SLODWORD(v319[5].monitor) >= v102;
    }
    else
    {
      v11 = 0;
    }
    if ( gameObject )
    {
LABEL_541:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0);
      goto LABEL_542;
    }
LABEL_608:
    sub_1C2D6EC(gameObject, v11);
  }
LABEL_542:
  v272 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v272, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v74 & 1) == 0 )
      {
        v273 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v273 )
        {
          v275 = *(_QWORD *)&v273->fields.svtId.fields.currentCryptoKey;
          v274 = *(_QWORD *)&v273->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v359.fields.currentCryptoKey = v275;
          *(_QWORD *)&v359.fields.fakeValue = v274;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v359, 0);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_608;
          v276 = gameObject;
          v277 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_563:
          v283 = v277;
          goto LABEL_565;
        }
      }
    }
    else if ( (v74 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v282 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v281 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v360.fields.currentCryptoKey = v282;
        *(_QWORD *)&v360.fields.fakeValue = v281;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v360, 0);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_608;
        v276 = gameObject;
        v277 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_563;
      }
    }
    v283 = -1;
    v276 = -1;
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
      v276,
      v283,
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
      v279 = 0;
      goto LABEL_574;
    }
    goto LABEL_575;
  }
  v278 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v278, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_608;
    v279 = v94;
LABEL_574:
    ShiningIconComponent__Set_40800416((ShiningIconComponent_o *)gameObject, v279, 0);
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
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v12; // x21
  UIWidget_o *v13; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float z; // s2 OVERLAPPED
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  _BOOL4 isGrandServant; // w23
  UISprite_o *v19; // x22
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  UIWidget_o *sortieMaskSprite; // x21
  struct SupportSelectItemDraw_StaticFields *v22; // x9
  int v23; // s1
  float x; // s0
  float v25; // s0
  float v26; // s8
  UnityEngine_Transform_o *v27; // x20
  float restrictionMaskMessageWidth; // s0
  float v29; // s0 OVERLAPPED
  float v30; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4C23986 & 1) == 0 )
  {
    sub_1C2D490(&AtlasManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SupportSelectItemDraw_TypeInfo);
    sub_1C2D490(&StringLiteral_20384/*"img_frames_mask05"*/);
    sub_1C2D490(&StringLiteral_18473/*"datalost_party_edit"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23986 = 1;
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
      v12 = this->fields.restrictionMaskSprite;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18473/*"datalost_party_edit"*/, 0);
      v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v13 )
        goto LABEL_56;
      UIWidget__set_width(v13, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0);
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
      v19 = this->fields.restrictionMaskSprite;
      maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      if ( AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
             isGrandServant,
             v19,
             (System_String_o *)StringLiteral_20384/*"img_frames_mask05"*/,
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
        v22 = SupportSelectItemDraw_TypeInfo->static_fields;
        p_y = &v22->GrandMaskPosition05.fields.y;
        p_DATA_LOST_MASK_POSITION = (struct UnityEngine_Vector3_o *)&v22->GrandMaskPosition05;
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
    v23 = *(_DWORD *)p_y;
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
      LODWORD(v25) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_56;
      v26 = v25;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v26 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4C20DA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
        }
        v33 = UnityEngine_Vector3_TypeInfo->static_fields;
        v29 = v33->oneVector.fields.x;
        y = v33->oneVector.fields.y;
        v30 = v33->oneVector.fields.z;
      }
      else
      {
        v29 = restrictionMaskMessageWidth / v26;
        v30 = 1.0;
        y = 1.0;
      }
      if ( !v27 )
        goto LABEL_56;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v27 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v27 )
        goto LABEL_56;
      v32 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v32->oneVector.fields.y;
      v30 = v32->oneVector.fields.z;
      v29 = v32->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v27, *(UnityEngine_Vector3_o *)&v29, 0);
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
    sub_1C2D6EC(gameObject, v10);
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
  __int64 v8; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x22
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Transform_o *v12; // x21
  float restrictionWarningMessageWidth; // s0
  float x; // s0 OVERLAPPED
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23987 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23987 = 1;
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
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4C20DA6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA6 = 1;
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
      if ( !v12 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4C20DA6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      if ( !v12 )
        goto LABEL_33;
      v17 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v17->oneVector.fields.y;
      z = v17->oneVector.fields.z;
      x = v17->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v19.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v19.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v19.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v19, 0);
        return;
      }
    }
LABEL_33:
    sub_1C2D6EC(gameObject, v8);
  }
}


void SupportSelectItemDraw___c__DisplayClass66_0___ctor(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool SupportSelectItemDraw___c__DisplayClass66_0___SetItem_b__0(
        SupportSelectItemDraw___c__DisplayClass66_0_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  SupportSelectItemDraw___c__DisplayClass66_0_o *v4; // x20
  struct QuestPhaseEntity_o *questPhaseEntity; // x8

  v4 = this;
  if ( (byte_4C2398C & 1) == 0 )
  {
    this = (SupportSelectItemDraw___c__DisplayClass66_0_o *)sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4C2398C = 1;
  }
  questPhaseEntity = v4->fields.questPhaseEntity;
  if ( !questPhaseEntity )
    sub_1C2D6EC(this, *(_QWORD *)&individuality);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)questPhaseEntity->fields.individuality,
           individuality,
           (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
}