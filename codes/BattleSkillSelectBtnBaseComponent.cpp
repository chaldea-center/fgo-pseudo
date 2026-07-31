void BattleSkillSelectBtnBaseComponent___ctor(BattleSkillSelectBtnBaseComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void BattleSkillSelectBtnBaseComponent__Awake(BattleSkillSelectBtnBaseComponent_o *this, const MethodInfo *method)
{
  BattleSkillSelectBtnBaseComponent_o *v2; // x19

  v2 = this;
  if ( (byte_593C143 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_21FFC50(&StringLiteral_440/*"#808080"*/);
    byte_593C143 = 1;
  }
  if ( !v2->fields.btnTop )
    sub_21FFECC(this, method);
  if ( !UnityEngine_ColorUtility__TryParseHtmlString((System_String_o *)StringLiteral_440/*"#808080"*/, &v2->fields.disableColor, 0) )
    v2->fields.disableColor = (struct UnityEngine_Color_o)xmmword_E93FD0;
}


void BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v11; // x1
  UnityEngine_Object_o *battleData; // x20
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  long double v20; // q0
  _QWORD *v21; // x20
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v25; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v26; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  System_Func_object__object__o *v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Object_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_object__o *btnTop; // x0
  __int64 v39; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v41; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x8
  __int64 v43; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v45; // x22
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  const MethodInfo *v47; // x4

  if ( (byte_593C144 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__9_0__);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C144 = 1;
  }
  this->fields.battleData = data;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.battleData,
    (int32_t)data,
    (System_String_o *)data,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
  if ( !UnityEngine_Object__op_Equality(battleData, 0, 0) )
  {
    v21 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v22 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v22 )
    {
      sub_2237B54(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_2237AF8(v20);
    if ( !*(_DWORD *)(v23 + 228) )
      *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(v23, v13);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
      v24 = sub_2237AF8(v20);
    v25 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v24 + 184);
    v26 = *v25;
    this->fields.selBtnArray = *v25;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selBtnArray,
      (int32_t)v26,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0) )
    {
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v29 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_object__object____ctor(
        v29,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__9_0__,
        0);
      v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v28,
                                                                   (System_Func_TSource__TResult__o *)v29,
                                                                   (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v31 = System_Linq_Enumerable__ToArray_object_(
              v30,
              (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v31;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.selBtnArray,
        (int32_t)v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
        sub_21FFECC(btnTop, v39);
      }
      v41 = 0;
      while ( (__int64)v41 < SLODWORD(selBtnArray->max_length) )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v41,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0);
              v42 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v41 >= LODWORD(v42[1].monitor) )
                  sub_21FFED4(btnTop);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v43 = *((_QWORD *)&v42[2].klass + v41);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v41,
                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, const MethodInfo *))this->klass->vtable._5_SetBtnSprite.methodPtr)(
                    this,
                    v43,
                    Item,
                    this->klass->vtable._5_SetBtnSprite.method);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v41,
                                                                            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0);
                      if ( this->fields.btnTop )
                      {
                        v45 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v41,
                                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v41,
                            v45,
                            (UILabel_o *)ComponentInChildren_object__58644924,
                            v47);
                          selBtnArray = this->fields.selBtnArray;
                          ++v41;
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
  __int64 v5; // x1
  UnityEngine_Object_o *battleData; // x21
  System_String_array *v7; // x0
  __int64 v8; // x1
  System_Object_array *v10; // x20
  System_String_o *v11; // x21
  struct BattleData_o *v12; // x8
  System_String_o *v13; // x19
  int32_t totalCriticalStars; // w20
  bool v15; // w0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593C147 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_string___);
    sub_21FFC50(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12842/*"STAR_HIGHER"*/);
    sub_21FFC50(&StringLiteral_9648/*"NONE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C147 = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  v7 = (System_String_array *)UnityEngine_Object__op_Equality(battleData, 0, 0);
  if ( ((unsigned __int8)v7 & 1) != 0 )
    return 0;
  if ( !condStr )
    goto LABEL_19;
  v7 = System_String__Split(condStr, 0x3Au, 0, 0);
  if ( !v7 )
    goto LABEL_19;
  v10 = (System_Object_array *)v7;
  if ( !LODWORD(v7->max_length) )
    sub_21FFED4(v7);
  v11 = v7->m_Items[0];
  if ( System_String__op_Equality(v11, (System_String_o *)StringLiteral_9648/*"NONE"*/, 0) )
    return 1;
  if ( !System_String__op_Equality(v11, (System_String_o *)StringLiteral_12842/*"STAR_HIGHER"*/, 0) )
    return 0;
  v7 = (System_String_array *)BasicHelper__IndexValue_object_(
                                v10,
                                1,
                                (Il2CppObject *)StringLiteral_1/*""*/,
                                (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_string___);
  v12 = this->fields.battleData;
  if ( !v12 )
LABEL_19:
    sub_21FFECC(v7, v8);
  v13 = (System_String_o *)v7;
  totalCriticalStars = v12->fields.totalCriticalStars;
  if ( !*(&BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo, v8);
  result = 0;
  v15 = System_Int32__TryParse(v13, &result, 0);
  return v15 && result <= totalCriticalStars;
}


bool BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0

  if ( (byte_593C146 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    byte_593C146 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0,
         (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
  System_Collections_Generic_IEnumerable_TSource__o *selBtnArray; // x0
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  Il2CppObject *v12; // x21
  _BOOL4 v13; // w23
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0 OVERLAPPED
  System_String_o *klass; // x8
  System_String_o *v19; // x1
  float v20; // s3
  float v21; // s2
  float v22; // s1
  float v23; // s0 OVERLAPPED
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593C145 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C145 = 1;
  }
  selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray;
  component = 0;
  if ( System_Linq_Enumerable__Any_object_(
         selBtnArray,
         (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v10 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.selBtnArray,
            index,
            0,
            (const MethodInfo_37E18F8 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v12 = v10;
    if ( v10 )
    {
      v13 = LOBYTE(v10[1].monitor) == 0;
      if ( !obj )
        goto LABEL_26;
    }
    else
    {
      v13 = 1;
      if ( !obj )
        goto LABEL_26;
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &component,
           (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
    {
      a = 1.0;
      b = 1.0;
      v10 = component;
      g = 1.0;
      r = 1.0;
      if ( v13 )
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
      }
      if ( !component )
LABEL_26:
        sub_21FFECC(v10, v11);
      UIButtonColor__set_defaultColor((UIButtonColor_o *)component, *(UnityEngine_Color_o *)&r, 0);
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
    v10 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)label, 0, 0);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      if ( v12 )
      {
        klass = (System_String_o *)v12[1].klass;
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
        v19 = klass;
      else
        v19 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v19, 0);
      v20 = 1.0;
      v21 = 1.0;
      v22 = 1.0;
      v23 = 1.0;
      if ( v13 )
      {
        v23 = this->fields.disableColor.fields.r;
        v22 = this->fields.disableColor.fields.g;
        v21 = this->fields.disableColor.fields.b;
        v20 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v23, 0);
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

  if ( (byte_593C148 & 1) == 0 )
  {
    sub_21FFC50(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
    byte_593C148 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(v5, (Il2CppObject *)this, Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__, 0);
  v6 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_21FFEBC(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v6, dict, (System_Func_string__bool__o *)v5, v7);
  return v6;
}


void BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v11; // w1
  Il2CppObject *Value_object; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  bool v27; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_593C149 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_GetValue_List_object____);
    sub_21FFC50(&Method_BasicHelper_GetValue_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_string___);
    sub_21FFC50(&StringLiteral_18985/*"conds"*/);
    sub_21FFC50(&StringLiteral_21225/*"image"*/);
    sub_21FFC50(&StringLiteral_23220/*"name"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C149 = 1;
  }
  v11 = (int)StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    v11,
    (System_String_o *)funcCondCheck,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( btnDict )
  {
    Value_object = BasicHelper__GetValue_object_(
                     btnDict,
                     (System_String_o *)StringLiteral_23220/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)Value_object, v13, v14, v15, v16, v17, v18);
    v19 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_18985/*"conds"*/,
            0,
            (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_List_object____);
    v20 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_21225/*"image"*/,
            (Il2CppObject *)StringLiteral_1/*""*/,
            (const MethodInfo_37E0CE0 *)Method_BasicHelper_GetValue_string___);
    this->fields._ImageName_k__BackingField = (struct System_String_o *)v20;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._ImageName_k__BackingField,
      (int32_t)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0) )
    {
      v27 = 1;
    }
    else
    {
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v19,
                                                                   (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_string___);
      v27 = System_Linq_Enumerable__All_object_(
              v28,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v27;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ImageName_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ImageName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Name_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}