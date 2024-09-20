void __fastcall BattleSkillSelectBtnBaseComponent___ctor(
        BattleSkillSelectBtnBaseComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleSkillSelectBtnBaseComponent__Awake(
        BattleSkillSelectBtnBaseComponent_o *this,
        const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent_o *v2; // x19
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x8
  int v4; // w10

  v2 = this;
  if ( (byte_4A5E21C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_1B885B0(&StringLiteral_445/*"#808080"*/);
    byte_4A5E21C = 1;
  }
  btnTop = v2->fields.btnTop;
  if ( !btnTop )
    sub_1B8880C(this, method);
  v4 = -1;
  do
    ++v4;
  while ( v4 < btnTop->fields._size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_445/*"#808080"*/,
          &v2->fields.disableColor,
          0LL) )
    v2->fields.disableColor = (struct UnityEngine_Color_o)xmmword_BB4110;
}


void __fastcall BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleData; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v14; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v15; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x21
  System_Func_object__object__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  System_Object_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *btnTop; // x0
  __int64 v24; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v26; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x8
  __int64 v28; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v30; // x22
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  const MethodInfo *v32; // x4

  if ( (byte_4A5E21D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5E21D = 1;
  }
  this->fields.battleData = data;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleData,
    (int32_t)data,
    (int32_t)data,
    (int32_t)method);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
  {
    v10 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v11 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v11 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v11 = v10[7];
    }
    v12 = *(_QWORD *)(v11 + 16);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1BDA48C(v12);
    if ( !*(_DWORD *)(v12 + 224) )
      j_il2cpp_runtime_class_init_0(v12);
    v13 = *(_QWORD *)(v10[7] + 16LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1BDA48C(v13);
    v14 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v13 + 184);
    v15 = *v14;
    this->fields.selBtnArray = *v14;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selBtnArray, (int32_t)v15, v8, v9);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
    {
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v18 = (System_Func_object__object__o *)sub_1B887FC(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_object__object____ctor(
        v18,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__,
        0LL);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v17,
                                                                   (System_Func_TSource__TResult__o *)v18,
                                                                   (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v20 = System_Linq_Enumerable__ToArray_object_(
              v19,
              (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selBtnArray, (int32_t)v20, v21, v22);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    if ( ((unsigned __int8)btnTop & 1) != 0 )
    {
      if ( !*p_selBtnArray
        || (btnTop = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_SetBtnLayout.method)(
                                                                    this,
                                                                    LODWORD((*p_selBtnArray)[1].monitor),
                                                                    this->klass->vtable._5_SetBtnSprite.methodPtr),
            (selBtnArray = this->fields.selBtnArray) == 0LL) )
      {
LABEL_32:
        sub_1B8880C(btnTop, v24);
      }
      v26 = 0LL;
      while ( (__int64)v26 < (int)selBtnArray->max_length )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v26,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0LL);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              v27 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v26 >= LODWORD(v27[1].monitor) )
                  sub_1B88814(btnTop, v24);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v28 = *((_QWORD *)&v27[2].klass + v26);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v26,
                           (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, void *))this->klass->vtable._5_SetBtnSprite.method)(
                    this,
                    v28,
                    Item,
                    this->klass[1]._1.image);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v26,
                                                                            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0LL);
                      if ( this->fields.btnTop )
                      {
                        v30 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v26,
                                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v26,
                            v30,
                            (UILabel_o *)ComponentInChildren_object__48719376,
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


bool __fastcall BattleSkillSelectBtnBaseComponent__IsCondCheck(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_String_o *condStr,
        const MethodInfo *method)
{
  UnityEngine_Object_o *battleData; // x21
  System_String_array *v6; // x0
  __int64 v7; // x1
  System_Object_array *v9; // x20
  System_String_o *v10; // x21
  struct BattleData_o *v11; // x8
  System_String_o *v12; // x19
  int32_t totalCriticalStars; // w20
  bool v14; // w0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5E220 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_string___);
    sub_1B885B0(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_12256/*"STAR_HIGHER"*/);
    sub_1B885B0(&StringLiteral_9251/*"NONE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E220 = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (System_String_array *)UnityEngine_Object__op_Equality(battleData, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
    return 0;
  if ( !condStr )
    goto LABEL_19;
  v6 = System_String__Split(condStr, 0x3Au, 0, 0LL);
  if ( !v6 )
    goto LABEL_19;
  v9 = (System_Object_array *)v6;
  if ( !v6->max_length )
    sub_1B88814(v6, v7);
  v10 = v6->m_Items[0];
  if ( System_String__op_Equality(v10, (System_String_o *)StringLiteral_9251/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v10, (System_String_o *)StringLiteral_12256/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v6 = (System_String_array *)BasicHelper__IndexValue_object_(
                                v9,
                                1,
                                (Il2CppObject *)StringLiteral_1/*""*/,
                                (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_string___);
  v11 = this->fields.battleData;
  if ( !v11 )
LABEL_19:
    sub_1B8880C(v6, v7);
  v12 = (System_String_o *)v6;
  totalCriticalStars = v11->fields.totalCriticalStars;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  result = 0;
  v14 = System_Int32__TryParse(v12, &result, 0LL);
  return v14 && result <= totalCriticalStars;
}


bool __fastcall BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0

  if ( (byte_4A5E21F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    byte_4A5E21F = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
  if ( v5 )
    LOBYTE(v5) = LOBYTE(v5[1].monitor) != 0;
  return (char)v5;
}


void __fastcall BattleSkillSelectBtnBaseComponent__SetBtnLayout(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t btnNum,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleSkillSelectBtnBaseComponent__SetBtnSprite(
        BattleSkillSelectBtnBaseComponent_o *this,
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *selBtnInfo,
        UISprite_o *btn,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleSkillSelectBtnBaseComponent__UpdateButton(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        UnityEngine_GameObject_o *obj,
        UILabel_o *label,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x21
  _BOOL4 v12; // w23
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  System_String_o *klass; // x8
  System_String_o *v18; // x1
  float v19; // s3
  float v20; // s2
  float v21; // s1
  float v22; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5E21E & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E21E = 1;
  }
  component = 0LL;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v9 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.selBtnArray,
           index,
           0LL,
           (const MethodInfo_2E6E754 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v11 = v9;
    if ( v9 )
    {
      v12 = LOBYTE(v9[1].monitor) == 0;
      if ( !obj )
        goto LABEL_26;
    }
    else
    {
      v12 = 1;
      if ( !obj )
        goto LABEL_26;
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &component,
           (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
    {
      v9 = component;
      a = 1.0;
      b = 1.0;
      g = 1.0;
      r = 1.0;
      if ( v12 )
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
      }
      if ( !component )
LABEL_26:
        sub_1B8880C(v9, v10);
      UIButtonColor__set_defaultColor((UIButtonColor_o *)component, *(UnityEngine_Color_o *)&r, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)label, 0LL, 0LL);
    if ( ((unsigned __int8)v9 & 1) != 0 )
    {
      if ( v11 )
      {
        klass = (System_String_o *)v11[1].klass;
        if ( !label )
          goto LABEL_26;
      }
      else
      {
        klass = 0LL;
        if ( !label )
          goto LABEL_26;
      }
      if ( klass )
        v18 = klass;
      else
        v18 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v18, 0LL);
      v19 = 1.0;
      v20 = 1.0;
      v21 = 1.0;
      v22 = 1.0;
      if ( v12 )
      {
        v22 = this->fields.disableColor.fields.r;
        v21 = this->fields.disableColor.fields.g;
        v20 = this->fields.disableColor.fields.b;
        v19 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v22, 0LL);
    }
  }
}


BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectBtnBaseComponent___InitBtn_b__8_0(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  System_Func_object__bool__o *v5; // x21
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *v6; // x20
  const MethodInfo *v7; // x3

  if ( (byte_4A5E221 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__);
    sub_1B885B0(&System_Func_string__bool__TypeInfo);
    sub_1B885B0(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
    byte_4A5E221 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__,
    0LL);
  v6 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_1B887FC(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v6, dict, (System_Func_string__bool__o *)v5, v7);
  return v6;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  int32_t v7; // w1
  Il2CppObject *Value_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x21
  bool v12; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4A5E222 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_GetValue_List_object____);
    sub_1B885B0(&Method_BasicHelper_GetValue_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_string___);
    sub_1B885B0(&StringLiteral_18203/*"conds"*/);
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E222 = 1;
  }
  v7 = (int)StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, v7, (int32_t)funcCondCheck, (int32_t)method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    Value_object = BasicHelper__GetValue_object_(
                     btnDict,
                     (System_String_o *)StringLiteral_21982/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Value_object, v9, v10);
    v11 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_18203/*"conds"*/,
            0LL,
            (const MethodInfo_2E6DC68 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v11, 0LL) )
    {
      v12 = 1;
    }
    else
    {
      v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v11,
                                                                   (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_string___);
      v12 = System_Linq_Enumerable__All_object_(
              v13,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v12;
  }
}


bool __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo__get_IsEnable(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnable_k__BackingField;
}


System_String_o *__fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo__get_Name(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo__set_IsEnable(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnable_k__BackingField = value;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo__set_Name(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._Name_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}