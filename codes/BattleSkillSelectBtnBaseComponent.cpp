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
  __int64 v3; // x1
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x8
  int v5; // w10

  v2 = this;
  if ( (byte_48E5756 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite__get_Count__, method);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_1B00CCC(&StringLiteral_442/*"#808080"*/, v3);
    byte_48E5756 = 1;
  }
  btnTop = v2->fields.btnTop;
  if ( !btnTop )
    sub_1B00F28(this, method);
  v5 = -1;
  do
    ++v5;
  while ( v5 < btnTop->fields._size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_442/*"#808080"*/,
          &v2->fields.disableColor,
          0LL) )
    v2->fields.disableColor = (struct UnityEngine_Color_o)xmmword_B70510;
}


void __fastcall BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *battleData; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v23; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v24; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x21
  System_Func_object__object__o *v27; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Object_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_object__o *btnTop; // x0
  __int64 v33; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v35; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x8
  __int64 v37; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v39; // x22
  Il2CppObject *ComponentInChildren_object__47552792; // x0
  const MethodInfo *v41; // x4

  if ( (byte_48E5757 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, btnList);
    sub_1B00CCC(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__, v7);
    sub_1B00CCC(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v9);
    sub_1B00CCC(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v10);
    sub_1B00CCC(
      &Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___,
      v11);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v12);
    sub_1B00CCC(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_UISprite__get_Item__, v14);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v15);
    byte_48E5757 = 1;
  }
  this->fields.battleData = data;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.battleData,
    (int32_t)data,
    (int32_t)data,
    (int32_t)method);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
  {
    v19 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v20 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v20 )
    {
      sub_1B52C04(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1B52BA8(v21);
    if ( !*(_DWORD *)(v21 + 224) )
      j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1B52BA8(v22);
    v23 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v22 + 184);
    v24 = *v23;
    this->fields.selBtnArray = *v23;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selBtnArray, (int32_t)v24, v17, v18);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
    {
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_2D898D8 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v27 = (System_Func_object__object__o *)sub_1B00F18(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_object__object____ctor(
        v27,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__,
        0LL);
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v26,
                                                                   (System_Func_TSource__TResult__o *)v27,
                                                                   (const MethodInfo_2D8FA10 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v29 = System_Linq_Enumerable__ToArray_object_(
              v28,
              (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v29;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.selBtnArray, (int32_t)v29, v30, v31);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
        sub_1B00F28(btnTop, v33);
      }
      v35 = 0LL;
      while ( (__int64)v35 < (int)selBtnArray->max_length )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v35,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0LL);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              v36 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v35 >= LODWORD(v36[1].monitor) )
                  sub_1B00F30(btnTop, v33);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v37 = *((_QWORD *)&v36[2].klass + v35);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v35,
                           (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, void *))this->klass->vtable._5_SetBtnSprite.method)(
                    this,
                    v37,
                    Item,
                    this->klass[1]._1.image);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v35,
                                                                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0LL);
                      if ( this->fields.btnTop )
                      {
                        v39 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v35,
                                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__47552792 = UnityEngine_Component__GetComponentInChildren_object__47552792(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_2D59918 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v35,
                            v39,
                            (UILabel_o *)ComponentInChildren_object__47552792,
                            v41);
                          selBtnArray = this->fields.selBtnArray;
                          ++v35;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *battleData; // x21
  System_String_array *v11; // x0
  __int64 v12; // x1
  System_Object_array *v14; // x20
  System_String_o *v15; // x21
  struct BattleData_o *v16; // x8
  System_String_o *v17; // x19
  int32_t totalCriticalStars; // w20
  bool v19; // w0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_48E575A & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_IndexValue_string___, condStr);
    sub_1B00CCC(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_12065/*"STAR_HIGHER"*/, v7);
    sub_1B00CCC(&StringLiteral_9148/*"NONE"*/, v8);
    sub_1B00CCC(&StringLiteral_1/*""*/, v9);
    byte_48E575A = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = (System_String_array *)UnityEngine_Object__op_Equality(battleData, 0LL, 0LL);
  if ( ((unsigned __int8)v11 & 1) != 0 )
    return 0;
  if ( !condStr )
    goto LABEL_19;
  v11 = System_String__Split(condStr, 0x3Au, 0, 0LL);
  if ( !v11 )
    goto LABEL_19;
  v14 = (System_Object_array *)v11;
  if ( !v11->max_length )
    sub_1B00F30(v11, v12);
  v15 = v11->m_Items[0];
  if ( System_String__op_Equality(v15, (System_String_o *)StringLiteral_9148/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v15, (System_String_o *)StringLiteral_12065/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v11 = (System_String_array *)BasicHelper__IndexValue_object_(
                                 v14,
                                 1,
                                 (Il2CppObject *)StringLiteral_1/*""*/,
                                 (const MethodInfo_2D51AA0 *)Method_BasicHelper_IndexValue_string___);
  v16 = this->fields.battleData;
  if ( !v16 )
LABEL_19:
    sub_1B00F28(v11, v12);
  v17 = (System_String_o *)v11;
  totalCriticalStars = v16->fields.totalCriticalStars;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  result = 0;
  v19 = System_Int32__TryParse(v17, &result, 0LL);
  return v19 && result <= totalCriticalStars;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0

  if ( (byte_48E5759 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, *(_QWORD *)&index);
    byte_48E5759 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_2D51AA0 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  _BOOL4 v16; // w23
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  System_String_o *klass; // x8
  System_String_o *v22; // x1
  float v23; // s3
  float v24; // s2
  float v25; // s1
  float v26; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E5758 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, *(_QWORD *)&index);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v9);
    sub_1B00CCC(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___, v10);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E5758 = 1;
  }
  component = 0LL;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_2D6DE20 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v13 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.selBtnArray,
            index,
            0LL,
            (const MethodInfo_2D51AA0 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v15 = v13;
    if ( v13 )
    {
      v16 = LOBYTE(v13[1].monitor) == 0;
      if ( !obj )
        goto LABEL_26;
    }
    else
    {
      v16 = 1;
      if ( !obj )
        goto LABEL_26;
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &component,
           (const MethodInfo_2DAF098 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
    {
      v13 = component;
      a = 1.0;
      b = 1.0;
      g = 1.0;
      r = 1.0;
      if ( v16 )
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
      }
      if ( !component )
LABEL_26:
        sub_1B00F28(v13, v14);
      UIButtonColor__set_defaultColor((UIButtonColor_o *)component, *(UnityEngine_Color_o *)&r, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)label, 0LL, 0LL);
    if ( ((unsigned __int8)v13 & 1) != 0 )
    {
      if ( v15 )
      {
        klass = (System_String_o *)v15[1].klass;
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
        v22 = klass;
      else
        v22 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v22, 0LL);
      v23 = 1.0;
      v24 = 1.0;
      v25 = 1.0;
      v26 = 1.0;
      if ( v16 )
      {
        v26 = this->fields.disableColor.fields.r;
        v25 = this->fields.disableColor.fields.g;
        v24 = this->fields.disableColor.fields.b;
        v23 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v26, 0LL);
    }
  }
}


BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectBtnBaseComponent___InitBtn_b__8_0(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_object__bool__o *v7; // x21
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *v8; // x20
  const MethodInfo *v9; // x3

  if ( (byte_48E575B & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__, dict);
    sub_1B00CCC(&System_Func_string__bool__TypeInfo, v5);
    sub_1B00CCC(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo, v6);
    byte_48E575B = 1;
  }
  v7 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__,
    0LL);
  v8 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_1B00F18(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v8, dict, (System_Func_string__bool__o *)v7, v9);
  return v8;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t v13; // w1
  Il2CppObject *Value_object; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *v17; // x21
  bool v18; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_48E575C & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_GetValue_List_object____, btnDict);
    sub_1B00CCC(&Method_BasicHelper_GetValue_string___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_All_string___, v8);
    sub_1B00CCC(&Method_System_Linq_Enumerable_OfType_string___, v9);
    sub_1B00CCC(&StringLiteral_17956/*"conds"*/, v10);
    sub_1B00CCC(&StringLiteral_21681/*"name"*/, v11);
    sub_1B00CCC(&StringLiteral_1/*""*/, v12);
    byte_48E575C = 1;
  }
  v13 = (int)StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, v13, (int32_t)funcCondCheck, (int32_t)method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    Value_object = BasicHelper__GetValue_object_(
                     btnDict,
                     (System_String_o *)StringLiteral_21681/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2D510F4 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)Value_object, v15, v16);
    v17 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_17956/*"conds"*/,
            0LL,
            (const MethodInfo_2D510F4 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v17, 0LL) )
    {
      v18 = 1;
    }
    else
    {
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v17,
                                                                   (const MethodInfo_2D898D8 *)Method_System_Linq_Enumerable_OfType_string___);
      v18 = System_Linq_Enumerable__All_object_(
              v19,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_2D6C9F0 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v18;
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
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}