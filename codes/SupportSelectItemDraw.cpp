void SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  SupportSelectItemDraw_c *v1; // x8
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  __int64 v10; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w1
  struct SupportSelectItemDraw_StaticFields *static_fields; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7
  SupportSelectItemDraw_c *v75; // x8
  struct SupportSelectItemDraw_StaticFields *v76; // x8

  if ( (byte_4D2CED0 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&SupportSelectItemDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_20370/*"icon_class1002"*/);
    sub_1C93AD4(&StringLiteral_20368/*"icon_class007"*/);
    sub_1C93AD4(&StringLiteral_20367/*"icon_class006"*/);
    sub_1C93AD4(&StringLiteral_20365/*"icon_class004"*/);
    sub_1C93AD4(&StringLiteral_20362/*"icon_class001"*/);
    sub_1C93AD4(&StringLiteral_20369/*"icon_class1001"*/);
    sub_1C93AD4(&StringLiteral_20363/*"icon_class002"*/);
    sub_1C93AD4(&StringLiteral_20366/*"icon_class005"*/);
    sub_1C93AD4(&StringLiteral_20364/*"icon_class003"*/);
    byte_4D2CED0 = 1;
  }
  SupportSelectItemDraw_TypeInfo->static_fields->ClassIconPosition = (struct UnityEngine_Vector2_o)0x43420000C2400000LL;
  v1 = SupportSelectItemDraw_TypeInfo;
  SupportSelectItemDraw_TypeInfo->static_fields->GrandClassIconPosition = (struct UnityEngine_Vector2_o)0x43470000C2400000LL;
  v1->static_fields->ClassNamePosition = (struct UnityEngine_Vector2_o)0xC282000000000000LL;
  v1->static_fields->GrandClassNamePosition = (struct UnityEngine_Vector2_o)0xC28E000000000000LL;
  v2 = sub_1C93B7C(string___TypeInfo, 9);
  if ( !v2 )
    sub_1C93D2C(0, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_14;
  v11 = StringLiteral_20369/*"icon_class1001"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_20369/*"icon_class1001"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9);
  if ( *(_DWORD *)(v10 + 24) <= 1u )
    goto LABEL_14;
  v18 = StringLiteral_20362/*"icon_class001"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_20362/*"icon_class001"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v10 + 24) <= 2u )
    goto LABEL_14;
  v25 = StringLiteral_20363/*"icon_class002"*/;
  *(_QWORD *)(v10 + 48) = StringLiteral_20363/*"icon_class002"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24);
  if ( *(_DWORD *)(v10 + 24) <= 3u )
    goto LABEL_14;
  v32 = StringLiteral_20364/*"icon_class003"*/;
  *(_QWORD *)(v10 + 56) = StringLiteral_20364/*"icon_class003"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 56), v32, v26, v27, v28, v29, v30, v31);
  if ( *(_DWORD *)(v10 + 24) <= 4u )
    goto LABEL_14;
  v39 = StringLiteral_20365/*"icon_class004"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_20365/*"icon_class004"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 64), v39, v33, v34, v35, v36, v37, v38);
  if ( *(_DWORD *)(v10 + 24) <= 5u )
    goto LABEL_14;
  v46 = StringLiteral_20366/*"icon_class005"*/;
  *(_QWORD *)(v10 + 72) = StringLiteral_20366/*"icon_class005"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 72), v46, v40, v41, v42, v43, v44, v45);
  if ( *(_DWORD *)(v10 + 24) <= 6u
    || (v53 = StringLiteral_20367/*"icon_class006"*/,
        *(_QWORD *)(v10 + 80) = StringLiteral_20367/*"icon_class006"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 80), v53, v47, v48, v49, v50, v51, v52),
        *(_DWORD *)(v10 + 24) <= 7u)
    || (v60 = StringLiteral_20368/*"icon_class007"*/,
        *(_QWORD *)(v10 + 88) = StringLiteral_20368/*"icon_class007"*/,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 88), v60, v54, v55, v56, v57, v58, v59),
        *(_DWORD *)(v10 + 24) <= 8u) )
  {
LABEL_14:
    sub_1C93D34(v2);
  }
  v67 = StringLiteral_20370/*"icon_class1002"*/;
  *(_QWORD *)(v10 + 96) = StringLiteral_20370/*"icon_class1002"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 96), v67, v61, v62, v63, v64, v65, v66);
  static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
  static_fields->backClassIconFileList = (struct System_String_array *)v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->backClassIconFileList, v10, v69, v70, v71, v72, v73, v74);
  v75 = SupportSelectItemDraw_TypeInfo;
  *(_OWORD *)&SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05 = xmmword_D008F0;
  v76 = v75->static_fields;
  v76->DATA_LOST_MASK_POSITION.fields.z = 0.0;
  *(_QWORD *)&v76->DATA_LOST_MASK_WIDTH = 0x1020000009CLL;
  *(_QWORD *)&v76->DATA_LOST_MASK_POSITION.fields.x = 0x43410000BF800000LL;
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

  if ( (byte_4D2CECF & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&UnityEngine_Transform_TypeInfo);
    byte_4D2CECF = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C93D2C(0, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C93D2C(0, v5);
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
      v10 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v14 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
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
      sub_1C940C8(v15);
LABEL_37:
      sub_1C93D2C(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1C93D2C(0, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0);
      if ( !v23 )
        sub_1C93D2C(0, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0);
    }
  }
  v25 = sub_1C93C10(Enumerator, System_IDisposable_TypeInfo);
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
      v30 = sub_1C69E5C(v25, System_IDisposable_TypeInfo, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UISprite_o *v14; // x8
  struct System_String_o *mSpriteName; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct UISprite_o *v22; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *sortieMaskSprite; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct UISprite_o *v31; // x8
  struct UIAtlas_o *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct UISprite_o *v39; // x8
  struct System_String_o *v40; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  struct UISprite_o *v48; // x8
  struct UIAtlas_o *v49; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  struct UISprite_o *v57; // x8
  struct UIAtlas_o *v58; // x1
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  UnityEngine_Vector3_o localPosition; // 0:kr20_12.12

  if ( (byte_4D2CEC7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEC7 = 1;
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
    v14 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v14 )
      goto LABEL_46;
    mSpriteName = v14->fields.mSpriteName;
    this->fields.maskSpriteDefaultSpriteName = mSpriteName;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultSpriteName,
      (int32_t)mSpriteName,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v22 = this->fields.restrictionMaskSprite;
    if ( !v22 )
      goto LABEL_46;
    mAtlas = v22->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.maskSpriteDefaultAtlas,
      (int32_t)mAtlas,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
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
    v31 = this->fields.sortieMaskSprite;
    if ( !v31 )
      goto LABEL_46;
    v32 = v31->fields.mAtlas;
    this->fields.defaultSortieMaskAtlas = v32;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultSortieMaskAtlas,
      (int32_t)v32,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    v39 = this->fields.sortieMaskSprite;
    if ( !v39 )
      goto LABEL_46;
    v40 = v39->fields.mSpriteName;
    this->fields.defaultSortieMaskSpriteName = v40;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.defaultSortieMaskSpriteName,
      (int32_t)v40,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    transform = this->fields.sortieMaskSprite;
    if ( !transform )
      goto LABEL_46;
    *(_QWORD *)&this->fields.defaultSortieMaskWidth = *((_QWORD *)transform + 21);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_46;
    this->fields.defaultSortieMaskPosition = (struct UnityEngine_Vector2_o)UnityEngine_Transform__get_localPosition(
                                                                             (UnityEngine_Transform_o *)transform,
                                                                             0);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v48 = this->fields.baseSprite;
    if ( !v48 )
      goto LABEL_46;
    v49 = v48->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v49;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.baseDefaultUIAtlas,
      (int32_t)v49,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v57 = this->fields.base2Sprite;
    if ( v57 )
    {
      v58 = v57->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v58;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v58,
        (int32_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      goto LABEL_45;
    }
LABEL_46:
    sub_1C93D2C(transform, v4);
  }
LABEL_45:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v51);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v59;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.switchSkillUIList,
    (int32_t)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
}


void SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4D2CEC8 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CEC8 = 1;
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
    sub_1C93D2C(gameObject, v4);
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

  if ( (byte_4D2CECA & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CECA = 1;
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
    sub_1C93D2C(gameObject, v4);
  }
}


void SupportSelectItemDraw__SetActiveDragSwapGuide(SupportSelectItemDraw_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4D2CECD & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CECD = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0, 0) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1C93D2C(0, v6);
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
  if ( (byte_4D2CECE & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CECE = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0, 0) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1C93D2C(0, v6);
    ((void (__fastcall *)(struct UIWidget_o *, const MethodInfo *, long double))v7->klass->vtable._8_set_alpha.methodPtr)(
      v7,
      v7->klass->vtable._8_set_alpha.method,
      v3);
  }
}


void SupportSelectItemDraw__SetItem(
        SupportSelectItemDraw_o *this,
        SupportServantData_o *supportServantData,
        int32_t classPos,
        EventCampaignEntity_array *eventFriendPoints,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 gameObject; // x0
  unsigned __int64 v10; // x1
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
  Il2CppObject *v21; // x29
  Il2CppObject *MasterData_object; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *v23; // x19
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t svtId; // w22
  ServantEntity_o *v27; // x24
  ServantLeaderInfo_o *servantLeaderInfo; // x19
  int32_t v29; // w8
  int v30; // w8
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_44265520; // w19
  Il2CppObject *Master_object; // x20
  Il2CppObject *v35; // x23
  System_Collections_Generic_List_object__o *v36; // x22
  struct EventUpValSetupInfo_o *v37; // x8
  struct System_Int32_array *v38; // x9
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v40; // x27
  int32_t v41; // w26
  int32_t eventSvtPoint; // w19
  __int64 v43; // x20
  __int64 v44; // x21
  int32_t v45; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w19
  EventMargeItemUpValInfo_o *v48; // x20
  EventPersonalMargeUpValInfo_o *v49; // x20
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_ICollection_o **v56; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x8
  __int64 v64; // x25
  unsigned __int64 v65; // x20
  Il2CppObject *v66; // x21
  _DWORD *v67; // x8
  int v68; // w8
  __int64 v69; // x19
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  __int64 v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x19
  System_Func_int__bool__o *v73; // x28
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  struct QuestRestrictionInfo_o *v84; // x20
  EventMargeItemUpValInfo_array *AdjustUpValInfoArray; // x19
  System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *v86; // x1
  char v87; // w24
  UISprite_o *backClassIcon; // x19
  __int64 v89; // x8
  UnityEngine_Object_o *baseSprite; // x19
  UISprite_o *v91; // x19
  UIAtlas_o *baseDefaultUIAtlas; // x20
  UnityEngine_Object_o *base2Sprite; // x19
  UISprite_o *v94; // x19
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
  bool v106; // w22
  UISprite_o *equipSprite; // x19
  __int64 v108; // x20
  __int64 v109; // x21
  int32_t v110; // w0
  System_Int32_array *ImagePartsGroupIdxs_k__BackingField; // x20
  int32_t v112; // w21
  UnityEngine_Object_o *equipLimitCountSprite; // x19
  int v114; // w19
  __int64 v115; // x22
  int32_t v116; // w8
  int v117; // w8
  int32_t v118; // w20
  int32_t v119; // w21
  int32_t v120; // w23
  Il2CppObject v121; // q1
  int64_t v122; // x19
  UnityEngine_Object_o *v123; // x19
  int v124; // w20
  System_Int32_array *CommandCodeIdList; // x21
  ServantLeaderInfo_o *v126; // x23
  int v127; // w19
  int v128; // w20
  int32_t v129; // w20
  ServantEntity_o *v130; // x27
  System_Int32_array *v131; // x24
  QuestRestrictionInfo_o *v132; // x19
  __int64 v133; // x21
  __int64 v134; // x22
  int32_t v135; // w0
  int32_t v136; // w21
  int32_t v137; // w22
  _BOOL4 IsRestrictionServantIndividuality; // w0
  bool EventUpVal_43870140; // w19
  Il2CppObject *v140; // x23
  Il2CppObject *v141; // x26
  System_Collections_Generic_List_object__o *v142; // x24
  struct EventUpValSetupInfo_o *v143; // x8
  struct System_Int32_array *v144; // x29
  il2cpp_array_size_t v145; // x8
  unsigned __int64 v146; // x21
  int32_t v147; // w25
  __int128 v148; // q0
  int64_t v149; // x19
  int32_t v150; // w4
  int32_t BuddyPoint; // w20
  int32_t v152; // w0
  EventServantPointRankEntity_o *v153; // x0
  int32_t v154; // w28
  EventMargeItemUpValInfo_o *v155; // x19
  EventPersonalMargeUpValInfo_o *v156; // x20
  int32_t v157; // w2
  int32_t v158; // w3
  System_String_o *v159; // x4
  int32_t v160; // w5
  int64_t v161; // x6
  System_String_o *v162; // x7
  int v163; // w8
  __int64 v164; // x20
  unsigned int v165; // w19
  struct System_Object_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  Il2CppClass **v169; // x0
  _BOOL4 v170; // w0
  UnityEngine_Object_o *v171; // x19
  _BOOL4 isGrandServant; // w20
  ServantClassIconComponent_o *v173; // x19
  UnityEngine_Vector2_o *v174; // x8
  UnityEngine_Object_o *v176; // x19
  UILabel_o *v177; // x19
  UnityEngine_Object_o *v178; // x19
  System_Int32_array *v179; // x23
  int32_t v180; // w19
  int32_t v181; // w21
  System_String_o *Icon_41156280; // x20
  int32_t RarityIcon; // w19
  int32_t v184; // w19
  UISprite_o *v185; // x21
  float v186; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v189; // x19
  SkillListTreasureDeviceComponent_o *v190; // x19
  SkillInfo_array *v191; // x20
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  __int64 v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  __int64 v201; // x8
  UnityEngine_Object_o *v202; // x19
  AppendSkillListComponent_o *v203; // x19
  SkillInfo_array *v204; // x20
  int32_t v205; // w2
  int32_t v206; // w3
  System_String_o *v207; // x4
  int32_t v208; // w5
  int64_t v209; // x6
  System_String_o *v210; // x7
  __int64 v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  __int64 v214; // x8
  UnityEngine_Object_o *switchSkillInfo; // x19
  struct System_Collections_Generic_List_UIWidget__o *v216; // x0
  SwitchUIWidgetComponent_o *v217; // x19
  UnityEngine_Object_o *v218; // x19
  UnityEngine_Object_o *v219; // x19
  UILabel_o *v221; // x19
  UnityEngine_Object_o *v222; // x19
  UILabel_o *v224; // x19
  UnityEngine_Object_o *v225; // x19
  UISprite_o *v226; // x20
  UIAtlas_o *v227; // x19
  _BOOL4 v228; // w21
  UnityEngine_Object_o *v229; // x19
  UISprite_o *v230; // x20
  UIAtlas_o *v231; // x19
  _BOOL4 v232; // w21
  UnityEngine_Object_o *restrictionMaskSprite; // x19
  _BOOL4 v234; // w22
  UISprite_o *v235; // x21
  UIAtlas_o *maskSpriteDefaultAtlas; // x19
  System_String_o *maskSpriteDefaultSpriteName; // x20
  UIWidget_o *v238; // x19
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_GrandMaskPosition05; // x9
  UnityEngine_Object_o *v242; // x19
  const MethodInfo *v243; // x4
  _BOOL4 v244; // w22
  UISprite_o *v245; // x21
  UIAtlas_o *defaultSortieMaskAtlas; // x19
  System_String_o *defaultSortieMaskSpriteName; // x20
  UIWidget_o *v248; // x19
  struct SupportSelectItemDraw_StaticFields *v249; // x9
  float *v250; // x8
  struct UnityEngine_Vector2_o *p_defaultSortieMaskPosition; // x9
  UnityEngine_Object_o *v252; // x19
  int v253; // w21
  System_String_o *v254; // x0
  System_String_o *v255; // x1
  bool v256; // w2
  SupportSelectItemDraw_o *v257; // x0
  bool v258; // w3
  UnityEngine_Object_o *v259; // x19
  bool v260; // w1
  System_String_o *v261; // x0
  const MethodInfo *v262; // x3
  System_String_o *v263; // x19
  Il2CppObject *v264; // x0
  UnityEngine_Object_o *v265; // x19
  UnityEngine_Object_o *friendPointBonus; // x19
  UnityEngine_Object_o *v267; // x19
  UnityEngine_Object_o *eventUpValIcon; // x19
  int v269; // w8
  __int64 v270; // x19
  int32_t eventId; // w20
  int32_t v272; // w21
  EventCampaignEntity_o **m_Items; // x23
  EventCampaignEntity_o *v274; // x8
  EventCampaignEntity_o *v275; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v277; // w10
  System_Collections_Generic_List_object__o *v278; // x0
  System_Collections_Generic_List_object__o *v279; // x23
  UISprite_o *v280; // x19
  void *v281; // x20
  Il2CppClass *v282; // x21
  int32_t v283; // w20
  UnityEngine_Object_o *v284; // x19
  void *v285; // x19
  Il2CppClass *v286; // x20
  UnityEngine_Object_o *v287; // x19
  struct ServantLeaderInfo_o *v288; // x8
  __int64 v289; // x19
  __int64 v290; // x20
  EventMargeItemUpValInfo_array *v291; // x21
  int32_t v292; // w20
  int32_t v293; // w0
  UnityEngine_Object_o *v294; // x19
  bool v295; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v297; // x19
  __int64 v298; // x20
  int32_t v299; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x19
  UnityEngine_Object_o *baseButton; // x19
  UnityEngine_Object_o *pushSprite; // x19
  int64_t pushUserServantId; // x8
  EventMargeItemUpValInfo_o *v305; // x24
  int32_t v306; // w2
  int32_t v307; // w3
  System_String_o *v308; // x4
  int32_t v309; // w5
  int64_t v310; // x6
  System_String_o *v311; // x7
  struct System_Object_array *v312; // x8
  _QWORD *v313; // x9
  __int64 v314; // x10
  Il2CppClass **v315; // x0
  SupportSelectItemDraw_o *v316; // [xsp+10h] [xbp-1E0h]
  SupportSelectItemDraw_o *v317; // [xsp+10h] [xbp-1E0h]
  UserServantLeaderEntity_o *v318; // [xsp+18h] [xbp-1D8h]
  UserServantLeaderEntity_o *v319; // [xsp+18h] [xbp-1D8h]
  bool v320; // [xsp+24h] [xbp-1CCh]
  int32_t AddedHp; // [xsp+28h] [xbp-1C8h]
  int32_t AddedAtk; // [xsp+2Ch] [xbp-1C4h]
  int32_t adjustHp; // [xsp+30h] [xbp-1C0h]
  int32_t adjustAtk; // [xsp+34h] [xbp-1BCh]
  int32_t TimesToRestart; // [xsp+34h] [xbp-1BCh]
  int32_t classId; // [xsp+38h] [xbp-1B8h]
  int32_t treasureDeviceNum; // [xsp+3Ch] [xbp-1B4h]
  int32_t strengthStatus; // [xsp+40h] [xbp-1B0h]
  int32_t v329; // [xsp+44h] [xbp-1ACh]
  int32_t rarity; // [xsp+48h] [xbp-1A8h]
  int32_t limitCount; // [xsp+4Ch] [xbp-1A4h]
  int32_t frameType; // [xsp+50h] [xbp-1A0h]
  int exceedCount; // [xsp+54h] [xbp-19Ch]
  _DWORD *v334; // [xsp+58h] [xbp-198h]
  Il2CppObject *v335; // [xsp+60h] [xbp-190h]
  System_Int32_array *cardParams; // [xsp+68h] [xbp-188h]
  EventServantPointRankMaster_o *v337; // [xsp+70h] [xbp-180h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+70h] [xbp-180h]
  struct EquipTargetInfo_o *v339; // [xsp+78h] [xbp-178h]
  struct System_Int32_array *v340; // [xsp+80h] [xbp-170h]
  int32_t HpBoostValue; // [xsp+80h] [xbp-170h]
  Il2CppObject *v342; // [xsp+88h] [xbp-168h]
  int32_t AtkBoostValue; // [xsp+88h] [xbp-168h]
  Il2CppObject *v344; // [xsp+90h] [xbp-160h]
  _BOOL4 UniqueSvtRestriction; // [xsp+90h] [xbp-160h]
  ServantLeaderInfo_o *v346; // [xsp+98h] [xbp-158h]
  bool IsDataLost; // [xsp+98h] [xbp-158h]
  bool v348; // [xsp+98h] [xbp-158h]
  ServantEntity_o *servantEntity; // [xsp+A0h] [xbp-150h]
  ServantEntity_o *servantEntitya; // [xsp+A0h] [xbp-150h]
  int servantEntityb; // [xsp+A0h] [xbp-150h]
  SupportServantData_o *v352; // [xsp+A8h] [xbp-148h]
  int v353; // [xsp+A8h] [xbp-148h]
  GrandQuestFolderBoardItem_o *p_monitor; // [xsp+B0h] [xbp-140h]
  _BOOL4 QuestRestriction; // [xsp+B0h] [xbp-140h]
  Il2CppObject *object; // [xsp+B8h] [xbp-138h]
  Il2CppObject *objecta; // [xsp+B8h] [xbp-138h]
  Il2CppObject *objectb; // [xsp+B8h] [xbp-138h]
  int32_t value; // [xsp+C4h] [xbp-12Ch]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v361; // [xsp+D0h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v362; // [xsp+F0h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v363; // [xsp+110h] [xbp-E0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+138h] [xbp-B8h] BYREF
  bool isDuplicate; // [xsp+144h] [xbp-ACh] BYREF
  SkillInfo_array *v366; // [xsp+148h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+150h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+158h] [xbp-98h] BYREF
  int v369; // [xsp+164h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+168h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+178h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v372; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v373; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v374; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v375; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v376; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v377; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v378; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v379; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v380; // 0:x0.16
  UnityEngine_Vector2_o GrandClassNamePosition; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v383; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o v385; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v386; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2CEC9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_IndexOf_int___);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_int____79098160);
    sub_1C93AD4(&EventMargeItemUpValInfo_TypeInfo);
    sub_1C93AD4(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&long___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79002184);
    sub_1C93AD4(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C93AD4(&Rarity_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1C93AD4(&SupportSelectItemDraw_TypeInfo);
    sub_1C93AD4(&TutorialFlag_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__);
    sub_1C93AD4(&SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_11634/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1C93AD4(&StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1C93AD4(&StringLiteral_6488/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1C93AD4(&StringLiteral_397/*"#,0"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CEC9 = 1;
  }
  eventUpVallInfo = 0;
  *(_QWORD *)lv = 0;
  v369 = 0;
  tdInfo = 0;
  skillInfoList = 0;
  v366 = 0;
  isDuplicate = 0;
  entity = 0;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_614;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_614;
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
      goto LABEL_614;
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
      goto LABEL_614;
    gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD, float))(*(_QWORD *)gameObject + 440LL))(
                   gameObject,
                   *(_QWORD *)(*(_QWORD *)gameObject + 448LL),
                   0.0);
  }
  if ( !supportServantData )
    goto LABEL_614;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0);
  eventUpVallInfo = 0;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_614;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_614;
      v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v372.fields.currentCryptoKey = v20;
      *(_QWORD *)&v372.fields.fakeValue = v19;
      v339 = equipTarget1;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v372, 0);
      if ( !v18 )
        goto LABEL_614;
      v21 = 0;
      v335 = DataMasterBase_object__object__int___GetEntity(
               v18,
               gameObject,
               (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_614;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0);
    if ( !MasterData_object )
      goto LABEL_614;
    v21 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v21 )
      goto LABEL_614;
    v23 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v21[5].klass;
    monitor = v21[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v373.fields.currentCryptoKey = klass;
    *(_QWORD *)&v373.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v373, 0);
    if ( !v23 )
      goto LABEL_614;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v23,
                            gameObject,
                            (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v21 = 0;
  }
  v339 = 0;
  v335 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v87 = 1;
    goto LABEL_114;
  }
LABEL_37:
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v87 = 0;
LABEL_114:
    gameObject = (__int64)this->fields.backClassIcon;
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    backClassIcon = this->fields.backClassIcon;
    gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
    }
    v89 = *(_QWORD *)(*(_QWORD *)(gameObject + 184) + 32LL);
    if ( !v89 )
      goto LABEL_614;
    if ( *(_DWORD *)(v89 + 24) <= (unsigned int)classPos )
      goto LABEL_615;
    if ( !backClassIcon )
      goto LABEL_614;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v89 + 8LL * classPos + 32), 0);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0, 0) )
    {
      v91 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v91, 9, baseDefaultUIAtlas, 0, 0, 0, 0);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0, 0) )
    {
      v94 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v94, 9, base2DefaultUIAtlas, 0, 0, 0);
    }
    servantClassIcon = (UnityEngine_Object_o *)this->fields.servantClassIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(servantClassIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    levelLabel = (UnityEngine_Object_o *)this->fields.levelLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(levelLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.levelLabel;
      if ( !gameObject )
        goto LABEL_614;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    raritySprite = (UnityEngine_Object_o *)this->fields.raritySprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(raritySprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    attackLabel = (UnityEngine_Object_o *)this->fields.attackLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(attackLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.attackLabel;
      if ( !gameObject )
        goto LABEL_614;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    hpLabel = (UnityEngine_Object_o *)this->fields.hpLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(hpLabel, 0, 0) )
    {
      gameObject = (__int64)this->fields.hpLabel;
      if ( !gameObject )
        goto LABEL_614;
      UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    sortieMaskSprite = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(sortieMaskSprite, 0, 0) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
    skillListTreasureDevice = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(skillListTreasureDevice, 0, 0) )
    {
      gameObject = (__int64)this->fields.skillListTreasureDevice;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    appendSkillList = (UnityEngine_Object_o *)this->fields.appendSkillList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(appendSkillList, 0, 0) )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    svtCommandCardList = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(svtCommandCardList, 0, 0) )
    {
      gameObject = (__int64)this->fields.svtCommandCardList;
      if ( !gameObject )
        goto LABEL_614;
      ServantCommandCardListComponent__Clear((ServantCommandCardListComponent_o *)gameObject, 0);
    }
    friendPointBonusBase = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(friendPointBonusBase, 0, 0) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    objecta = 0;
    v106 = 0;
    if ( v21 )
      goto LABEL_533;
LABEL_189:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    if ( v339 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      equipSprite = (UISprite_o *)this->fields.equipSprite;
      v109 = *(_QWORD *)&v339->fields.svtId.fields.currentCryptoKey;
      v108 = *(_QWORD *)&v339->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v375.fields.currentCryptoKey = v109;
      *(_QWORD *)&v375.fields.fakeValue = v108;
      v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v375, 0);
      ImagePartsGroupIdxs_k__BackingField = v339->fields._ImagePartsGroupIdxs_k__BackingField;
      v112 = v110;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v112, ImagePartsGroupIdxs_k__BackingField, 0);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_614;
        v114 = v339->fields.limitCount;
        goto LABEL_548;
      }
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.equipSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
      v123 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v123, 0, 0) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_614;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_614;
        LOBYTE(v10) = 0;
        goto LABEL_553;
      }
    }
    goto LABEL_554;
  }
  svtId = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_614;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_614;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          svtId,
                          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_614;
  v27 = (ServantEntity_o *)gameObject;
  v352 = supportServantData;
  v344 = v21;
  classId = *(_DWORD *)(gameObject + 80);
  value = svtId;
  if ( supportServantData->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    if ( !servantLeaderInfo )
      goto LABEL_614;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
    gameObject = (__int64)ServantLeaderInfo__GetOverwriteStatus(servantLeaderInfo, 0);
    v346 = servantLeaderInfo;
    lv[1] = servantLeaderInfo->fields.lv;
    if ( !gameObject )
      goto LABEL_614;
    v29 = *(_DWORD *)(gameObject + 20);
    v334 = (_DWORD *)gameObject;
    lv[0] = v29;
    if ( v339 )
      lv[0] = v339->fields.atk + v29;
    adjustAtk = servantLeaderInfo->fields.adjustAtk;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_614;
    AddedAtk = UserServantGrandInfo__get_AddedAtk((UserServantGrandInfo_o *)gameObject, 0);
    adjustHp = servantLeaderInfo->fields.adjustHp;
    gameObject = (__int64)ServantLeaderInfo__get_GrandInfo(servantLeaderInfo, 0);
    if ( !gameObject )
      goto LABEL_614;
    AddedHp = UserServantGrandInfo__get_AddedHp((UserServantGrandInfo_o *)gameObject, 0);
    v30 = v334[4];
    v369 = v30;
    if ( v339 )
      v369 = v339->fields.hp + v30;
    rarity = v334[6];
    exceedCount = servantLeaderInfo->fields.exceedCount;
    frameType = ServantLeaderInfo__GetFrameType(servantLeaderInfo, v334[10], 0);
    limitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0);
    if ( !tdInfo )
      goto LABEL_614;
    strengthStatus = tdInfo->fields.strengthStatus;
    v329 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_44278344(servantLeaderInfo, &v366, 0, 0);
    gameObject = ServantLeaderInfo__get_IsGrandSvt(servantLeaderInfo, 0);
    this->fields.isGrandServant = gameObject & 1;
    eventSetupInfo = supportServantData->fields.eventSetupInfo;
    if ( !eventSetupInfo )
      goto LABEL_203;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_614;
    if ( eventIdList->max_length )
    {
      EventUpVal_44265520 = ServantLeaderInfo__getEventUpVal_44265520(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              supportServantData->fields.questRestrictionInfo == 0,
                              0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v337 = (EventServantPointRankMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v35 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_FunctionMaster___);
      v36 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v36,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v37 = supportServantData->fields.eventSetupInfo;
      if ( !v37 )
        goto LABEL_614;
      v38 = v37->fields.eventIdList;
      v320 = EventUpVal_44265520;
      servantEntity = v27;
      v316 = this;
      v318 = UserServantLeaderEntity;
      if ( !v38 )
        goto LABEL_614;
      max_length = v38->max_length;
      if ( (int)max_length >= 1 )
      {
        v40 = 0;
        v340 = v38;
        v342 = Master_object;
        while ( 1 )
        {
          if ( v40 >= (unsigned int)max_length )
            goto LABEL_615;
          v41 = v38->m_Items[v40];
          object = (Il2CppObject *)sub_1C93D20(SupportSelectItemDraw___c__DisplayClass66_0_TypeInfo);
          System_Object___ctor(object, 0);
          if ( !Master_object )
            goto LABEL_614;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                  v41,
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                (gameObject & 1) == 0) )
          {
            if ( !v337 )
              goto LABEL_614;
            if ( EventServantPointRankMaster__IsEnableEvent(v337, v41, 0) )
            {
              eventSvtPoint = v346->fields.eventSvtPoint;
              v44 = *(_QWORD *)&v346->fields.svtId.fields.currentCryptoKey;
              v43 = *(_QWORD *)&v346->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v374.fields.currentCryptoKey = v44;
              *(_QWORD *)&v374.fields.fakeValue = v43;
              v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v374, 0);
              EnableEntity = EventServantPointRankMaster__GetEnableEntity(v337, v41, eventSvtPoint, v45, 0);
              if ( EnableEntity )
                svtPointRank = EnableEntity->fields.svtPointRank;
              else
                svtPointRank = 0;
              v48 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_42447564(v48, v41, 0);
              if ( !v48 )
                goto LABEL_614;
              EventMargeItemUpValInfo__SetServantPointInfo(v48, v346->fields.eventSvtPoint, svtPointRank, 1, 0);
              if ( !v36 )
                goto LABEL_614;
              System_Collections_Generic_List_object___Insert(
                v36,
                0,
                (Il2CppObject *)v48,
                (const MethodInfo_387A74C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            }
            v49 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v49, v41, servantEntity, 0);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_614;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
            if ( !v49 )
              goto LABEL_614;
            EventPersonalMargeUpValInfo__Add(v49, (EventDropItemUpValInfo_array *)gameObject, 0);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v49, 0);
            if ( (gameObject & 1) == 0 )
            {
              if ( supportServantData->fields.questRestrictionInfo )
              {
                gameObject = (__int64)supportServantData->fields.eventSetupInfo;
                if ( !gameObject )
                  goto LABEL_614;
                gameObject = (__int64)EventUpValSetupInfo__GetQuestPhaseIndividualList(
                                        (EventUpValSetupInfo_o *)gameObject,
                                        v41,
                                        0);
                v10 = gameObject;
              }
              else
              {
                v10 = 0;
              }
              if ( !object )
                goto LABEL_614;
              object[1].klass = (Il2CppClass *)v10;
              v56 = (System_Collections_ICollection_o **)&object[1];
              sub_1C93A78((GrandQuestFolderBoardItem_o *)&object[1], v10, v50, v51, v52, v53, v54, v55);
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v49, 0);
              if ( !gameObject )
                goto LABEL_614;
              v63 = *(_QWORD *)(gameObject + 24);
              v64 = gameObject;
              if ( (int)v63 >= 1 )
                break;
            }
          }
LABEL_107:
          v38 = v340;
          Master_object = v342;
          v21 = v344;
          ++v40;
          LODWORD(max_length) = v340->max_length;
          if ( (__int64)v40 >= (int)max_length )
            goto LABEL_108;
        }
        v65 = 0;
        p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
        while ( v65 < (unsigned int)v63 )
        {
          v66 = *(Il2CppObject **)(v64 + 32 + 8 * v65);
          if ( !supportServantData->fields.questRestrictionInfo )
            goto LABEL_618;
          if ( !v66 )
            goto LABEL_614;
          v67 = v66[2].monitor;
          if ( !v67 )
            goto LABEL_614;
          if ( !v35 )
            goto LABEL_614;
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v35,
                                  v67[4],
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
          if ( !gameObject )
            goto LABEL_614;
          v68 = *(_DWORD *)(gameObject + 24);
          v69 = gameObject;
          if ( v68 == 1 || v68 == 16 )
            goto LABEL_619;
          questRestrictionInfo = supportServantData->fields.questRestrictionInfo;
          if ( !questRestrictionInfo )
            goto LABEL_614;
          if ( v41 == questRestrictionInfo->fields.eventId )
          {
LABEL_619:
            v71 = *(_QWORD *)(gameObject + 80);
            if ( !v71 )
              goto LABEL_614;
            if ( !*(_QWORD *)(v71 + 24) )
              goto LABEL_618;
            gameObject = BasicHelper__IsNullOrEmpty(*v56, 0);
            if ( (gameObject & 1) == 0 )
            {
              v72 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v69 + 80);
              v73 = (System_Func_int__bool__o *)p_monitor->klass;
              if ( !p_monitor->klass )
              {
                v73 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v73,
                  object,
                  Method_SupportSelectItemDraw___c__DisplayClass66_0__SetItem_b__0__,
                  0);
                object[1].monitor = v73;
                v56 = (System_Collections_ICollection_o **)&object[1];
                sub_1C93A78(p_monitor, (int32_t)v73, v74, v75, v76, v77, v78, v79);
              }
              gameObject = System_Linq_Enumerable__Any_int__52110008(
                             v72,
                             (System_Func_TSource__bool__o *)v73,
                             (const MethodInfo_31B22B8 *)Method_System_Linq_Enumerable_Any_int____79098160);
              supportServantData = v352;
              if ( (gameObject & 1) != 0 )
              {
LABEL_618:
                if ( !v36 )
                  goto LABEL_614;
                items = v36->fields._items;
                v81 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
                ++v36->fields._version;
                if ( !items )
                  goto LABEL_614;
                v82 = v36->fields._size;
                if ( (unsigned int)v82 >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v36,
                    v66,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
                }
                else
                {
                  v83 = &items->obj.klass + v82;
                  v36->fields._size = v82 + 1;
                  v83[4] = (Il2CppClass *)v66;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v83 + 4), (int32_t)v66, v57, v58, v59, v60, v61, v62);
                }
              }
            }
          }
          LODWORD(v63) = *(_DWORD *)(v64 + 24);
          if ( (__int64)++v65 >= (int)v63 )
            goto LABEL_107;
        }
        goto LABEL_615;
      }
LABEL_108:
      v84 = supportServantData->fields.questRestrictionInfo;
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      this = v316;
      UserServantLeaderEntity = v318;
      v27 = servantEntity;
      if ( v84 )
      {
        AdjustUpValInfoArray = PartyOrganizationUtility__GetAdjustUpValInfoArray(
                                 (PartyOrganizationUtility_o *)gameObject,
                                 &isDuplicate,
                                 (System_Collections_Generic_List_EventMargeItemUpValInfo__o *)v36,
                                 0);
        gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
        if ( !gameObject )
          goto LABEL_614;
        v86 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)AdjustUpValInfoArray;
      }
      else
      {
        v86 = (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v36;
      }
      svtId = value;
      objecta = (Il2CppObject *)PartyOrganizationUtility__GetAddUpValInfos(
                                  (PartyOrganizationUtility_o *)gameObject,
                                  v86,
                                  0);
    }
    else
    {
LABEL_203:
      objecta = 0;
      v320 = 0;
    }
    CommandCodeIdList = ServantLeaderInfo__getCommandCodeIdList(v346, 0);
    cardParams = v346->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(v346, supportServantData->fields.questRestrictionInfo, 0);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             v346,
                             supportServantData->fields.questRestrictionInfo,
                             0);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         v346,
                                         supportServantData->fields.questRestrictionInfo,
                                         0,
                                         0);
    if ( ServantLeaderInfo__IsSlotRestriction(v346, supportServantData->fields.questRestrictionInfo, 0) )
    {
      v126 = v346;
      v127 = 1;
    }
    else
    {
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      v128 = *(_DWORD *)(gameObject + 80);
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      if ( v128 < 1 )
        goto LABEL_240;
      if ( !supportServantData->fields.questRestrictionInfo )
        goto LABEL_614;
      v129 = *(_DWORD *)(gameObject + 84);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_44136444(
             supportServantData->fields.questRestrictionInfo,
             v129,
             0) )
      {
        v126 = v346;
        v319 = UserServantLeaderEntity;
        v130 = v27;
        v131 = CommandCodeIdList;
        v132 = supportServantData->fields.questRestrictionInfo;
        v134 = *(_QWORD *)&v346->fields.svtId.fields.currentCryptoKey;
        v133 = *(_QWORD *)&v346->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v376.fields.currentCryptoKey = v134;
        *(_QWORD *)&v376.fields.fakeValue = v133;
        v135 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v376, 0);
        v136 = v346->fields.limitCount;
        v137 = v135;
        gameObject = ServantLeaderInfo__getDispLimitCount(v346, 0);
        if ( !v132 )
          goto LABEL_614;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v132,
                                              v137,
                                              v136,
                                              gameObject,
                                              v129,
                                              1,
                                              0);
        svtId = value;
        CommandCodeIdList = v131;
        v27 = v130;
        UserServantLeaderEntity = v319;
        v127 = IsRestrictionServantIndividuality;
      }
      else
      {
LABEL_240:
        v126 = v346;
        v127 = 0;
      }
    }
    AtkBoostValue = AddedAtk + adjustAtk;
    HpBoostValue = AddedHp + adjustHp;
    v124 = v320;
    IsDataLost = ServantLeaderInfo__IsDataLost(v126, supportServantData->fields.questRestrictionInfo, 0);
    TimesToRestart = ServantLeaderInfo__GetTimesToRestart(v126, supportServantData->fields.questRestrictionInfo, 0);
  }
  else
  {
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                            UserServantLeaderEntity->fields.userSvtId,
                            (const MethodInfo_3465A24 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( !gameObject )
      goto LABEL_614;
    v115 = gameObject;
    gameObject = (__int64)UserServantEntity__GetOverwriteStatus((UserServantEntity_o *)gameObject, 0, 0);
    lv[1] = *(_DWORD *)(v115 + 256);
    if ( !gameObject )
      goto LABEL_614;
    v116 = *(_DWORD *)(gameObject + 20);
    v334 = (_DWORD *)gameObject;
    lv[0] = v116;
    if ( v21 )
      lv[0] = LODWORD(v21[16].monitor) + v116;
    AtkBoostValue = UserServantEntity__get_AtkBoostValue((UserServantEntity_o *)v115, 0);
    HpBoostValue = UserServantEntity__get_HpBoostValue((UserServantEntity_o *)v115, 0);
    v117 = v334[4];
    v369 = v117;
    if ( v21 )
      v369 = HIDWORD(v21[16].monitor) + v117;
    rarity = v334[6];
    exceedCount = *(_DWORD *)(v115 + 296);
    frameType = UserServantEntity__GetFrameType((UserServantEntity_o *)v115, v334[10], 0);
    limitCount = UserServantEntity__getCardImageLimitCount((UserServantEntity_o *)v115, 0, 0);
    UserServantEntity__getSkillInfo((UserServantEntity_o *)v115, &skillInfoList, -1, -1, 1, 0, -1, 0);
    gameObject = UserServantEntity__getTreasureDeviceInfo((UserServantEntity_o *)v115, &tdInfo, -1, -1, 0, 0);
    if ( !tdInfo )
      goto LABEL_614;
    v118 = tdInfo->fields.lv;
    v119 = tdInfo->fields.strengthStatus;
    v120 = tdInfo->fields.treasureDeviceNum;
    UserServantEntity__GetAppendPassiveSkillInfo_43897984((UserServantEntity_o *)v115, &v366, 0);
    this->fields.isGrandServant = UserServantEntity__IsGrandServant((UserServantEntity_o *)v115, 0);
    strengthStatus = v119;
    v329 = v118;
    treasureDeviceNum = v120;
    if ( supportServantData->fields.eventSetupInfo )
    {
      if ( v21 )
      {
        v121 = v21[2];
        *(Il2CppObject *)&v363.fields.currentCryptoKey = v21[1];
        *(Il2CppObject *)&v363.fields.fakeValue = v121;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v362 = v363;
        v122 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v362, 0);
      }
      else
      {
        v122 = -1;
      }
      gameObject = sub_1C93B7C(long___TypeInfo, 1);
      if ( !gameObject )
        goto LABEL_614;
      if ( !*(_DWORD *)(gameObject + 24) )
        goto LABEL_615;
      *(_QWORD *)(gameObject + 32) = v122;
      EventUpVal_43870140 = UserServantEntity__getEventUpVal_43870140(
                              (UserServantEntity_o *)v115,
                              &eventUpVallInfo,
                              supportServantData->fields.eventSetupInfo,
                              (System_Int64_array *)gameObject,
                              0,
                              1,
                              0,
                              1,
                              0);
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      servantEntitya = v27;
      v140 = DataManager__GetMasterData_object_(
               (DataManager_o *)gameObject,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventDetailMaster___);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v141 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      objectb = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
      v142 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v142,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v143 = supportServantData->fields.eventSetupInfo;
      if ( !v143 )
        goto LABEL_614;
      v144 = v143->fields.eventIdList;
      v348 = EventUpVal_43870140;
      v317 = this;
      if ( !v144 )
        goto LABEL_614;
      v145 = v144->max_length;
      if ( (int)v145 >= 1 )
      {
        v146 = 0;
        while ( 1 )
        {
          if ( v146 >= (unsigned int)v145 )
            goto LABEL_615;
          if ( !v140 )
            goto LABEL_614;
          v147 = v144->m_Items[v146];
          gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)v140,
                                  v147,
                                  (const MethodInfo_3463274 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
          if ( !gameObject
            || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0),
                (gameObject & 1) == 0) )
          {
            if ( !v141 )
              goto LABEL_614;
            if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v141, v147, 0) )
            {
              v148 = *(_OWORD *)(v115 + 64);
              *(_OWORD *)&v363.fields.currentCryptoKey = *(_OWORD *)(v115 + 48);
              *(_OWORD *)&v363.fields.fakeValue = v148;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v361 = v363;
              v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49657552(&v361, 0);
              v150 = UserServantEntity__getSvtId((UserServantEntity_o *)v115, 0);
              gameObject = (__int64)objectb;
              if ( !objectb )
                goto LABEL_614;
              if ( UserEventServantPointMaster__TryGetEntity(
                     (UserEventServantPointMaster_o *)objectb,
                     &entity,
                     v149,
                     v147,
                     v150,
                     0) )
              {
                gameObject = (__int64)entity;
                if ( !entity )
                  goto LABEL_614;
                BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0);
              }
              else
              {
                BuddyPoint = 0;
              }
              v152 = UserServantEntity__getSvtId((UserServantEntity_o *)v115, 0);
              v153 = EventServantPointRankMaster__GetEnableEntity(
                       (EventServantPointRankMaster_o *)v141,
                       v147,
                       BuddyPoint,
                       v152,
                       0);
              v154 = v153 ? v153->fields.svtPointRank : 0;
              v155 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
              EventMargeItemUpValInfo___ctor_42447564(v155, v147, 0);
              if ( !v155 )
                goto LABEL_614;
              EventMargeItemUpValInfo__SetServantPointInfo(v155, BuddyPoint, v154, 0, 0);
              if ( !v142 )
                goto LABEL_614;
              System_Collections_Generic_List_object___Insert(
                v142,
                0,
                (Il2CppObject *)v155,
                (const MethodInfo_387A74C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              supportServantData = v352;
            }
            v156 = (EventPersonalMargeUpValInfo_o *)sub_1C93D20(EventPersonalMargeUpValInfo_TypeInfo);
            EventPersonalMargeUpValInfo___ctor(v156, v147, servantEntitya, 0);
            gameObject = (__int64)eventUpVallInfo;
            if ( !eventUpVallInfo )
              goto LABEL_614;
            gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0);
            if ( !v156 )
              goto LABEL_614;
            EventPersonalMargeUpValInfo__Add(v156, (EventDropItemUpValInfo_array *)gameObject, 0);
            gameObject = EventPersonalMargeUpValInfo__IsEmpty(v156, 0);
            if ( (gameObject & 1) == 0 )
            {
              gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v156, 0);
              if ( !gameObject )
                goto LABEL_614;
              v163 = *(_DWORD *)(gameObject + 24);
              v164 = gameObject;
              if ( v163 >= 1 )
                break;
            }
          }
LABEL_286:
          LODWORD(v145) = v144->max_length;
          if ( (__int64)++v146 >= (int)v145 )
            goto LABEL_287;
        }
        v165 = 0;
        while ( v165 < v163 )
        {
          v10 = *(_QWORD *)(v164 + 8LL * (int)v165 + 32);
          if ( !v10 )
            goto LABEL_614;
          if ( *(_DWORD *)(v10 + 60) != 111 )
          {
            if ( !v142 )
              goto LABEL_614;
            v166 = v142->fields._items;
            v167 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
            ++v142->fields._version;
            if ( !v166 )
              goto LABEL_614;
            v168 = v142->fields._size;
            if ( (unsigned int)v168 >= LODWORD(v166->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v142,
                (Il2CppObject *)v10,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
            }
            else
            {
              v169 = &v166->obj.klass + v168;
              v142->fields._size = v168 + 1;
              v169[4] = (Il2CppClass *)v10;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v169 + 4), v10, v157, v158, v159, v160, v161, v162);
            }
          }
          v163 = *(_DWORD *)(v164 + 24);
          if ( (int)++v165 >= v163 )
            goto LABEL_286;
        }
LABEL_615:
        sub_1C93D34(gameObject);
      }
LABEL_287:
      gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
      if ( !gameObject )
        goto LABEL_614;
      v124 = v348;
      objecta = (Il2CppObject *)PartyOrganizationUtility__GetAddUpValInfos(
                                  (PartyOrganizationUtility_o *)gameObject,
                                  (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v142,
                                  0);
      this = v317;
      v21 = v344;
      v27 = servantEntitya;
    }
    else
    {
      objecta = 0;
      v124 = 0;
    }
    CommandCodeIdList = UserServantEntity__getCommandCodeIdList((UserServantEntity_o *)v115, 0);
    QuestRestriction = UserServantEntity__getQuestRestriction(
                         (UserServantEntity_o *)v115,
                         supportServantData->fields.questRestrictionInfo,
                         rarity,
                         2,
                         0);
    UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                             (UserServantEntity_o *)v115,
                             supportServantData->fields.questRestrictionInfo,
                             0);
    v170 = UserServantEntity__IsUniqueIndividualityRestriction(
             (UserServantEntity_o *)v115,
             supportServantData->fields.questRestrictionInfo,
             0);
    svtId = value;
    v127 = 0;
    IsUniqueIndividualityRestriction = v170;
    TimesToRestart = 0;
    IsDataLost = 0;
    cardParams = 0;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_614;
  v353 = v124;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_614;
  servantEntityb = v127;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 svtId,
                 limitCount,
                 0);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_614;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, svtId, gameObject, 0, 0);
  v171 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v171, 0, 0) )
  {
    gameObject = (__int64)this->fields.servantClassIcon;
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    if ( IsDataLost )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      gameObject = (__int64)this->fields.servantClassIcon;
      if ( !gameObject )
        goto LABEL_614;
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
        goto LABEL_614;
      ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)gameObject, 0, 0);
      isGrandServant = this->fields.isGrandServant;
      v173 = this->fields.servantClassIcon;
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
        gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      }
      v174 = *(UnityEngine_Vector2_o **)(gameObject + 184);
      if ( isGrandServant )
      {
        if ( !v173 )
          goto LABEL_614;
        ServantClassIconComponent__RePositionClassIcon(v173, v174[1], 0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_614;
        GrandClassNamePosition = SupportSelectItemDraw_TypeInfo->static_fields->GrandClassNamePosition;
      }
      else
      {
        if ( !v173 )
          goto LABEL_614;
        ServantClassIconComponent__RePositionClassIcon(v173, *v174, 0);
        gameObject = (__int64)this->fields.servantClassIcon;
        if ( !gameObject )
          goto LABEL_614;
        GrandClassNamePosition = SupportSelectItemDraw_TypeInfo->static_fields->ClassNamePosition;
      }
      ServantClassIconComponent__RePositionClassName(
        (ServantClassIconComponent_o *)gameObject,
        GrandClassNamePosition,
        0);
    }
  }
  v176 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v176, 0, 0) )
  {
    v177 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0);
    if ( !v177 )
      goto LABEL_614;
    UILabel__set_text(v177, (System_String_o *)gameObject, 0);
  }
  v178 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v178, 0, 0) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_614;
    v179 = CommandCodeIdList;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v180 = lv[1];
    v181 = v334[10];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    Icon_41156280 = Rarity__getIcon_41156280(rarity, exceedCount, v180, v181, 0);
    if ( exceedCount < 1 )
    {
      v184 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_614;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, v181, exceedCount, 0, 0, 0);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_614;
      v184 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, v181, lv[1], RarityIcon, 0, 0);
    }
    v185 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v184 >= 3 )
    {
      AtlasManager__SetEventSprite(v185, Icon_41156280, 0);
    }
    else
    {
      AtlasManager__SetCommon(v185, 0);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_614;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_41156280, 0);
    }
    gameObject = (__int64)this->fields.raritySprite;
    CommandCodeIdList = v179;
    if ( !gameObject )
      goto LABEL_614;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v186 = exceedCount >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_614;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    v382.fields.x = v186;
    v382.fields.y = y;
    v382.fields.z = z;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v382, 0);
  }
  v189 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v189, 0, 0) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
    v190 = this->fields.skillListTreasureDevice;
    v191 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_42003760(v191, 0);
    if ( !v190 )
      goto LABEL_614;
    SkillListTreasureDeviceComponent__Set(
      v190,
      (System_String_o *)gameObject,
      v329,
      strengthStatus,
      treasureDeviceNum,
      0,
      0,
      0);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v10 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v198 = *(_QWORD *)(gameObject + 16);
      v199 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v198 )
        goto LABEL_614;
      v200 = *(int *)(gameObject + 24);
      if ( (unsigned int)v200 >= *(_DWORD *)(v198 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v10,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
      }
      else
      {
        v201 = v198 + 8 * v200;
        *(_DWORD *)(gameObject + 24) = v200 + 1;
        *(_QWORD *)(v201 + 32) = v10;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v201 + 32), v10, v192, v193, v194, v195, v196, v197);
      }
    }
  }
  v202 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v202, 0, 0) )
  {
    if ( v366 && v366->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      v203 = this->fields.appendSkillList;
      v204 = v366;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_42003760(v204, 0);
      if ( !v203 )
        goto LABEL_614;
      AppendSkillListComponent__Set(v203, (System_String_o *)gameObject, 0);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v10 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v211 = *(_QWORD *)(gameObject + 16);
        v212 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v211 )
          goto LABEL_614;
        v213 = *(int *)(gameObject + 24);
        if ( (unsigned int)v213 >= *(_DWORD *)(v211 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v10,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
        }
        else
        {
          v214 = v211 + 8 * v213;
          *(_DWORD *)(gameObject + 24) = v213 + 1;
          *(_QWORD *)(v214 + 32) = v10;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v214 + 32), v10, v205, v206, v207, v208, v209, v210);
        }
      }
    }
    else
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
  switchSkillInfo = (UnityEngine_Object_o *)this->fields.switchSkillInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(switchSkillInfo, 0, 0) )
  {
    v216 = this->fields.switchSkillUIList;
    if ( v216 )
    {
      v217 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v216,
                              (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v217 )
        goto LABEL_614;
      SwitchUIWidgetComponent__Set(v217, (UIWidget_array *)gameObject, 0, 0);
    }
  }
  v218 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v218, 0, 0) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_614;
    if ( supportServantData->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_41800772(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParams,
        CommandCodeIdList,
        2,
        0,
        0);
    else
      ServantCommandCardListComponent__Set_41801016(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        CommandCodeIdList,
        2,
        0,
        0);
  }
  v219 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v219, 0, 0) )
  {
    v386.fields.g = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( AtkBoostValue <= 0 )
      v386.fields.b = 1.0;
    else
      v386.fields.b = 0.015686;
    if ( AtkBoostValue <= 0 )
      v386.fields.g = 1.0;
    if ( !gameObject )
      goto LABEL_614;
    v386.fields.r = 1.0;
    v386.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v386, 0);
    v221 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_65934220((int32_t)lv, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v221 )
      goto LABEL_614;
    UILabel__set_text(v221, (System_String_o *)gameObject, 0);
  }
  v222 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v222, 0, 0) )
  {
    v385.fields.g = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( HpBoostValue <= 0 )
      v385.fields.b = 1.0;
    else
      v385.fields.b = 0.015686;
    if ( HpBoostValue <= 0 )
      v385.fields.g = 1.0;
    if ( !gameObject )
      goto LABEL_614;
    v385.fields.r = 1.0;
    v385.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, v385, 0);
    v224 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_65934220((int32_t)&v369, (System_String_o *)StringLiteral_397/*"#,0"*/, 0);
    if ( !v224 )
      goto LABEL_614;
    UILabel__set_text(v224, (System_String_o *)gameObject, 0);
  }
  v225 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v225, 0, 0) )
  {
    v226 = this->fields.baseSprite;
    v227 = this->fields.baseDefaultUIAtlas;
    v228 = this->fields.isGrandServant;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v226, frameType, v227, 0, v228, 0, 0);
  }
  v229 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v229, 0, 0) )
  {
    v230 = this->fields.base2Sprite;
    v231 = this->fields.base2DefaultUIAtlas;
    v232 = this->fields.isGrandServant;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v230, frameType, v231, 0, v232, 0);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_614;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_614;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  restrictionMaskSprite = (UnityEngine_Object_o *)this->fields.restrictionMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(restrictionMaskSprite, 0, 0) )
  {
    v234 = this->fields.isGrandServant;
    v235 = this->fields.restrictionMaskSprite;
    maskSpriteDefaultSpriteName = this->fields.maskSpriteDefaultSpriteName;
    maskSpriteDefaultAtlas = this->fields.maskSpriteDefaultAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   v234,
                   v235,
                   maskSpriteDefaultSpriteName,
                   maskSpriteDefaultAtlas,
                   0);
    v238 = (UIWidget_o *)this->fields.restrictionMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v238 )
        goto LABEL_614;
      UIWidget__set_width(v238, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
        0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      v383.fields.z = 0.0;
      static_fields = SupportSelectItemDraw_TypeInfo->static_fields;
      p_y = &static_fields->GrandMaskPosition05.fields.y;
      p_GrandMaskPosition05 = (struct UnityEngine_Vector3_o *)&static_fields->GrandMaskPosition05;
    }
    else
    {
      if ( !v238 )
        goto LABEL_614;
      UIWidget__set_width((UIWidget_o *)this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultWidth, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.maskSpriteDefaultHeight, 0);
      gameObject = (__int64)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      v383.fields.z = this->fields.maskSpriteDefaultPosition.fields.z;
      p_GrandMaskPosition05 = &this->fields.maskSpriteDefaultPosition;
      p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
    }
    v383.fields.y = *p_y;
    v383.fields.x = p_GrandMaskPosition05->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v383, 0);
  }
  v242 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v242, 0, 0) )
  {
    v244 = this->fields.isGrandServant;
    v245 = this->fields.sortieMaskSprite;
    defaultSortieMaskAtlas = this->fields.defaultSortieMaskAtlas;
    defaultSortieMaskSpriteName = this->fields.defaultSortieMaskSpriteName;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    gameObject = AtlasManager__SetGrandMaskSpritePartyOrganizationAtlas(
                   v244,
                   v245,
                   defaultSortieMaskSpriteName,
                   defaultSortieMaskAtlas,
                   0);
    v248 = (UIWidget_o *)this->fields.sortieMaskSprite;
    if ( (gameObject & 1) != 0 )
    {
      gameObject = (__int64)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v248 )
        goto LABEL_614;
      UIWidget__set_width(v248, SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskWidth05, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      UIWidget__set_height(
        (UIWidget_o *)gameObject,
        SupportSelectItemDraw_TypeInfo->static_fields->GrandMaskHeight05,
        0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      v249 = SupportSelectItemDraw_TypeInfo->static_fields;
      v250 = &v249->GrandMaskPosition05.fields.y;
      p_defaultSortieMaskPosition = &v249->GrandMaskPosition05;
    }
    else
    {
      if ( !v248 )
        goto LABEL_614;
      UIWidget__set_width((UIWidget_o *)this->fields.sortieMaskSprite, this->fields.defaultSortieMaskWidth, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      UIWidget__set_height((UIWidget_o *)gameObject, this->fields.defaultSortieMaskHeight, 0);
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      v250 = &this->fields.defaultSortieMaskPosition.fields.y;
      p_defaultSortieMaskPosition = &this->fields.defaultSortieMaskPosition;
    }
    v384.fields.y = *v250;
    v384.fields.x = p_defaultSortieMaskPosition->fields.x;
    v384.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v384, 0);
  }
  if ( ((servantEntityb | QuestRestriction) & 1) != 0 )
  {
    v252 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    v253 = v353;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v252, 0, 0) )
    {
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v254 = LocalizationManager__Get((System_String_o *)StringLiteral_10326/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0);
    goto LABEL_471;
  }
  v253 = v353;
  if ( !supportServantData->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v27, 0) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_41140656(126, 0) )
    {
      v259 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v259, 0, 0) )
        goto LABEL_502;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_614;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_614;
      v260 = 1;
LABEL_501:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v260, 0);
LABEL_502:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v10);
      goto LABEL_503;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v258 = 1;
      v257 = this;
      v256 = 0;
      v255 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_472;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v263 = LocalizationManager__Get((System_String_o *)StringLiteral_11634/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0);
      LODWORD(v363.fields.currentCryptoKey) = TimesToRestart;
      v264 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v363);
      v254 = System_String__Format(v263, v264, 0);
LABEL_471:
      v255 = v254;
      v256 = 1;
      v257 = this;
      v258 = 0;
LABEL_472:
      SupportSelectItemDraw__SetMaskMessage(v257, v255, v256, v258, v243);
      goto LABEL_503;
    }
    v265 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v265, 0, 0) )
      goto LABEL_502;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_614;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_614;
    v260 = 0;
    goto LABEL_501;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v261 = LocalizationManager__Get((System_String_o *)StringLiteral_6488/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0);
  SupportSelectItemDraw__SetWarningMessage(this, v261, 1, v262);
LABEL_503:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0, 0) )
  {
    v267 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v267, 0, 0) )
    {
      gameObject = (__int64)this->fields.friendPointBonusBase;
      if ( !gameObject )
        goto LABEL_614;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
    }
  }
  eventUpValIcon = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = UnityEngine_Object__op_Inequality(eventUpValIcon, 0, 0);
  v87 = 0;
  v106 = v253 != 0;
  if ( !eventFriendPoints )
    goto LABEL_612;
  if ( (gameObject & 1) == 0 )
    goto LABEL_532;
  v269 = eventFriendPoints->max_length;
  if ( v269 < 1 )
  {
    v87 = 0;
LABEL_532:
    if ( v21 )
      goto LABEL_533;
    goto LABEL_189;
  }
  v270 = 0;
  eventId = 0;
  v272 = 0;
  m_Items = eventFriendPoints->m_Items;
  do
  {
    if ( (unsigned int)v270 >= v269 )
      goto LABEL_615;
    v274 = m_Items[v270];
    if ( !v274 )
      goto LABEL_614;
    gameObject = System_Array__IndexOf_int_(
                   v274->fields.targetIds,
                   value,
                   (const MethodInfo_32AB154 *)Method_System_Array_IndexOf_int___);
    v269 = eventFriendPoints->max_length;
    if ( (unsigned int)v270 >= v269 )
      goto LABEL_615;
    v275 = m_Items[v270];
    if ( !v275 )
      goto LABEL_614;
    targetIds = v275->fields.targetIds;
    if ( targetIds )
      v277 = LODWORD(targetIds->max_length) == 0;
    else
      v277 = 1;
    if ( (v277 || (int)gameObject >= 0) && v272 < v275->fields.value )
    {
      eventId = v275->fields.eventId;
      v272 = v275->fields.value;
    }
    ++v270;
  }
  while ( (int)v270 < v269 );
  if ( v272 >= 1 )
  {
    v278 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    v279 = v278;
    if ( objecta )
      System_Collections_Generic_List_object____ctor_59216528(
        v278,
        (System_Collections_Generic_IEnumerable_T__o *)objecta,
        (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___79002184);
    else
      System_Collections_Generic_List_object____ctor(
        v278,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v305 = (EventMargeItemUpValInfo_o *)sub_1C93D20(EventMargeItemUpValInfo_TypeInfo);
    EventMargeItemUpValInfo___ctor_42447484(v305, eventId, v272, 0);
    if ( !v279 )
      goto LABEL_614;
    v312 = v279->fields._items;
    v313 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
    ++v279->fields._version;
    if ( !v312 )
      goto LABEL_614;
    v314 = v279->fields._size;
    if ( (unsigned int)v314 >= LODWORD(v312->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v279,
        (Il2CppObject *)v305,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v313[4] + 192LL) + 112LL));
    }
    else
    {
      v315 = &v312->obj.klass + v314;
      v279->fields._size = v314 + 1;
      v315[4] = (Il2CppClass *)v305;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v315 + 4), (int32_t)v305, v306, v307, v308, v309, v310, v311);
    }
    objecta = (Il2CppObject *)System_Collections_Generic_List_object___ToArray(
                                v279,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  }
  v87 = 0;
LABEL_612:
  if ( !v21 )
    goto LABEL_189;
LABEL_533:
  gameObject = (__int64)this->fields.noneEquipSprite;
  if ( !gameObject )
    goto LABEL_614;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_614;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  gameObject = (__int64)this->fields.equipSprite;
  if ( !gameObject )
    goto LABEL_614;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( !gameObject )
    goto LABEL_614;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v280 = (UISprite_o *)this->fields.equipSprite;
  v282 = v21[5].klass;
  v281 = v21[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v377.fields.currentCryptoKey = v282;
  *(_QWORD *)&v377.fields.fakeValue = v281;
  v283 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v377, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v280, v283, 0, 0);
  v284 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v284, 0, 0) )
  {
    v286 = v21[6].klass;
    v285 = v21[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v378.fields.currentCryptoKey = v286;
    *(_QWORD *)&v378.fields.fakeValue = v285;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v378, 0);
    if ( !this->fields.equipLimitCountSprite )
      goto LABEL_614;
    v114 = gameObject;
    gameObject = (__int64)this->fields.equipLimitCountSprite;
LABEL_548:
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( v114 >= 4 )
    {
      if ( !v335 )
        goto LABEL_614;
      v10 = SLODWORD(v335[5].monitor) >= v114;
    }
    else
    {
      v10 = 0;
    }
    if ( gameObject )
    {
LABEL_553:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0);
      goto LABEL_554;
    }
LABEL_614:
    sub_1C93D2C(gameObject, v10);
  }
LABEL_554:
  v287 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v287, 0, 0) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v87 & 1) == 0 )
      {
        v288 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v288 )
        {
          v290 = *(_QWORD *)&v288->fields.svtId.fields.currentCryptoKey;
          v289 = *(_QWORD *)&v288->fields.svtId.fields.fakeValue;
          v291 = (EventMargeItemUpValInfo_array *)objecta;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v379.fields.currentCryptoKey = v290;
          *(_QWORD *)&v379.fields.fakeValue = v289;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v379, 0);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_614;
          v292 = gameObject;
          v293 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0);
LABEL_575:
          v299 = v293;
          goto LABEL_577;
        }
      }
    }
    else if ( (v87 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v298 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v297 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        v291 = (EventMargeItemUpValInfo_array *)objecta;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v380.fields.currentCryptoKey = v298;
        *(_QWORD *)&v380.fields.fakeValue = v297;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v380, 0);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_614;
        v292 = gameObject;
        v293 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0);
        goto LABEL_575;
      }
    }
    v291 = (EventMargeItemUpValInfo_array *)objecta;
    v299 = -1;
    v292 = -1;
LABEL_577:
    if ( eventUpVallInfo )
      equipSvtId = eventUpVallInfo->fields.equipSvtId;
    else
      equipSvtId = 0;
    gameObject = (__int64)this->fields.eventUpValIcon;
    if ( !gameObject )
      goto LABEL_614;
    EventUpValIconComponent__Set((EventUpValIconComponent_o *)gameObject, v291, v292, v299, equipSvtId, 0);
    bounusIcon = (UnityEngine_Object_o *)this->fields.bounusIcon;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bounusIcon, 0, 0) )
    {
      gameObject = (__int64)this->fields.bounusIcon;
      if ( !gameObject )
        goto LABEL_614;
      v295 = 0;
      goto LABEL_586;
    }
    goto LABEL_587;
  }
  v294 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v294, 0, 0) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_614;
    v295 = v106;
LABEL_586:
    ShiningIconComponent__Set_41828676((ShiningIconComponent_o *)gameObject, v295, 0);
  }
LABEL_587:
  baseButton = (UnityEngine_Object_o *)this->fields.baseButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
  {
    gameObject = (__int64)this->fields.baseButton;
    if ( !gameObject )
      goto LABEL_614;
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
    goto LABEL_614;
  }
}


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
  float *p_y; // x8
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  _BOOL4 isGrandServant; // w23
  UISprite_o *v18; // x22
  UIAtlas_o *maskSpriteDefaultAtlas; // x21
  UIWidget_o *sortieMaskSprite; // x21
  struct SupportSelectItemDraw_StaticFields *v21; // x9
  float v22; // s0
  float v23; // s8
  UnityEngine_Transform_o *v24; // x20
  float restrictionMaskMessageWidth; // s0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CECB & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SupportSelectItemDraw_TypeInfo);
    sub_1C93AD4(&StringLiteral_20626/*"img_frames_mask05"*/);
    sub_1C93AD4(&StringLiteral_18637/*"datalost_party_edit"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CECB = 1;
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
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18637/*"datalost_party_edit"*/, 0);
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
      v29.fields.z = static_fields->DATA_LOST_MASK_POSITION.fields.z;
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
             (System_String_o *)StringLiteral_20626/*"img_frames_mask05"*/,
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
        v29.fields.z = 0.0;
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
        v29.fields.z = this->fields.maskSpriteDefaultPosition.fields.z;
        p_DATA_LOST_MASK_POSITION = &this->fields.maskSpriteDefaultPosition;
        p_y = &this->fields.maskSpriteDefaultPosition.fields.y;
      }
    }
    v29.fields.y = *p_y;
    v29.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_56;
    if ( isScale )
    {
      LODWORD(v22) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_56;
      v23 = v22;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v23 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4D2A13E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionMaskMessageWidth / v23;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v24 )
        goto LABEL_56;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0);
      v24 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4D2A13E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v24 )
        goto LABEL_56;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v24, oneVector, 0);
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
    sub_1C93D2C(gameObject, v10);
  }
}


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
  UnityEngine_Vector3_o oneVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2CECC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CECC = 1;
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
        if ( !byte_4D2A13E )
        {
          gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A13E = 1;
        }
        oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
      }
      else
      {
        oneVector.fields.x = restrictionWarningMessageWidth / printedSize.fields.x;
        oneVector.fields.z = 1.0;
        oneVector.fields.y = 1.0;
      }
      if ( !v12 )
        goto LABEL_33;
    }
    else
    {
      if ( !byte_4D2A13E )
      {
        gameObject = (UnityEngine_Component_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A13E = 1;
      }
      if ( !v12 )
        goto LABEL_33;
      oneVector = UnityEngine_Vector3_TypeInfo->static_fields->oneVector;
    }
    UnityEngine_Transform__set_localScale(v12, oneVector, 0);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0);
      if ( gameObject )
      {
        v17.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v17.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v17.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v17, 0);
        return;
      }
    }
LABEL_33:
    sub_1C93D2C(gameObject, v8);
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
  if ( (byte_4D2CED1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2CED1 = 1;
  }
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.questIndividualityArray,
           individuality,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}