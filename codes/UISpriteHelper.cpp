bool UISpriteHelper__SetSprite(
        UISprite_o *self,
        System_String_o *spriteName,
        UIAtlas_o *atlas,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UISpriteData_o *Sprite; // x0
  __int64 v9; // x1

  if ( (byte_593A112 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A112 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0) )
    goto LABEL_9;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  Sprite = (UISpriteData_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)atlas, 0, 0);
  if ( ((unsigned __int8)Sprite & 1) != 0 )
  {
LABEL_9:
    LOBYTE(Sprite) = 0;
  }
  else
  {
    if ( !atlas )
      goto LABEL_15;
    Sprite = UIAtlas__GetSprite(atlas, spriteName, 0);
    if ( !Sprite )
      return (char)Sprite;
    if ( !self )
LABEL_15:
      sub_21FFECC(Sprite, v9);
    UISprite__set_atlas(self, atlas, 0);
    UISprite__set_spriteName(self, spriteName, 0);
    LOBYTE(Sprite) = 1;
  }
  return (char)Sprite;
}


void UISpriteHelper__SetSpriteName(UISprite_o *self, System_String_o *spriteName, const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1

  if ( (byte_593A114 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A114 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( !v5 )
  {
    if ( !self )
      sub_21FFECC(v5, v6);
    UISprite__set_spriteName(self, spriteName, 0);
  }
}


bool UISpriteHelper__SetSprite_51105480(
        UISprite_o *self,
        System_String_o *spriteName,
        System_Collections_Generic_IEnumerable_UIAtlas__o *atlasList,
        UIAtlas_o *defaultAtlas,
        System_String_o *defaultSpriteName,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_UIAtlas__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  char v23; // w23
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  UIAtlas_o *v28; // x0
  const MethodInfo *v29; // x3
  int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v36; // [xsp+18h] [xbp-48h]

  if ( (byte_593A113 & 1) == 0 )
  {
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_UIAtlas__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_UIAtlas__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593A113 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spriteName);
  v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)self, 0, 0);
  if ( (v11 & 1) != 0 )
    goto LABEL_40;
  if ( !atlasList )
    goto LABEL_38;
  klass = atlasList->klass;
  v14 = *(unsigned __int16 *)&atlasList->klass->_2.rank;
  if ( *(_WORD *)&atlasList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_UIAtlas__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_UIAtlas__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_11;
    }
    v16 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_11:
    v16 = sub_2237E2C(atlasList, System_Collections_Generic_IEnumerable_UIAtlas__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_UIAtlas__o *, _QWORD))v16)(
          atlasList,
          *(_QWORD *)(v16 + 8));
  v36 = v17;
  while ( 1 )
  {
    if ( !v36 )
      sub_21FFECC(v17, v18);
    v19 = *(_QWORD *)v36;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_19;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_19:
      v22 = sub_2237E2C(v36, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v36, *(_QWORD *)(v22 + 8));
    if ( (v23 & 1) == 0 )
      break;
    v24 = *(_QWORD *)v36;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_UIAtlas__c **)v26 - 1) != System_Collections_Generic_IEnumerator_UIAtlas__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_26:
      v27 = sub_2237E2C(v36, System_Collections_Generic_IEnumerator_UIAtlas__TypeInfo, 0);
    }
    v28 = (UIAtlas_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v36, *(_QWORD *)(v27 + 8));
    v17 = UISpriteHelper__SetSprite(self, spriteName, v28, v29);
    if ( (v17 & 1) != 0 )
    {
      v30 = 6;
      goto LABEL_31;
    }
  }
  v23 = 0;
  v30 = 7;
LABEL_31:
  v31 = *(_QWORD *)v36;
  v32 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_35;
    }
    v34 = v31 + 16LL * *v33 + 312;
  }
  else
  {
LABEL_35:
    v34 = sub_2237E2C(v36, System_IDisposable_TypeInfo, 0);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v36, *(_QWORD *)(v34 + 8));
  if ( v30 == 7 )
  {
LABEL_38:
    if ( !self )
      sub_21FFECC(v11, v12);
    UISprite__set_atlas(self, defaultAtlas, 0);
    UISprite__set_spriteName(self, defaultSpriteName, 0);
LABEL_40:
    v23 = 0;
  }
  return v23 & 1;
}