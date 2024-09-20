void __fastcall SupportSelectItemDraw___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  struct SupportSelectItemDraw_StaticFields *static_fields; // x8

  if ( (byte_4A57AFC & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&SupportSelectItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20104/*"icon_class1002"*/);
    sub_1B885B0(&StringLiteral_20102/*"icon_class007"*/);
    sub_1B885B0(&StringLiteral_20101/*"icon_class006"*/);
    sub_1B885B0(&StringLiteral_20099/*"icon_class004"*/);
    sub_1B885B0(&StringLiteral_20096/*"icon_class001"*/);
    sub_1B885B0(&StringLiteral_20103/*"icon_class1001"*/);
    sub_1B885B0(&StringLiteral_20097/*"icon_class002"*/);
    sub_1B885B0(&StringLiteral_20100/*"icon_class005"*/);
    sub_1B885B0(&StringLiteral_20098/*"icon_class003"*/);
    byte_4A57AFC = 1;
  }
  v1 = sub_1B88658(string___TypeInfo, 9LL);
  if ( !v1 )
    sub_1B8880C(0LL, v2);
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_14;
  v6 = StringLiteral_20103/*"icon_class1001"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_20103/*"icon_class1001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v1 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_14;
  v9 = StringLiteral_20096/*"icon_class001"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_20096/*"icon_class001"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), v9, v7, v8);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_14;
  v12 = StringLiteral_20097/*"icon_class002"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_20097/*"icon_class002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 48), v12, v10, v11);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_14;
  v15 = StringLiteral_20098/*"icon_class003"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_20098/*"icon_class003"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 56), v15, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_14;
  v18 = StringLiteral_20099/*"icon_class004"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_20099/*"icon_class004"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 64), v18, v16, v17);
  if ( *(_DWORD *)(v5 + 24) <= 5u )
    goto LABEL_14;
  v21 = StringLiteral_20100/*"icon_class005"*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_20100/*"icon_class005"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 72), v21, v19, v20);
  if ( *(_DWORD *)(v5 + 24) <= 6u
    || (v24 = StringLiteral_20101/*"icon_class006"*/,
        *(_QWORD *)(v5 + 80) = StringLiteral_20101/*"icon_class006"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 80), v24, v22, v23),
        *(_DWORD *)(v5 + 24) <= 7u)
    || (v27 = StringLiteral_20102/*"icon_class007"*/,
        *(_QWORD *)(v5 + 88) = StringLiteral_20102/*"icon_class007"*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 88), v27, v25, v26),
        *(_DWORD *)(v5 + 24) <= 8u) )
  {
LABEL_14:
    sub_1B88814(v1, v2);
  }
  v30 = StringLiteral_20104/*"icon_class1002"*/;
  *(_QWORD *)(v5 + 96) = StringLiteral_20104/*"icon_class1002"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 96), v30, v28, v29);
  SupportSelectItemDraw_TypeInfo->static_fields->backClassIconFileList = (struct System_String_array *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)SupportSelectItemDraw_TypeInfo->static_fields, v5, v31, v32);
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
  UnityEngine_Transform_o *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v8; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v11; // x8
  __int64 v12; // x9
  System_Collections_IEnumerator_c **v13; // x10
  __int64 v14; // x0
  UnityEngine_Component_o *v15; // x0
  __int64 v16; // x1
  UnityEngine_Component_o *v17; // x21
  __int64 methodPtr_low; // x9
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

  if ( (byte_4A57AFB & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A57AFB = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v4);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v5);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v8 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v8;
        p_offset += 4;
        if ( !v8 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v11 = Enumerator->klass;
    v12 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v13 = (System_Collections_IEnumerator_c **)&v11->_1.interfaceOffsets->offset;
      while ( *(v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 2;
        if ( !v12 )
          goto LABEL_16;
      }
      v14 = (__int64)&v11->vtable[*(_DWORD *)v13 + 1].method;
    }
    else
    {
LABEL_16:
      v14 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v15 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(
                                       Enumerator,
                                       *(_QWORD *)(v14 + 8));
    v17 = v15;
    if ( !v15 )
      goto LABEL_37;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v15);
LABEL_37:
      sub_1B8880C(v15, v16);
    }
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v15, 0LL);
    equipRootObj = (UnityEngine_Component_o *)this->fields.equipRootObj;
    if ( !equipRootObj )
      sub_1B8880C(0LL, v19);
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(equipRootObj, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(gameObject, v22, 0LL) )
    {
      v23 = UnityEngine_Component__get_gameObject(v17, 0LL);
      if ( !v23 )
        sub_1B8880C(0LL, v24);
      UnityEngine_GameObject__SetActive(v23, 0, 0LL);
    }
  }
  v25 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v30 = sub_1BDA590(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall SupportSelectItemDraw__Awake(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *raritySprite; // x20
  __int64 v4; // x1
  void *transform; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct UISprite_o *v10; // x8
  struct UIAtlas_o *mAtlas; // x1
  UnityEngine_Object_o *baseSprite; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct UISprite_o *v15; // x8
  struct UIAtlas_o *v16; // x1
  UnityEngine_Object_o *base2Sprite; // x20
  const MethodInfo *v18; // x2
  int32_t v19; // w3
  struct UISprite_o *v20; // x8
  struct UIAtlas_o *v21; // x1
  System_Collections_Generic_List_object__o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57AF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AF3 = 1;
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
    v10 = this->fields.restrictionMaskSprite;
    this->fields.restrictionWarningCenter.fields.x = localPosition.fields.x;
    this->fields.restrictionWarningCenter.fields.y = localPosition.fields.y + -55.0;
    this->fields.restrictionWarningCenter.fields.z = localPosition.fields.z;
    if ( !v10 )
      goto LABEL_37;
    mAtlas = v10->fields.mAtlas;
    this->fields.maskSpriteDefaultAtlas = mAtlas;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.maskSpriteDefaultAtlas, (int32_t)mAtlas, v8, v9);
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
    v15 = this->fields.baseSprite;
    if ( !v15 )
      goto LABEL_37;
    v16 = v15->fields.mAtlas;
    this->fields.baseDefaultUIAtlas = v16;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.baseDefaultUIAtlas, (int32_t)v16, v13, v14);
  }
  base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (void *)UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    v20 = this->fields.base2Sprite;
    if ( v20 )
    {
      v21 = v20->fields.mAtlas;
      this->fields.base2DefaultUIAtlas = v21;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.base2DefaultUIAtlas,
        (int32_t)v21,
        (int32_t)v18,
        v19);
      goto LABEL_36;
    }
LABEL_37:
    sub_1B8880C(transform, v4);
  }
LABEL_36:
  SupportSelectItemDraw__SetActiveDragSwapGuide(this, 0, v18);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.switchSkillUIList, (int32_t)v22, v23, v24);
}


void __fastcall SupportSelectItemDraw__ClearItem(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Object_o *noneEquipSprite; // x20
  UnityEngine_Object_o *sortieMaskSprite; // x20

  if ( (byte_4A57AF4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AF4 = 1;
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
    sub_1B8880C(gameObject, v4);
  }
LABEL_19:
  SupportSelectItemDraw__ClearMessage(this, v4);
}


void __fastcall SupportSelectItemDraw__ClearMessage(SupportSelectItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *restrictionMaskSprite; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *restrictionWarningBase; // x20

  if ( (byte_4A57AF6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57AF6 = 1;
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
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall SupportSelectItemDraw__SetActiveDragSwapGuide(
        SupportSelectItemDraw_o *this,
        bool flag,
        const MethodInfo *method)
{
  UnityEngine_Object_o *dragSwapGuideObj; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4A57AF9 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AF9 = 1;
  }
  dragSwapGuideObj = (UnityEngine_Object_o *)this->fields.dragSwapGuideObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dragSwapGuideObj, 0LL, 0LL) )
  {
    v7 = this->fields.dragSwapGuideObj;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  if ( (byte_4A57AFA & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A57AFA = 1;
  }
  equipRootObj = (UnityEngine_Object_o *)this->fields.equipRootObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipRootObj, 0LL, 0LL) )
  {
    v7 = this->fields.equipRootObj;
    if ( !v7 )
      sub_1B8880C(0LL, v6);
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
  __int64 gameObject; // x0
  unsigned __int64 v11; // x1
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v14; // w9
  UnityEngine_Object_o *skillInfoUiWidget; // x21
  UnityEngine_Object_o *appendSkillInfoUiWidget; // x21
  UserServantLeaderEntity_o *UserServantLeaderEntity; // x29
  struct EquipTargetInfo_o *equipTarget1; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  __int64 v20; // x23
  __int64 v21; // x24
  Il2CppObject *v22; // x25
  Il2CppObject *MasterData_object; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v24; // x21
  void *monitor; // x23
  Il2CppClass *klass; // x24
  int32_t v27; // w19
  struct ServantLeaderInfo_o *servantLeaderInfo; // x28
  ServantEntity_o *v29; // x25
  int32_t atk; // w8
  int hp; // w8
  char v32; // w26
  UISprite_o *backClassIcon; // x21
  __int64 v34; // x8
  UnityEngine_Object_o *baseSprite; // x21
  UISprite_o *v36; // x21
  UIAtlas_o *baseDefaultUIAtlas; // x22
  UnityEngine_Object_o *base2Sprite; // x21
  UISprite_o *v39; // x21
  UIAtlas_o *base2DefaultUIAtlas; // x22
  UnityEngine_Object_o *servantClassIcon; // x21
  UnityEngine_Object_o *levelLabel; // x21
  UnityEngine_Object_o *raritySprite; // x21
  UnityEngine_Object_o *attackLabel; // x21
  UnityEngine_Object_o *hpLabel; // x21
  UnityEngine_Object_o *sortieMaskSprite; // x21
  UnityEngine_Object_o *skillListTreasureDevice; // x21
  UnityEngine_Object_o *appendSkillList; // x21
  UnityEngine_Object_o *svtCommandCardList; // x21
  UnityEngine_Object_o *friendPointBonusBase; // x21
  System_Object_array *v51; // x19
  bool v52; // w22
  UserServantEntity_o *v53; // x23
  int32_t v54; // w8
  int v55; // w8
  int adjustAtk; // w9
  int32_t v57; // w0
  int32_t exceedCount; // w22
  int32_t v59; // w23
  int32_t CardImageLimitCount; // w21
  struct EventUpValSetupInfo_o *eventSetupInfo; // x2
  struct System_Int32_array *eventIdList; // x8
  bool EventUpVal_40494464; // w19
  Il2CppObject *Master_object; // x22
  Il2CppObject *v65; // x24
  System_Collections_Generic_List_object__o *v66; // x26
  struct EventUpValSetupInfo_o *v67; // x8
  struct System_Int32_array *v68; // x20
  __int64 v69; // x8
  unsigned __int64 v70; // x29
  int32_t v71; // w23
  struct QuestRestrictionInfo_o *questRestrictionInfo; // x8
  Il2CppObject *v73; // x0
  int32_t eventSvtPoint; // w21
  __int64 v75; // x24
  __int64 v76; // x25
  int32_t v77; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t svtPointRank; // w27
  EventMargeItemUpValInfo_o *v80; // x21
  EventPersonalMargeUpValInfo_o *v81; // x27
  int32_t v82; // w2
  int32_t v83; // w3
  __int64 v84; // x8
  __int64 v85; // x23
  unsigned __int64 v86; // x21
  struct System_Object_array *items; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  int v91; // w25
  _BOOL4 QuestRestriction; // w29
  _BOOL4 UniqueSvtRestriction; // w24
  int32_t v94; // w29
  SupportServantData_o *v95; // x21
  int v96; // w20
  QuestRestrictionInfo_o *v97; // x8
  int32_t v98; // w21
  int32_t v99; // w27
  QuestRestrictionInfo_o *v100; // x22
  __int64 v101; // x23
  __int64 v102; // x24
  int32_t v103; // w0
  int32_t v104; // w23
  int32_t v105; // w24
  _BOOL4 IsRestrictionServantIndividuality; // w0
  int v107; // w9
  int32_t v108; // w0
  Il2CppObject v109; // q1
  int64_t v110; // x21
  bool IsDataLost; // w26
  int32_t TimesToRestart; // w23
  ServantEntity_o *v113; // x25
  bool EventUpVal_40207232; // w19
  Il2CppObject *v115; // x29
  Il2CppObject *v116; // x28
  System_Collections_Generic_List_object__o *v117; // x22
  struct EventUpValSetupInfo_o *v118; // x8
  struct System_Int32_array *v119; // x20
  __int64 v120; // x8
  unsigned __int64 v121; // x21
  int32_t v122; // w23
  __int128 v123; // q0
  int64_t v124; // x24
  int32_t v125; // w4
  int32_t BuddyPoint; // w27
  int32_t v127; // w0
  EventServantPointRankEntity_o *v128; // x0
  int32_t v129; // w25
  EventMargeItemUpValInfo_o *v130; // x24
  EventPersonalMargeUpValInfo_o *v131; // x27
  int32_t v132; // w2
  int32_t v133; // w3
  __int64 v134; // x8
  __int64 v135; // x23
  unsigned __int64 v136; // x19
  struct System_Object_array *v137; // x8
  _QWORD *v138; // x9
  __int64 v139; // x10
  Il2CppClass **v140; // x0
  UnityEngine_Object_o *v141; // x21
  UnityEngine_Object_o *v142; // x21
  UILabel_o *v143; // x21
  UnityEngine_Object_o *v144; // x21
  int32_t v145; // w19
  int32_t v146; // w21
  _BOOL4 v147; // w26
  System_String_o *Icon_37701784; // x21
  int v149; // w29
  _BOOL4 v150; // w25
  int v151; // w24
  int32_t RarityIcon; // w22
  int32_t v153; // w22
  UISprite_o *v154; // x23
  float v155; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Object_o *v158; // x21
  SkillListTreasureDeviceComponent_o *v159; // x21
  SkillInfo_array *v160; // x22
  int32_t v161; // w2
  int32_t v162; // w3
  __int64 v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  __int64 v166; // x8
  UnityEngine_Object_o *v167; // x21
  AppendSkillListComponent_o *v168; // x21
  SkillInfo_array *v169; // x22
  int32_t v170; // w2
  int32_t v171; // w3
  __int64 v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  __int64 v175; // x8
  UnityEngine_Object_o *switchSkillInfo; // x21
  struct System_Collections_Generic_List_UIWidget__o *v177; // x0
  SwitchUIWidgetComponent_o *v178; // x21
  UnityEngine_Object_o *v179; // x21
  UnityEngine_Object_o *v180; // x21
  float v181; // s1
  float v182; // s2
  float v183; // s0
  float v184; // s3
  UILabel_o *v185; // x21
  UnityEngine_Object_o *v186; // x21
  float v187; // s1
  float v188; // s2
  float v189; // s0
  float v190; // s3
  UILabel_o *v191; // x21
  UnityEngine_Object_o *v192; // x21
  UISprite_o *v193; // x22
  UIAtlas_o *v194; // x21
  UnityEngine_Object_o *v195; // x21
  UISprite_o *v196; // x22
  UIAtlas_o *v197; // x21
  const MethodInfo *v198; // x4
  UnityEngine_Object_o *v199; // x21
  System_String_o *v200; // x0
  System_String_o *v201; // x1
  bool v202; // w2
  SupportSelectItemDraw_o *v203; // x0
  bool v204; // w3
  UnityEngine_Object_o *v205; // x21
  bool v206; // w1
  System_String_o *v207; // x0
  const MethodInfo *v208; // x3
  System_String_o *v209; // x21
  __int64 v210; // x2
  __int64 v211; // x3
  __int64 v212; // x4
  Il2CppObject *v213; // x0
  UnityEngine_Object_o *v214; // x21
  UnityEngine_Object_o *friendPointBonus; // x21
  UnityEngine_Object_o *v216; // x21
  UnityEngine_Object_o *eventUpValIcon; // x21
  int max_length; // w8
  SupportServantData_o *v219; // x25
  __int64 v220; // x19
  int32_t eventId; // w21
  int32_t value; // w23
  EventCampaignEntity_o **m_Items; // x20
  EventCampaignEntity_o *v224; // x8
  EventCampaignEntity_o *v225; // x9
  struct System_Int32_array *targetIds; // x10
  _BOOL4 v227; // w10
  System_Collections_Generic_List_object__o *v228; // x0
  System_Collections_Generic_List_object__o *v229; // x24
  UISprite_o *v230; // x21
  void *v231; // x23
  Il2CppClass *v232; // x24
  int32_t v233; // w23
  UnityEngine_Object_o *v234; // x21
  void *v235; // x21
  Il2CppClass *v236; // x23
  int v237; // w21
  EventMargeItemUpValInfo_o *v238; // x25
  int32_t v239; // w2
  int32_t v240; // w3
  struct System_Object_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  Il2CppClass **v244; // x0
  UISprite_o *equipSprite; // x21
  __int64 v246; // x23
  __int64 v247; // x24
  int32_t v248; // w23
  UnityEngine_Object_o *equipLimitCountSprite; // x21
  System_Object_array *v250; // x21
  int limitCount; // w19
  UnityEngine_Object_o *v252; // x21
  UnityEngine_Object_o *v253; // x21
  struct ServantLeaderInfo_o *v254; // x8
  __int64 v255; // x21
  __int64 v256; // x22
  int32_t v257; // w21
  int32_t v258; // w0
  UnityEngine_Object_o *v259; // x21
  bool v260; // w1
  struct UserServantEntity_o *userServantEntity; // x8
  __int64 v262; // x21
  __int64 v263; // x22
  int32_t v264; // w3
  int32_t equipSvtId; // w4
  UnityEngine_Object_o *bounusIcon; // x21
  UnityEngine_Object_o *baseButton; // x21
  UnityEngine_Object_o *pushSprite; // x21
  int64_t pushUserServantId; // x8
  _BOOL4 v270; // [xsp+10h] [xbp-1B0h]
  bool v271; // [xsp+14h] [xbp-1ACh]
  int32_t v272; // [xsp+18h] [xbp-1A8h]
  _BOOL4 v273; // [xsp+18h] [xbp-1A8h]
  int32_t v274; // [xsp+18h] [xbp-1A8h]
  int32_t classId; // [xsp+1Ch] [xbp-1A4h]
  int32_t cardParams; // [xsp+20h] [xbp-1A0h]
  System_Int32_array *cardParamsa; // [xsp+20h] [xbp-1A0h]
  int32_t cardParamsb; // [xsp+20h] [xbp-1A0h]
  int32_t treasureDeviceNum; // [xsp+2Ch] [xbp-194h]
  int32_t strengthStatus; // [xsp+30h] [xbp-190h]
  int32_t v281; // [xsp+34h] [xbp-18Ch]
  int adjustHp; // [xsp+38h] [xbp-188h]
  int v283; // [xsp+3Ch] [xbp-184h]
  SupportSelectItemDraw_o *v284; // [xsp+40h] [xbp-180h]
  SupportSelectItemDraw_o *v285; // [xsp+40h] [xbp-180h]
  bool v286; // [xsp+40h] [xbp-180h]
  System_Int32_array *codeIds; // [xsp+48h] [xbp-178h]
  System_Int32_array *codeIdsa; // [xsp+48h] [xbp-178h]
  int32_t rarity; // [xsp+54h] [xbp-16Ch]
  UserServantLeaderEntity_o *v290; // [xsp+58h] [xbp-168h]
  int32_t frameType; // [xsp+64h] [xbp-15Ch]
  Il2CppObject *v292; // [xsp+68h] [xbp-158h]
  Il2CppObject *v293; // [xsp+70h] [xbp-150h]
  _BOOL4 IsUniqueIndividualityRestriction; // [xsp+78h] [xbp-148h]
  UserServantEntity_o *v295; // [xsp+78h] [xbp-148h]
  EventCampaignEntity_array *v296; // [xsp+80h] [xbp-140h]
  struct EquipTargetInfo_o *v297; // [xsp+88h] [xbp-138h]
  EventServantPointRankMaster_o *v298; // [xsp+90h] [xbp-130h]
  EventServantPointRankMaster_o *v299; // [xsp+90h] [xbp-130h]
  Il2CppObject *v300; // [xsp+90h] [xbp-130h]
  ServantEntity_o *v301; // [xsp+98h] [xbp-128h]
  SupportServantData_o *v302; // [xsp+A0h] [xbp-120h]
  int v303; // [xsp+A0h] [xbp-120h]
  SupportServantData_o *v304; // [xsp+A0h] [xbp-120h]
  int32_t svtId; // [xsp+ACh] [xbp-114h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v306; // [xsp+B0h] [xbp-110h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v307; // [xsp+D0h] [xbp-F0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v308; // [xsp+F0h] [xbp-D0h] BYREF
  UserEventServantPointEntity_o *entity; // [xsp+110h] [xbp-B0h] BYREF
  SkillInfo_array *v310; // [xsp+118h] [xbp-A8h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+120h] [xbp-A0h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+128h] [xbp-98h] BYREF
  int v313; // [xsp+134h] [xbp-8Ch] BYREF
  int32_t lv[2]; // [xsp+138h] [xbp-88h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+148h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v316; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v317; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v318; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v319; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v320; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v321; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v322; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v323; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v324; // 0:x0.16
  UnityEngine_Vector3_o v325; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57AF5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventServantPointRankMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantExceedMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantLvDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserEventServantPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1B885B0(&EventMargeItemUpValInfo_TypeInfo);
    sub_1B885B0(&EventPersonalMargeUpValInfo_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UIWidget__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
    sub_1B885B0(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Rarity_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    sub_1B885B0(&SupportSelectItemDraw_TypeInfo);
    sub_1B885B0(&TutorialFlag_TypeInfo);
    sub_1B885B0(&StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/);
    sub_1B885B0(&StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/);
    sub_1B885B0(&StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/);
    sub_1B885B0(&StringLiteral_429/*"#,0"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57AF5 = 1;
  }
  eventUpVallInfo = 0LL;
  *(_QWORD *)lv = 0LL;
  v313 = 0;
  tdInfo = 0LL;
  skillInfoList = 0LL;
  entity = 0LL;
  v310 = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_544;
  size = switchSkillUIList->fields._size;
  v14 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v14;
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
  if ( !supportServantData )
    goto LABEL_544;
  UserServantLeaderEntity = SupportServantData__getUserServantLeaderEntity(supportServantData, classPos, 0LL);
  eventUpVallInfo = 0LL;
  gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
  v296 = eventFriendPoints;
  if ( gameObject )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( !UserServantLeaderEntity )
        goto LABEL_544;
      equipTarget1 = UserServantLeaderEntity->fields.equipTarget1;
      gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)DataManager__GetMasterData_object_(
                              (DataManager_o *)gameObject,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
      if ( !equipTarget1 )
        goto LABEL_544;
      v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
      v21 = *(_QWORD *)&equipTarget1->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&equipTarget1->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v316.fields.currentCryptoKey = v21;
      *(_QWORD *)&v316.fields.fakeValue = v20;
      gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v316, 0LL);
      if ( !v19 )
        goto LABEL_544;
      v22 = 0LL;
      v293 = DataMasterBase_object__object__int___GetEntity(
               v19,
               gameObject,
               (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      goto LABEL_37;
    }
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
    gameObject = SupportServantData__getEquip(supportServantData, classPos, 0LL);
    if ( !MasterData_object )
      goto LABEL_544;
    v22 = DataMasterBase_object__object__long___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
            gameObject,
            (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)DataManager__GetMasterData_object_(
                            (DataManager_o *)gameObject,
                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !v22 )
      goto LABEL_544;
    v24 = (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject;
    klass = v22[5].klass;
    monitor = v22[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v317.fields.currentCryptoKey = klass;
    *(_QWORD *)&v317.fields.fakeValue = monitor;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v317, 0LL);
    if ( !v24 )
      goto LABEL_544;
    gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                            v24,
                            gameObject,
                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  }
  else
  {
    v22 = 0LL;
  }
  equipTarget1 = 0LL;
  v293 = (Il2CppObject *)gameObject;
  if ( !UserServantLeaderEntity )
  {
    v297 = 0LL;
    v32 = 1;
    goto LABEL_47;
  }
LABEL_37:
  v297 = equipTarget1;
  if ( !UserServantLeaderEntity->fields.userSvtId )
  {
    v32 = 0;
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
    v34 = **(_QWORD **)(gameObject + 184);
    if ( !v34 )
      goto LABEL_544;
    if ( *(_DWORD *)(v34 + 24) <= (unsigned int)classPos )
      goto LABEL_545;
    if ( !backClassIcon )
      goto LABEL_544;
    UISprite__set_spriteName(backClassIcon, *(System_String_o **)(v34 + 8LL * classPos + 32), 0LL);
    baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
    {
      v36 = this->fields.baseSprite;
      baseDefaultUIAtlas = this->fields.baseDefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationBase(v36, 9, baseDefaultUIAtlas, 0, 0LL);
    }
    base2Sprite = (UnityEngine_Object_o *)this->fields.base2Sprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(base2Sprite, 0LL, 0LL) )
    {
      v39 = this->fields.base2Sprite;
      base2DefaultUIAtlas = this->fields.base2DefaultUIAtlas;
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetFormationFrameForSupportSelect(v39, 9, base2DefaultUIAtlas, 0, 0LL);
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
    SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
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
    v51 = 0LL;
    v52 = 0;
    if ( v22 )
      goto LABEL_438;
LABEL_466:
    gameObject = (__int64)this->fields.noneEquipSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( v297 )
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
      v247 = *(_QWORD *)&v297->fields.svtId.fields.currentCryptoKey;
      v246 = *(_QWORD *)&v297->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v322.fields.currentCryptoKey = v247;
      *(_QWORD *)&v322.fields.fakeValue = v246;
      v248 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v322, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetEquipFace(equipSprite, v248, 0LL);
      equipLimitCountSprite = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(equipLimitCountSprite, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        v250 = v51;
        limitCount = v297->fields.limitCount;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( limitCount >= 4 )
        {
          if ( !v293 )
            goto LABEL_544;
          v11 = SLODWORD(v293[5].monitor) >= limitCount;
        }
        else
        {
          v11 = 0LL;
        }
        if ( gameObject )
        {
          v51 = v250;
LABEL_493:
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11, 0LL);
          goto LABEL_494;
        }
LABEL_544:
        sub_1B8880C(gameObject, v11);
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
      v252 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v252, 0LL, 0LL) )
      {
        gameObject = (__int64)this->fields.equipLimitCountSprite;
        if ( !gameObject )
          goto LABEL_544;
        gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_544;
        LOBYTE(v11) = 0;
        goto LABEL_493;
      }
    }
    goto LABEL_494;
  }
  v27 = UserServantLeaderEntity->fields.svtId;
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          v27,
                          (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v301 = (ServantEntity_o *)gameObject;
  v292 = v22;
  svtId = v27;
  v290 = UserServantLeaderEntity;
  classId = *(_DWORD *)(gameObject + 80);
  if ( supportServantData->fields.isFriendInfo )
  {
    servantLeaderInfo = UserServantLeaderEntity->fields.servantLeaderInfo;
    v284 = this;
    if ( !servantLeaderInfo )
      goto LABEL_544;
    ServantLeaderInfo__ChangeLimitCountBySpoilerProtection(servantLeaderInfo, 0LL);
    v29 = v301;
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
    v313 = hp;
    adjustHp = servantLeaderInfo->fields.adjustHp;
    v283 = adjustAtk;
    v57 = ServantLeaderInfo__getRarity(servantLeaderInfo, 0LL);
    exceedCount = servantLeaderInfo->fields.exceedCount;
    v59 = v57;
    frameType = ServantLeaderInfo__getFrameType(servantLeaderInfo, 0LL);
    CardImageLimitCount = ServantLeaderInfo__getCardImageLimitCount(servantLeaderInfo, 0LL);
    ServantLeaderInfo__getSkillInfo(servantLeaderInfo, &skillInfoList, 0LL);
    gameObject = ServantLeaderInfo__getTreasureDeviceInfo(servantLeaderInfo, &tdInfo, 0LL);
    if ( !tdInfo )
      goto LABEL_544;
    strengthStatus = tdInfo->fields.strengthStatus;
    v281 = tdInfo->fields.lv;
    treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
    ServantLeaderInfo__GetAppendPassiveSkillInfo_40506644(servantLeaderInfo, &v310, 0, 0LL);
    eventSetupInfo = supportServantData->fields.eventSetupInfo;
    rarity = v59;
    if ( !eventSetupInfo )
      goto LABEL_171;
    eventIdList = eventSetupInfo->fields.eventIdList;
    if ( !eventIdList )
      goto LABEL_544;
    if ( *(_QWORD *)&eventIdList->max_length )
    {
      cardParams = exceedCount;
      EventUpVal_40494464 = ServantLeaderInfo__getEventUpVal_40494464(
                              servantLeaderInfo,
                              &eventUpVallInfo,
                              eventSetupInfo,
                              0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventDetailMaster___);
      v65 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
      v66 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v66,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
      v67 = supportServantData->fields.eventSetupInfo;
      v302 = supportServantData;
      if ( !v67 )
        goto LABEL_544;
      v68 = v67->fields.eventIdList;
      v298 = (EventServantPointRankMaster_o *)v65;
      v272 = CardImageLimitCount;
      if ( !v68 )
        goto LABEL_544;
      v69 = *(_QWORD *)&v68->max_length;
      if ( (int)v69 >= 1 )
      {
        v70 = 0LL;
        while ( 1 )
        {
          if ( v70 >= (unsigned int)v69 )
            goto LABEL_545;
          v71 = v68->m_Items[v70 + 1];
          questRestrictionInfo = v302->fields.questRestrictionInfo;
          if ( !questRestrictionInfo || questRestrictionInfo->fields.eventId == v71 )
          {
            if ( !Master_object )
              goto LABEL_544;
            v73 = DataMasterBase_object__object__int___GetEntity(
                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                    v71,
                    (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
            if ( !v73
              || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)v73, 0x800000000LL, 0LL),
                  (gameObject & 1) == 0) )
            {
              gameObject = (__int64)v298;
              if ( !v298 )
                goto LABEL_544;
              if ( EventServantPointRankMaster__IsEnableEvent(v298, v71, 0LL) )
              {
                eventSvtPoint = servantLeaderInfo->fields.eventSvtPoint;
                v76 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
                v75 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
                if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                *(_QWORD *)&v318.fields.currentCryptoKey = v76;
                *(_QWORD *)&v318.fields.fakeValue = v75;
                v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v318, 0LL);
                EnableEntity = EventServantPointRankMaster__GetEnableEntity(v298, v71, eventSvtPoint, v77, 0LL);
                if ( EnableEntity )
                  svtPointRank = EnableEntity->fields.svtPointRank;
                else
                  svtPointRank = 0;
                v29 = v301;
                v80 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
                EventMargeItemUpValInfo___ctor_38890232(v80, v71, 0LL);
                if ( !v80 )
                  goto LABEL_544;
                EventMargeItemUpValInfo__SetServantPointInfo(
                  v80,
                  servantLeaderInfo->fields.eventSvtPoint,
                  svtPointRank,
                  1,
                  0LL);
                if ( !v66 )
                  goto LABEL_544;
                System_Collections_Generic_List_object___Insert(
                  v66,
                  0,
                  (Il2CppObject *)v80,
                  (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
              }
              v81 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
              EventPersonalMargeUpValInfo___ctor(v81, v71, v29, 0LL);
              gameObject = (__int64)eventUpVallInfo;
              if ( !eventUpVallInfo )
                goto LABEL_544;
              gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
              if ( !v81 )
                goto LABEL_544;
              EventPersonalMargeUpValInfo__Add(v81, (EventDropItemUpValInfo_array *)gameObject, 0LL);
              gameObject = EventPersonalMargeUpValInfo__IsEmpty(v81, 0LL);
              if ( (gameObject & 1) == 0 )
              {
                gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v81, 0LL);
                if ( !gameObject )
                  goto LABEL_544;
                v84 = *(_QWORD *)(gameObject + 24);
                v85 = gameObject;
                if ( (int)v84 >= 1 )
                  break;
              }
            }
          }
LABEL_168:
          LODWORD(v69) = v68->max_length;
          if ( (__int64)++v70 >= (int)v69 )
            goto LABEL_169;
        }
        v86 = 0LL;
        while ( v86 < (unsigned int)v84 )
        {
          if ( !v66 )
            goto LABEL_544;
          v11 = *(_QWORD *)(v85 + 32 + 8 * v86);
          items = v66->fields._items;
          v88 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
          ++v66->fields._version;
          if ( !items )
            goto LABEL_544;
          v89 = v66->fields._size;
          if ( (unsigned int)v89 >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v66,
              (Il2CppObject *)v11,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
          }
          else
          {
            v90 = &items->obj.klass + v89;
            v66->fields._size = v89 + 1;
            v90[4] = (Il2CppClass *)v11;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v90 + 4), v11, v82, v83);
          }
          LODWORD(v84) = *(_DWORD *)(v85 + 24);
          if ( (__int64)++v86 >= (int)v84 )
            goto LABEL_168;
        }
        goto LABEL_545;
      }
LABEL_169:
      if ( !v66 )
        goto LABEL_544;
      v91 = EventUpVal_40494464;
      supportServantData = v302;
      v27 = svtId;
      exceedCount = cardParams;
      CardImageLimitCount = v272;
      v299 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                                v66,
                                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    }
    else
    {
LABEL_171:
      v299 = 0LL;
      v91 = 0;
    }
    codeIds = ServantLeaderInfo__getCommandCodeIdList(servantLeaderInfo, 0LL);
    cardParamsa = servantLeaderInfo->fields.commandCardParam;
    QuestRestriction = ServantLeaderInfo__getQuestRestriction(
                         servantLeaderInfo,
                         supportServantData->fields.questRestrictionInfo,
                         0LL);
    UniqueSvtRestriction = ServantLeaderInfo__getUniqueSvtRestriction(
                             servantLeaderInfo,
                             supportServantData->fields.questRestrictionInfo,
                             0LL);
    IsUniqueIndividualityRestriction = ServantLeaderInfo__IsUniqueIndividualityRestriction(
                                         servantLeaderInfo,
                                         supportServantData->fields.questRestrictionInfo,
                                         0LL);
    if ( ServantLeaderInfo__IsSlotRestriction(servantLeaderInfo, supportServantData->fields.questRestrictionInfo, 0LL) )
    {
      v303 = 1;
LABEL_195:
      IsDataLost = ServantLeaderInfo__IsDataLost(
                     servantLeaderInfo,
                     supportServantData->fields.questRestrictionInfo,
                     0LL);
      this = v284;
      TimesToRestart = ServantLeaderInfo__GetTimesToRestart(
                         servantLeaderInfo,
                         supportServantData->fields.questRestrictionInfo,
                         0LL);
      goto LABEL_242;
    }
    v273 = QuestRestriction;
    v94 = CardImageLimitCount;
    v95 = supportServantData;
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    v96 = *(_DWORD *)(gameObject + 48);
    gameObject = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    if ( v96 < 1 )
    {
      v303 = 0;
      supportServantData = v95;
    }
    else
    {
      v97 = v95->fields.questRestrictionInfo;
      if ( !v97 )
        goto LABEL_544;
      supportServantData = v95;
      v98 = *(_DWORD *)(gameObject + 52);
      if ( QuestRestrictionInfo__IsMyServantOrNpcRestriction_40453904(v97, v98, 0LL) )
      {
        v270 = UniqueSvtRestriction;
        v99 = exceedCount;
        v100 = supportServantData->fields.questRestrictionInfo;
        v102 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.currentCryptoKey;
        v101 = *(_QWORD *)&servantLeaderInfo->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v319.fields.currentCryptoKey = v102;
        *(_QWORD *)&v319.fields.fakeValue = v101;
        v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v319, 0LL);
        v104 = servantLeaderInfo->fields.limitCount;
        v105 = v103;
        gameObject = ServantLeaderInfo__getDispLimitCount(servantLeaderInfo, 0LL);
        if ( !v100 )
          goto LABEL_544;
        IsRestrictionServantIndividuality = QuestRestrictionInfo__IsRestrictionServantIndividuality(
                                              v100,
                                              v105,
                                              v104,
                                              gameObject,
                                              v98,
                                              1,
                                              0LL);
        v27 = svtId;
        UniqueSvtRestriction = v270;
        exceedCount = v99;
        v303 = IsRestrictionServantIndividuality;
        goto LABEL_194;
      }
      v303 = 0;
    }
    v27 = svtId;
LABEL_194:
    CardImageLimitCount = v94;
    QuestRestriction = v273;
    goto LABEL_195;
  }
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataMasterBase_object__object__long___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)gameObject,
                          UserServantLeaderEntity->fields.userSvtId,
                          (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  if ( !gameObject )
    goto LABEL_544;
  v53 = (UserServantEntity_o *)gameObject;
  lv[1] = *(_DWORD *)(gameObject + 256);
  v54 = *(_DWORD *)(gameObject + 264);
  lv[0] = v54;
  if ( v22 )
  {
    lv[0] = LODWORD(v22[16].monitor) + v54;
    v55 = HIDWORD(v22[16].monitor) + *(_DWORD *)(gameObject + 268);
  }
  else
  {
    v55 = *(_DWORD *)(gameObject + 268);
  }
  v107 = *(_DWORD *)(gameObject + 272);
  v313 = v55;
  adjustHp = *(_DWORD *)(gameObject + 276);
  v283 = v107;
  v108 = UserServantEntity__getRarity((UserServantEntity_o *)gameObject, 0LL);
  exceedCount = v53->fields.exceedCount;
  rarity = v108;
  frameType = UserServantEntity__getFrameType(v53, 0LL);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(v53, 0, 0LL);
  UserServantEntity__getSkillInfo(v53, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  gameObject = UserServantEntity__getTreasureDeviceInfo(v53, &tdInfo, -1, -1, 0, 0LL);
  if ( !tdInfo )
    goto LABEL_544;
  strengthStatus = tdInfo->fields.strengthStatus;
  v281 = tdInfo->fields.lv;
  treasureDeviceNum = tdInfo->fields.treasureDeviceNum;
  v295 = v53;
  UserServantEntity__GetAppendPassiveSkillInfo_40232352(v53, &v310, 0LL);
  if ( supportServantData->fields.eventSetupInfo )
  {
    v274 = CardImageLimitCount;
    if ( v22 )
    {
      v109 = v22[2];
      *(Il2CppObject *)&v308.fields.currentCryptoKey = v22[1];
      *(Il2CppObject *)&v308.fields.fakeValue = v109;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      v307 = v308;
      v110 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v307, 0LL);
    }
    else
    {
      v110 = -1LL;
    }
    v113 = v301;
    gameObject = sub_1B88658(long___TypeInfo, 1LL);
    if ( !gameObject )
      goto LABEL_544;
    if ( !*(_DWORD *)(gameObject + 24) )
      goto LABEL_545;
    *(_QWORD *)(gameObject + 32) = v110;
    EventUpVal_40207232 = UserServantEntity__getEventUpVal_40207232(
                            v53,
                            &eventUpVallInfo,
                            supportServantData->fields.eventSetupInfo,
                            (System_Int64_array *)gameObject,
                            0LL,
                            0LL);
    gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !gameObject )
      goto LABEL_544;
    cardParamsb = exceedCount;
    v285 = this;
    v115 = DataManager__GetMasterData_object_(
             (DataManager_o *)gameObject,
             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v116 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
    v300 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
    v117 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v117,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
    v118 = supportServantData->fields.eventSetupInfo;
    v304 = supportServantData;
    if ( !v118 )
      goto LABEL_544;
    v119 = v118->fields.eventIdList;
    v271 = EventUpVal_40207232;
    if ( !v119 )
      goto LABEL_544;
    v120 = *(_QWORD *)&v119->max_length;
    if ( (int)v120 >= 1 )
    {
      v121 = 0LL;
      codeIdsa = (System_Int32_array *)&v53->fields.userId;
      while ( 1 )
      {
        if ( v121 >= (unsigned int)v120 )
          goto LABEL_545;
        if ( !v115 )
          goto LABEL_544;
        v122 = v119->m_Items[v121 + 1];
        gameObject = (__int64)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)v115,
                                v122,
                                (const MethodInfo_311D934 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__GetEntity__);
        if ( !gameObject
          || (gameObject = EventDetailEntity__HasFlag((EventDetailEntity_o *)gameObject, 0x800000000LL, 0LL),
              (gameObject & 1) == 0) )
        {
          if ( !v116 )
            goto LABEL_544;
          if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)v116, v122, 0LL) )
          {
            v123 = *(_OWORD *)&codeIdsa->bounds;
            *(Il2CppObject *)&v308.fields.currentCryptoKey = codeIdsa->obj;
            *(_OWORD *)&v308.fields.fakeValue = v123;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v306 = v308;
            v124 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v306, 0LL);
            v125 = UserServantEntity__getSvtId(v295, 0LL);
            gameObject = (__int64)v300;
            if ( !v300 )
              goto LABEL_544;
            if ( UserEventServantPointMaster__TryGetEntity(
                   (UserEventServantPointMaster_o *)v300,
                   &entity,
                   v124,
                   v122,
                   v125,
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
            v127 = UserServantEntity__getSvtId(v295, 0LL);
            v128 = EventServantPointRankMaster__GetEnableEntity(
                     (EventServantPointRankMaster_o *)v116,
                     v122,
                     BuddyPoint,
                     v127,
                     0LL);
            v129 = v128 ? v128->fields.svtPointRank : 0;
            v130 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
            EventMargeItemUpValInfo___ctor_38890232(v130, v122, 0LL);
            if ( !v130 )
              goto LABEL_544;
            EventMargeItemUpValInfo__SetServantPointInfo(v130, BuddyPoint, v129, 0, 0LL);
            if ( !v117 )
              goto LABEL_544;
            System_Collections_Generic_List_object___Insert(
              v117,
              0,
              (Il2CppObject *)v130,
              (const MethodInfo_34FE5E4 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
            v113 = v301;
          }
          v131 = (EventPersonalMargeUpValInfo_o *)sub_1B887FC(EventPersonalMargeUpValInfo_TypeInfo);
          EventPersonalMargeUpValInfo___ctor(v131, v122, v113, 0LL);
          gameObject = (__int64)eventUpVallInfo;
          if ( !eventUpVallInfo )
            goto LABEL_544;
          gameObject = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
          if ( !v131 )
            goto LABEL_544;
          EventPersonalMargeUpValInfo__Add(v131, (EventDropItemUpValInfo_array *)gameObject, 0LL);
          gameObject = EventPersonalMargeUpValInfo__IsEmpty(v131, 0LL);
          if ( (gameObject & 1) == 0 )
          {
            gameObject = (__int64)EventPersonalMargeUpValInfo__GetList(v131, 0LL);
            if ( !gameObject )
              goto LABEL_544;
            v134 = *(_QWORD *)(gameObject + 24);
            v135 = gameObject;
            if ( (int)v134 >= 1 )
              break;
          }
        }
LABEL_238:
        LODWORD(v120) = v119->max_length;
        if ( (__int64)++v121 >= (int)v120 )
          goto LABEL_239;
      }
      v136 = 0LL;
      while ( v136 < (unsigned int)v134 )
      {
        if ( !v117 )
          goto LABEL_544;
        v11 = *(_QWORD *)(v135 + 32 + 8 * v136);
        v137 = v117->fields._items;
        v138 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v117->fields._version;
        if ( !v137 )
          goto LABEL_544;
        v139 = v117->fields._size;
        if ( (unsigned int)v139 >= v137->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v117,
            (Il2CppObject *)v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
        }
        else
        {
          v140 = &v137->obj.klass + v139;
          v117->fields._size = v139 + 1;
          v140[4] = (Il2CppClass *)v11;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v140 + 4), v11, v132, v133);
        }
        LODWORD(v134) = *(_DWORD *)(v135 + 24);
        if ( (__int64)++v136 >= (int)v134 )
          goto LABEL_238;
      }
LABEL_545:
      sub_1B88814(gameObject, v11);
    }
LABEL_239:
    if ( !v117 )
      goto LABEL_544;
    v91 = v271;
    v299 = (EventServantPointRankMaster_o *)System_Collections_Generic_List_object___ToArray(
                                              v117,
                                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
    this = v285;
    supportServantData = v304;
    v27 = svtId;
    exceedCount = cardParamsb;
    CardImageLimitCount = v274;
  }
  else
  {
    v299 = 0LL;
    v91 = 0;
  }
  codeIds = UserServantEntity__getCommandCodeIdList(v295, 0LL);
  QuestRestriction = UserServantEntity__getQuestRestriction(
                       v295,
                       supportServantData->fields.questRestrictionInfo,
                       2,
                       0LL);
  UniqueSvtRestriction = UserServantEntity__getUniqueSvtRestriction(
                           v295,
                           supportServantData->fields.questRestrictionInfo,
                           0LL);
  TimesToRestart = 0;
  IsDataLost = 0;
  IsUniqueIndividualityRestriction = UserServantEntity__IsUniqueIndividualityRestriction(
                                       v295,
                                       supportServantData->fields.questRestrictionInfo,
                                       0LL);
  v303 = 0;
  cardParamsa = 0LL;
LABEL_242:
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)gameObject,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
  if ( !gameObject )
    goto LABEL_544;
  gameObject = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                 (ServantLimitImageMaster_o *)gameObject,
                 v27,
                 CardImageLimitCount,
                 0LL);
  if ( !this->fields.servantNarrowTexture )
    goto LABEL_544;
  UINarrowFigureTexture__SetCharacter(this->fields.servantNarrowTexture, v27, gameObject, 0LL, 0LL);
  v141 = (UnityEngine_Object_o *)this->fields.servantClassIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v51 = (System_Object_array *)v299;
  if ( UnityEngine_Object__op_Inequality(v141, 0LL, 0LL) )
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
  v142 = (UnityEngine_Object_o *)this->fields.levelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v142, 0LL, 0LL) )
  {
    v143 = this->fields.levelLabel;
    gameObject = (__int64)System_Int32__ToString((int32_t)&lv[1], 0LL);
    if ( !v143 )
      goto LABEL_544;
    UILabel__set_text(v143, (System_String_o *)gameObject, 0LL);
  }
  v144 = (UnityEngine_Object_o *)this->fields.raritySprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v144, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v286 = IsDataLost;
    v145 = TimesToRestart;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v146 = lv[1];
    if ( !Rarity_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
    v147 = QuestRestriction;
    Icon_37701784 = Rarity__getIcon_37701784(rarity, exceedCount, v146, 0LL);
    v149 = v91;
    if ( exceedCount < 1 )
    {
      v150 = UniqueSvtRestriction;
      v151 = exceedCount;
      v153 = 0;
    }
    else
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v150 = UniqueSvtRestriction;
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantExceedMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v151 = exceedCount;
      RarityIcon = ServantExceedMaster__GetRarityIcon((ServantExceedMaster_o *)gameObject, rarity, exceedCount, 0, 0LL);
      gameObject = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantLvDetailMaster___);
      if ( !gameObject )
        goto LABEL_544;
      v153 = ServantLvDetailMaster__GetRarityIcon((ServantLvDetailMaster_o *)gameObject, rarity, lv[1], RarityIcon, 0LL);
    }
    v154 = this->fields.raritySprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    if ( v153 >= 3 )
    {
      AtlasManager__SetEventSprite(v154, Icon_37701784, 0LL);
    }
    else
    {
      AtlasManager__SetCommon(v154, 0LL);
      gameObject = (__int64)this->fields.raritySprite;
      if ( !gameObject )
        goto LABEL_544;
      UISprite__set_spriteName((UISprite_o *)gameObject, Icon_37701784, 0LL);
    }
    gameObject = (__int64)this->fields.raritySprite;
    if ( !gameObject )
      goto LABEL_544;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)gameObject + 840LL))(
      gameObject,
      *(_QWORD *)(*(_QWORD *)gameObject + 848LL));
    gameObject = (__int64)this->fields.raritySprite;
    v155 = v151 >= 1 ? this->fields.baseRarityPosition.fields.x + 1.0 : this->fields.baseRarityPosition.fields.x;
    if ( !gameObject )
      goto LABEL_544;
    y = this->fields.baseRarityPosition.fields.y;
    z = this->fields.baseRarityPosition.fields.z;
    gameObject = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v325.fields.x = v155;
    v325.fields.y = y;
    v325.fields.z = z;
    UniqueSvtRestriction = v150;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v325, 0LL);
    v91 = v149;
    QuestRestriction = v147;
    TimesToRestart = v145;
    v51 = (System_Object_array *)v299;
    IsDataLost = v286;
  }
  v158 = (UnityEngine_Object_o *)this->fields.skillListTreasureDevice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v158, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.skillListTreasureDevice;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v159 = this->fields.skillListTreasureDevice;
    v160 = skillInfoList;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (__int64)LocalizationManager__GetLevelList_38398328(v160, 0LL);
    if ( !v159 )
      goto LABEL_544;
    SkillListTreasureDeviceComponent__Set(
      v159,
      (System_String_o *)gameObject,
      v281,
      strengthStatus,
      treasureDeviceNum,
      0,
      0LL);
    gameObject = (__int64)this->fields.switchSkillUIList;
    if ( gameObject )
    {
      v11 = (unsigned __int64)this->fields.skillInfoUiWidget;
      v163 = *(_QWORD *)(gameObject + 16);
      v164 = Method_System_Collections_Generic_List_UIWidget__Add__;
      ++*(_DWORD *)(gameObject + 28);
      if ( !v163 )
        goto LABEL_544;
      v165 = *(int *)(gameObject + 24);
      if ( (unsigned int)v165 >= *(_DWORD *)(v163 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)gameObject,
          (Il2CppObject *)v11,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
      }
      else
      {
        v166 = v163 + 8 * v165;
        *(_DWORD *)(gameObject + 24) = v165 + 1;
        *(_QWORD *)(v166 + 32) = v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v166 + 32), v11, v161, v162);
      }
    }
  }
  v167 = (UnityEngine_Object_o *)this->fields.appendSkillList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v167, 0LL, 0LL) )
  {
    if ( v310 && *(_QWORD *)&v310->max_length )
    {
      gameObject = (__int64)this->fields.appendSkillList;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
      v168 = this->fields.appendSkillList;
      v169 = v310;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (__int64)LocalizationManager__GetLevelList_38398328(v169, 0LL);
      if ( !v168 )
        goto LABEL_544;
      AppendSkillListComponent__Set(v168, (System_String_o *)gameObject, 0LL);
      gameObject = (__int64)this->fields.switchSkillUIList;
      if ( gameObject )
      {
        v11 = (unsigned __int64)this->fields.appendSkillInfoUiWidget;
        v172 = *(_QWORD *)(gameObject + 16);
        v173 = Method_System_Collections_Generic_List_UIWidget__Add__;
        ++*(_DWORD *)(gameObject + 28);
        if ( !v172 )
          goto LABEL_544;
        v174 = *(int *)(gameObject + 24);
        if ( (unsigned int)v174 >= *(_DWORD *)(v172 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)gameObject,
            (Il2CppObject *)v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
        }
        else
        {
          v175 = v172 + 8 * v174;
          *(_DWORD *)(gameObject + 24) = v174 + 1;
          *(_QWORD *)(v175 + 32) = v11;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v175 + 32), v11, v170, v171);
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
    v177 = this->fields.switchSkillUIList;
    if ( v177 )
    {
      v178 = this->fields.switchSkillInfo;
      gameObject = (__int64)System_Collections_Generic_List_object___ToArray(
                              (System_Collections_Generic_List_object__o *)v177,
                              (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
      if ( !v178 )
        goto LABEL_544;
      SwitchUIWidgetComponent__Set(v178, (UIWidget_array *)gameObject, 0LL);
    }
  }
  v179 = (UnityEngine_Object_o *)this->fields.svtCommandCardList;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v179, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.svtCommandCardList;
    if ( !gameObject )
      goto LABEL_544;
    if ( supportServantData->fields.isFriendInfo )
      ServantCommandCardListComponent__Set_38135136(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        cardParamsa,
        codeIds,
        2,
        0,
        0LL);
    else
      ServantCommandCardListComponent__Set_38214152(
        (ServantCommandCardListComponent_o *)gameObject,
        svtId,
        codeIds,
        2,
        0,
        0LL);
  }
  v180 = (UnityEngine_Object_o *)this->fields.attackLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v180, 0LL, 0LL) )
  {
    v181 = 0.92157;
    gameObject = (__int64)this->fields.attackLabel;
    if ( v283 <= 0 )
      v182 = 1.0;
    else
      v182 = 0.015686;
    if ( v283 <= 0 )
      v181 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v183 = 1.0;
    v184 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v181 - 1), 0LL);
    v185 = this->fields.attackLabel;
    gameObject = (__int64)System_Int32__ToString_62512312((int32_t)lv, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
    if ( !v185 )
      goto LABEL_544;
    UILabel__set_text(v185, (System_String_o *)gameObject, 0LL);
  }
  v186 = (UnityEngine_Object_o *)this->fields.hpLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v186, 0LL, 0LL) )
  {
    v187 = 0.92157;
    gameObject = (__int64)this->fields.hpLabel;
    if ( adjustHp <= 0 )
      v188 = 1.0;
    else
      v188 = 0.015686;
    if ( adjustHp <= 0 )
      v187 = 1.0;
    if ( !gameObject )
      goto LABEL_544;
    v189 = 1.0;
    v190 = 1.0;
    UIWidget__set_color((UIWidget_o *)gameObject, *(UnityEngine_Color_o *)(&v187 - 1), 0LL);
    v191 = this->fields.hpLabel;
    gameObject = (__int64)System_Int32__ToString_62512312((int32_t)&v313, (System_String_o *)StringLiteral_429/*"#,0"*/, 0LL);
    if ( !v191 )
      goto LABEL_544;
    UILabel__set_text(v191, (System_String_o *)gameObject, 0LL);
  }
  v192 = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v192, 0LL, 0LL) )
  {
    v193 = this->fields.baseSprite;
    v194 = this->fields.baseDefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationBase(v193, frameType, v194, 0, 0LL);
  }
  v195 = (UnityEngine_Object_o *)this->fields.base2Sprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v195, 0LL, 0LL) )
  {
    v196 = this->fields.base2Sprite;
    v197 = this->fields.base2DefaultUIAtlas;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetFormationFrameForSupportSelect(v196, frameType, v197, 0, 0LL);
  }
  gameObject = (__int64)this->fields.backClassIcon;
  if ( !gameObject )
    goto LABEL_544;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_544;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  if ( ((v303 | QuestRestriction) & 1) != 0 )
  {
    v199 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    UserServantLeaderEntity = v290;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v199, 0LL, 0LL) )
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
    v200 = LocalizationManager__Get((System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_QUEST_RESTRICTION_WARNING"*/, 0LL);
    goto LABEL_375;
  }
  UserServantLeaderEntity = v290;
  if ( !supportServantData->fields.isFriendInfo && ServantEntity__checkIsHeroineSvt(v301, 0LL) )
  {
    if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
    if ( TutorialFlag__Get_37688364(126, 0LL) )
    {
      v205 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v205, 0LL, 0LL) )
        goto LABEL_406;
      gameObject = (__int64)this->fields.sortieMaskSprite;
      if ( !gameObject )
        goto LABEL_544;
      gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_544;
      v206 = 1;
LABEL_405:
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v206, 0LL);
LABEL_406:
      SupportSelectItemDraw__ClearMessage(this, (const MethodInfo *)v11);
      goto LABEL_407;
    }
  }
  if ( !IsUniqueIndividualityRestriction && !UniqueSvtRestriction )
  {
    if ( IsDataLost )
    {
      v204 = 1;
      v203 = this;
      v202 = 0;
      v201 = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_376;
    }
    if ( TimesToRestart >= 1 )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v209 = LocalizationManager__Get((System_String_o *)StringLiteral_11514/*"SELECT_NO_SORTIE_TIMES_TO_RESTART"*/, 0LL);
      LODWORD(v308.fields.currentCryptoKey) = TimesToRestart;
      v213 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v308, v210, v211, v212);
      v200 = System_String__Format(v209, v213, 0LL);
LABEL_375:
      v201 = v200;
      v202 = 1;
      v203 = this;
      v204 = 0;
LABEL_376:
      SupportSelectItemDraw__SetMaskMessage(v203, v201, v202, v204, v198);
      goto LABEL_407;
    }
    v214 = (UnityEngine_Object_o *)this->fields.sortieMaskSprite;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v214, 0LL, 0LL) )
      goto LABEL_406;
    gameObject = (__int64)this->fields.sortieMaskSprite;
    if ( !gameObject )
      goto LABEL_544;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_544;
    v206 = 0;
    goto LABEL_405;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v207 = LocalizationManager__Get((System_String_o *)StringLiteral_6426/*"FOLLOWER_SELECT_QUEST_RESTRICTION_WARNING2"*/, 0LL);
  SupportSelectItemDraw__SetWarningMessage(this, v207, 1, v208);
LABEL_407:
  friendPointBonus = (UnityEngine_Object_o *)this->fields.friendPointBonus;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(friendPointBonus, 0LL, 0LL) )
  {
    v216 = (UnityEngine_Object_o *)this->fields.friendPointBonusBase;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v216, 0LL, 0LL) )
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
  v32 = 0;
  v52 = v91 != 0;
  if ( !v296 )
    goto LABEL_465;
  v22 = v292;
  if ( (gameObject & 1) == 0 )
    goto LABEL_437;
  max_length = v296->max_length;
  if ( max_length < 1 )
  {
LABEL_436:
    v32 = 0;
LABEL_437:
    if ( v22 )
      goto LABEL_438;
    goto LABEL_466;
  }
  v219 = supportServantData;
  v220 = 0LL;
  eventId = 0;
  value = 0;
  m_Items = v296->m_Items;
  do
  {
    if ( (unsigned int)v220 >= max_length )
      goto LABEL_545;
    v224 = m_Items[v220];
    if ( !v224 )
      goto LABEL_544;
    gameObject = System_Array__IndexOf_int_(
                   v224->fields.targetIds,
                   svtId,
                   (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
    max_length = v296->max_length;
    if ( (unsigned int)v220 >= max_length )
      goto LABEL_545;
    v225 = m_Items[v220];
    if ( !v225 )
      goto LABEL_544;
    targetIds = v225->fields.targetIds;
    if ( targetIds )
      v227 = targetIds->max_length == 0;
    else
      v227 = 1;
    if ( (v227 || (int)gameObject >= 0) && value < v225->fields.value )
    {
      eventId = v225->fields.eventId;
      value = v225->fields.value;
    }
    ++v220;
  }
  while ( (int)v220 < max_length );
  supportServantData = v219;
  if ( value < 1 )
  {
    v22 = v292;
    v51 = (System_Object_array *)v299;
    goto LABEL_436;
  }
  v228 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  v229 = v228;
  if ( v299 )
    System_Collections_Generic_List_object____ctor_55562536(
      v228,
      (System_Collections_Generic_IEnumerable_T__o *)v299,
      (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor___76030568);
  else
    System_Collections_Generic_List_object____ctor(
      v228,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  v238 = (EventMargeItemUpValInfo_o *)sub_1B887FC(EventMargeItemUpValInfo_TypeInfo);
  EventMargeItemUpValInfo___ctor_38890152(v238, eventId, value, 0LL);
  if ( !v229 )
    goto LABEL_544;
  v241 = v229->fields._items;
  v242 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
  ++v229->fields._version;
  if ( !v241 )
    goto LABEL_544;
  v243 = v229->fields._size;
  if ( (unsigned int)v243 >= v241->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v229,
      (Il2CppObject *)v238,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
  }
  else
  {
    v244 = &v241->obj.klass + v243;
    v229->fields._size = v243 + 1;
    v244[4] = (Il2CppClass *)v238;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v244 + 4), (int32_t)v238, v239, v240);
  }
  v51 = System_Collections_Generic_List_object___ToArray(
          v229,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__ToArray__);
  v32 = 0;
LABEL_465:
  v22 = v292;
  if ( !v292 )
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
  v230 = (UISprite_o *)this->fields.equipSprite;
  v232 = v22[5].klass;
  v231 = v22[5].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v320.fields.currentCryptoKey = v232;
  *(_QWORD *)&v320.fields.fakeValue = v231;
  v233 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v320, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEquipFace(v230, v233, 0LL);
  v234 = (UnityEngine_Object_o *)this->fields.equipLimitCountSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v234, 0LL, 0LL) )
  {
    v236 = v22[6].klass;
    v235 = v22[6].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v321.fields.currentCryptoKey = v236;
    *(_QWORD *)&v321.fields.fakeValue = v235;
    gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v321, 0LL);
    if ( this->fields.equipLimitCountSprite )
    {
      v237 = gameObject;
      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                              (UnityEngine_Component_o *)this->fields.equipLimitCountSprite,
                              0LL);
      if ( v237 >= 4 )
      {
        if ( !v293 )
          goto LABEL_544;
        v11 = SLODWORD(v293[5].monitor) >= v237;
      }
      else
      {
        v11 = 0LL;
      }
      if ( gameObject )
        goto LABEL_493;
    }
    goto LABEL_544;
  }
LABEL_494:
  v253 = (UnityEngine_Object_o *)this->fields.eventUpValIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v253, 0LL, 0LL) )
  {
    if ( supportServantData->fields.isFriendInfo )
    {
      if ( (v32 & 1) == 0 )
      {
        v254 = UserServantLeaderEntity->fields.servantLeaderInfo;
        if ( v254 )
        {
          v256 = *(_QWORD *)&v254->fields.svtId.fields.currentCryptoKey;
          v255 = *(_QWORD *)&v254->fields.svtId.fields.fakeValue;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          *(_QWORD *)&v323.fields.currentCryptoKey = v256;
          *(_QWORD *)&v323.fields.fakeValue = v255;
          gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v323, 0LL);
          if ( !UserServantLeaderEntity->fields.servantLeaderInfo )
            goto LABEL_544;
          v257 = gameObject;
          v258 = ServantLeaderInfo__getRarity(UserServantLeaderEntity->fields.servantLeaderInfo, 0LL);
LABEL_515:
          v264 = v258;
          goto LABEL_517;
        }
      }
    }
    else if ( (v32 & 1) == 0 )
    {
      userServantEntity = UserServantLeaderEntity->fields.userServantEntity;
      if ( userServantEntity )
      {
        v263 = *(_QWORD *)&userServantEntity->fields.svtId.fields.currentCryptoKey;
        v262 = *(_QWORD *)&userServantEntity->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v324.fields.currentCryptoKey = v263;
        *(_QWORD *)&v324.fields.fakeValue = v262;
        gameObject = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v324, 0LL);
        if ( !UserServantLeaderEntity->fields.userServantEntity )
          goto LABEL_544;
        v257 = gameObject;
        v258 = UserServantEntity__getRarity(UserServantLeaderEntity->fields.userServantEntity, 0LL);
        goto LABEL_515;
      }
    }
    v264 = -1;
    v257 = -1;
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
      (EventMargeItemUpValInfo_array *)v51,
      v257,
      v264,
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
      v260 = 0;
      goto LABEL_526;
    }
    goto LABEL_527;
  }
  v259 = (UnityEngine_Object_o *)this->fields.bounusIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v259, 0LL, 0LL) )
  {
    gameObject = (__int64)this->fields.bounusIcon;
    if ( !gameObject )
      goto LABEL_544;
    v260 = v52;
LABEL_526:
    ShiningIconComponent__Set_38233872((ShiningIconComponent_o *)gameObject, v260, 0LL);
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
  UnityEngine_Object_o *restrictionMaskSprite; // x23
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0
  UISprite_o *v12; // x22
  UIWidget_o *v13; // x21
  struct SupportSelectItemDraw_StaticFields *static_fields; // x9
  float *p_z; // x8
  float *p_y; // x10
  struct UnityEngine_Vector3_o *p_DATA_LOST_MASK_POSITION; // x9
  float v18; // s0
  float v19; // s8
  UnityEngine_Transform_o *v20; // x20
  float restrictionMaskMessageWidth; // s0
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  UnityEngine_Object_o *restrictionWarningBase; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57AF7 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SupportSelectItemDraw_TypeInfo);
    sub_1B885B0(&StringLiteral_20310/*"img_frames_mask05"*/);
    sub_1B885B0(&StringLiteral_18476/*"datalost_party_edit"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57AF7 = 1;
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
    v12 = this->fields.restrictionMaskSprite;
    if ( isDataLost )
    {
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__SetPartyOrganizationImage(v12, (System_String_o *)StringLiteral_18476/*"datalost_party_edit"*/, 0LL);
      v13 = (UIWidget_o *)this->fields.restrictionMaskSprite;
      gameObject = (UnityEngine_Component_o *)SupportSelectItemDraw_TypeInfo;
      if ( !SupportSelectItemDraw_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SupportSelectItemDraw_TypeInfo);
      if ( !v13 )
        goto LABEL_48;
      UIWidget__set_width(v13, SupportSelectItemDraw_TypeInfo->static_fields->DATA_LOST_MASK_WIDTH, 0LL);
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
      if ( !v12 )
        goto LABEL_48;
      UISprite__set_atlas(this->fields.restrictionMaskSprite, this->fields.maskSpriteDefaultAtlas, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskSprite;
      if ( !gameObject )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)gameObject, (System_String_o *)StringLiteral_20310/*"img_frames_mask05"*/, 0LL);
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
    v28.fields.z = *p_z;
    v28.fields.y = *p_y;
    v28.fields.x = p_DATA_LOST_MASK_POSITION->fields.x;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
    if ( !gameObject )
      goto LABEL_48;
    if ( isScale )
    {
      LODWORD(v18) = *(_QWORD *)&UILabel__get_printedSize((UILabel_o *)gameObject, 0LL);
      gameObject = (UnityEngine_Component_o *)this->fields.restrictionMaskMessageText;
      if ( !gameObject )
        goto LABEL_48;
      v19 = v18;
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v20 = (UnityEngine_Transform_o *)gameObject;
      restrictionMaskMessageWidth = (float)this->fields.restrictionMaskMessageWidth;
      if ( v19 <= restrictionMaskMessageWidth )
      {
        if ( !byte_4A55CE6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        v26 = UnityEngine_Vector3_TypeInfo->static_fields;
        x = v26->oneVector.fields.x;
        y = v26->oneVector.fields.y;
        z = v26->oneVector.fields.z;
      }
      else
      {
        x = restrictionMaskMessageWidth / v19;
        z = 1.0;
        y = 1.0;
      }
      if ( !v20 )
        goto LABEL_48;
    }
    else
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(gameObject, 0LL);
      v20 = (UnityEngine_Transform_o *)gameObject;
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v20 )
        goto LABEL_48;
      v25 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v25->oneVector.fields.y;
      z = v25->oneVector.fields.z;
      x = v25->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&x, 0LL);
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
    sub_1B8880C(gameObject, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectItemDraw__SetWarningMessage(
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
  float x; // s0
  float z; // s2
  float y; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A57AF8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A57AF8 = 1;
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
    v12 = (UnityEngine_Transform_o *)gameObject;
    if ( isScale )
    {
      restrictionWarningMessageWidth = (float)this->fields.restrictionWarningMessageWidth;
      if ( printedSize.fields.x <= restrictionWarningMessageWidth )
      {
        if ( !byte_4A55CE6 )
        {
          gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
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
      if ( !byte_4A55CE6 )
      {
        gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      if ( !v12 )
        goto LABEL_33;
      v17 = UnityEngine_Vector3_TypeInfo->static_fields;
      y = v17->oneVector.fields.y;
      z = v17->oneVector.fields.z;
      x = v17->oneVector.fields.x;
    }
    UnityEngine_Transform__set_localScale(v12, *(UnityEngine_Vector3_o *)&x, 0LL);
    gameObject = (UnityEngine_Component_o *)this->fields.restrictionWarningBase;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)gameObject,
                                                0LL);
      if ( gameObject )
      {
        v19.fields.z = this->fields.restrictionWarningCenter.fields.z + 0.0;
        v19.fields.y = (float)(printedSize.fields.y * 0.5) + this->fields.restrictionWarningCenter.fields.y;
        v19.fields.x = this->fields.restrictionWarningCenter.fields.x + 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v19, 0LL);
        return;
      }
    }
LABEL_33:
    sub_1B8880C(gameObject, v8);
  }
}