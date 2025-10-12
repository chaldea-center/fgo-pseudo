void BattleSkillSelectBtnBaseComponent___ctor(BattleSkillSelectBtnBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleSkillSelectBtnBaseComponent__Awake(BattleSkillSelectBtnBaseComponent_o *this, const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent_o *v2; // x19
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x8
  int v4; // w10

  v2 = this;
  if ( (byte_4C3B0E1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_1C32C20(&StringLiteral_415/*"#808080"*/);
    byte_4C3B0E1 = 1;
  }
  btnTop = v2->fields.btnTop;
  if ( !btnTop )
    sub_1C32E7C(this);
  v4 = -1;
  do
    ++v4;
  while ( v4 < btnTop->fields._size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_415/*"#808080"*/, &v2->fields.disableColor, 0) )
    v2->fields.disableColor = (struct UnityEngine_Color_o)xmmword_C0C4A0;
}


void BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleData; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  long double inited; // q0
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  __int64 v14; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v15; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x21
  System_Func_object__object__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_object__o *btnTop; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x8
  __int64 v28; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v30; // x22
  Il2CppObject *ComponentInChildren_object__51199524; // x0
  const MethodInfo *v32; // x4

  if ( (byte_4C3B0E2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__9_0__);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3B0E2 = 1;
  }
  this->fields.battleData = data;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.battleData, (int32_t)data, (int32_t)data, method);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleData, 0, 0) )
  {
    v11 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v12 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v12 )
    {
      sub_1C83390(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v12 = v11[7];
    }
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v13 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v13);
    v14 = *(_QWORD *)(v11[7] + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C83334(inited);
    v15 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v14 + 184);
    v16 = *v15;
    this->fields.selBtnArray = *v15;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selBtnArray, (int32_t)v16, v8, v9);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0) )
    {
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v19 = (System_Func_object__object__o *)sub_1C32E6C(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_object__object____ctor(
        v19,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__9_0__,
        0);
      v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v18,
                                                                   (System_Func_TSource__TResult__o *)v19,
                                                                   (const MethodInfo_3113ABC *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v21 = System_Linq_Enumerable__ToArray_object_(
              v20,
              (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v21;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selBtnArray, (int32_t)v21, v22, v23);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    if ( ((unsigned __int8)btnTop & 1) != 0 )
    {
      if ( !*p_selBtnArray
        || (btnTop = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, _QWORD, const MethodInfo *))this->klass->vtable._4_SetBtnLayout.methodPtr)(
                                                                    this,
                                                                    LODWORD((*p_selBtnArray)[1].monitor),
                                                                    this->klass->vtable._4_SetBtnLayout.method),
            (selBtnArray = this->fields.selBtnArray) == 0) )
      {
LABEL_32:
        sub_1C32E7C(btnTop);
      }
      v26 = 0;
      while ( (__int64)v26 < SLODWORD(selBtnArray->max_length) )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v26,
                                                                  (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
              v27 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v26 >= LODWORD(v27[1].monitor) )
                  sub_1C32E84(btnTop);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v28 = *((_QWORD *)&v27[2].klass + v26);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v26,
                           (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, const MethodInfo *))this->klass->vtable._5_SetBtnSprite.methodPtr)(
                    this,
                    v28,
                    Item,
                    this->klass->vtable._5_SetBtnSprite.method);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v26,
                                                                            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0);
                      if ( this->fields.btnTop )
                      {
                        v30 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v26,
                                                                                (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__51199524 = UnityEngine_Component__GetComponentInChildren_object__51199524(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_30D3E24 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v26,
                            v30,
                            (UILabel_o *)ComponentInChildren_object__51199524,
                            v32);
                          selBtnArray = this->fields.selBtnArray;
                          ++v26;
                          if ( selBtnArray )
                            continue;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_32;
      }
    }
  }
}


bool BattleSkillSelectBtnBaseComponent__IsCondCheck(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_String_o *condStr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleData; // x21
  System_String_array *v6; // x0
  System_Object_array *v8; // x20
  System_String_o *v9; // x21
  struct BattleData_o *v10; // x8
  System_String_o *v11; // x19
  int32_t totalCriticalStars; // w20
  bool v13; // w0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C3B0E5 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_string___);
    sub_1C32C20(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_12346/*"STAR_HIGHER"*/);
    sub_1C32C20(&StringLiteral_9275/*"NONE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B0E5 = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_array *)UnityEngine_Object__op_Equality(battleData, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0;
  if ( !condStr )
    goto LABEL_19;
  v6 = System_String__Split(condStr, 0x3Au, 0, 0);
  if ( !v6 )
    goto LABEL_19;
  v8 = (System_Object_array *)v6;
  if ( !LODWORD(v6->max_length) )
    sub_1C32E84(v6);
  v9 = v6->m_Items[0];
  if ( System_String__op_Equality(v9, (System_String_o *)StringLiteral_9275/*"NONE"*/, 0) )
    return 1;
  if ( !System_String__op_Equality(v9, (System_String_o *)StringLiteral_12346/*"STAR_HIGHER"*/, 0) )
    return 0;
  v6 = (System_String_array *)BasicHelper__IndexValue_object_(
                                v8,
                                1,
                                (Il2CppObject *)StringLiteral_1/*""*/,
                                (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_string___);
  v10 = this->fields.battleData;
  if ( !v10 )
LABEL_19:
    sub_1C32E7C(v6);
  v11 = (System_String_o *)v6;
  totalCriticalStars = v10->fields.totalCriticalStars;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  result = 0;
  v13 = System_Int32__TryParse(v11, &result, 0);
  return v13 && result <= totalCriticalStars;
}


bool BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0

  if ( (byte_4C3B0E4 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    byte_4C3B0E4 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0,
         (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
  if ( v5 )
    LOBYTE(v5) = LOBYTE(v5[1].monitor) != 0;
  return (char)v5;
}


void BattleSkillSelectBtnBaseComponent__SetBtnLayout(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t btnNum,
        const MethodInfo *method)
{
  ;
}


void BattleSkillSelectBtnBaseComponent__SetBtnSprite(
        BattleSkillSelectBtnBaseComponent_o *this,
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *selBtnInfo,
        UISprite_o *btn,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void BattleSkillSelectBtnBaseComponent__UpdateButton(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        UnityEngine_GameObject_o *obj,
        UILabel_o *label,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  Il2CppObject *v10; // x21
  _BOOL4 v11; // w23
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  System_String_o *klass; // x8
  System_String_o *v17; // x1
  float v18; // s3
  float v19; // s2
  float v20; // s1
  float v21; // s0 OVERLAPPED
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B0E3 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C32C20(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B0E3 = 1;
  }
  component = 0;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v9 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.selBtnArray,
           index,
           0,
           (const MethodInfo_30CB990 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v10 = v9;
    if ( v9 )
    {
      v11 = LOBYTE(v9[1].monitor) == 0;
      if ( !obj )
        goto LABEL_26;
    }
    else
    {
      v11 = 1;
      if ( !obj )
        goto LABEL_26;
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &component,
           (const MethodInfo_3135C00 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
    {
      v9 = component;
      a = 1.0;
      b = 1.0;
      g = 1.0;
      r = 1.0;
      if ( v11 )
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
      }
      if ( !component )
LABEL_26:
        sub_1C32E7C(v9);
      UIButtonColor__set_defaultColor((UIButtonColor_o *)component, *(UnityEngine_Color_o *)&r, 0);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)label, 0, 0);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( v10 )
      {
        klass = (System_String_o *)v10[1].klass;
        if ( !label )
          goto LABEL_26;
      }
      else
      {
        klass = 0;
        if ( !label )
          goto LABEL_26;
      }
      if ( klass )
        v17 = klass;
      else
        v17 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v17, 0);
      v18 = 1.0;
      v19 = 1.0;
      v20 = 1.0;
      v21 = 1.0;
      if ( v11 )
      {
        v21 = this->fields.disableColor.fields.r;
        v20 = this->fields.disableColor.fields.g;
        v19 = this->fields.disableColor.fields.b;
        v18 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v21, 0);
    }
  }
}


BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *BattleSkillSelectBtnBaseComponent___InitBtn_b__9_0(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  System_Func_object__bool__o *v5; // x21
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4C3B0E6 & 1) == 0 )
  {
    sub_1C32C20(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__);
    sub_1C32C20(&System_Func_string__bool__TypeInfo);
    sub_1C32C20(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
    byte_4C3B0E6 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v5, (Il2CppObject *)this, Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__, 0);
  v6 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_1C32E6C(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v6, dict, (System_Func_string__bool__o *)v5, v7);
  return v6;
}


void BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  int32_t v7; // w1
  Il2CppObject *Value_object; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool v15; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4C3B0E7 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_GetValue_List_object____);
    sub_1C32C20(&Method_BasicHelper_GetValue_string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OfType_string___);
    sub_1C32C20(&StringLiteral_18208/*"conds"*/);
    sub_1C32C20(&StringLiteral_20282/*"image"*/);
    sub_1C32C20(&StringLiteral_22147/*"name"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B0E7 = 1;
  }
  v7 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, v7, (int32_t)funcCondCheck, method);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( btnDict )
  {
    Value_object = BasicHelper__GetValue_object_(
                     btnDict,
                     (System_String_o *)StringLiteral_22147/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)Value_object, v9, v10);
    v11 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_18208/*"conds"*/,
            0,
            (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_List_object____);
    v12 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_20282/*"image"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_30CAD64 *)Method_BasicHelper_GetValue_string___);
    this->fields._ImageName_k__BackingField = (struct System_String_o *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ImageName_k__BackingField, (int32_t)v12, v13, v14);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0) )
    {
      v15 = 1;
    }
    else
    {
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v11,
                                                                   (const MethodInfo_310C5CC *)Method_System_Linq_Enumerable_OfType_string___);
      v15 = System_Linq_Enumerable__All_object_(
              v16,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v15;
  }
}


System_String_o *BattleSkillSelectBtnBaseComponent_SelectBtnInfo__get_ImageName(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._ImageName_k__BackingField;
}


bool BattleSkillSelectBtnBaseComponent_SelectBtnInfo__get_IsEnable(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnable_k__BackingField;
}


System_String_o *BattleSkillSelectBtnBaseComponent_SelectBtnInfo__get_Name(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void BattleSkillSelectBtnBaseComponent_SelectBtnInfo__set_ImageName(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ImageName_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._ImageName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleSkillSelectBtnBaseComponent_SelectBtnInfo__set_IsEnable(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnable_k__BackingField = value;
}


void BattleSkillSelectBtnBaseComponent_SelectBtnInfo__set_Name(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._Name_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}