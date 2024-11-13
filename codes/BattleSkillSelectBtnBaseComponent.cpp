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
  __int64 v2; // x2
  BattleSkillSelectBtnBaseComponent_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x8
  int v7; // w10

  v3 = this;
  if ( (byte_4B19345 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Count__, method, v2);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_1BCA7E0(&StringLiteral_440/*"#808080"*/, v4, v5);
    byte_4B19345 = 1;
  }
  btnTop = v3->fields.btnTop;
  if ( !btnTop )
    sub_1BCAA3C(this, method);
  v7 = -1;
  do
    ++v7;
  while ( v7 < btnTop->fields._size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_440/*"#808080"*/,
          &v3->fields.disableColor,
          0LL) )
    v3->fields.disableColor = (struct UnityEngine_Color_o)xmmword_BD2310;
}


void __fastcall BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  UnityEngine_Object_o *battleData; // x20
  __int64 v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  long double inited; // q0
  _QWORD *v39; // x20
  __int64 v40; // x8
  __int64 v41; // x0
  __int64 v42; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v43; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v44; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  System_Func_object__object__o *v50; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Object_array *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_List_object__o *btnTop; // x0
  __int64 v60; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v62; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x8
  __int64 v64; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v66; // x22
  Il2CppObject *ComponentInChildren_object__49322392; // x0
  const MethodInfo *v68; // x4

  if ( (byte_4B19346 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, btnList, data);
    sub_1BCA7E0(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____, v17, v18);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___,
      v19,
      v20);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v21, v22);
    sub_1BCA7E0(
      &System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo,
      v23,
      v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_UISprite__get_Item__, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    byte_4B19346 = 1;
  }
  this->fields.battleData = data;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.battleData,
    (int64_t)data,
    (int64_t)data,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
  if ( !UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
  {
    v39 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v40 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v40 )
    {
      sub_1C1C718(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v31);
      v40 = v39[7];
    }
    v41 = *(_QWORD *)(v40 + 16);
    if ( (*(_BYTE *)(v41 + 309) & 1) == 0 )
      v41 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v41 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v41, v31);
    v42 = *(_QWORD *)(v39[7] + 16LL);
    if ( (*(_BYTE *)(v42 + 309) & 1) == 0 )
      v42 = sub_1C1C6BC(inited);
    v43 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v42 + 184);
    v44 = *v43;
    this->fields.selBtnArray = *v43;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selBtnArray, (int64_t)v44, v32, v33, v34, v35, v36, v37);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
    {
      v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v50 = (System_Func_object__object__o *)sub_1BCAA2C(
                                               System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo,
                                               v47,
                                               v48,
                                               v49);
      System_Func_object__object____ctor(
        v50,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__,
        0LL);
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v46,
                                                                   (System_Func_TSource__TResult__o *)v50,
                                                                   (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v52 = System_Linq_Enumerable__ToArray_object_(
              v51,
              (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v52;
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.selBtnArray, (int64_t)v52, v53, v54, v55, v56, v57, v58);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
        sub_1BCAA3C(btnTop, v60);
      }
      v62 = 0LL;
      while ( (__int64)v62 < (int)selBtnArray->max_length )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v62,
                                                                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0LL);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              v63 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v62 >= LODWORD(v63[1].monitor) )
                  sub_1BCAA44(btnTop, v60);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v64 = *((_QWORD *)&v63[2].klass + v62);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v62,
                           (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, void *))this->klass->vtable._5_SetBtnSprite.method)(
                    this,
                    v64,
                    Item,
                    this->klass[1]._1.image);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v62,
                                                                            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0LL);
                      if ( this->fields.btnTop )
                      {
                        v66 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v62,
                                                                                (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__49322392 = UnityEngine_Component__GetComponentInChildren_object__49322392(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_2F09998 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v62,
                            v66,
                            (UILabel_o *)ComponentInChildren_object__49322392,
                            v68);
                          selBtnArray = this->fields.selBtnArray;
                          ++v62;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  UnityEngine_Object_o *battleData; // x21
  System_String_array *v17; // x0
  __int64 v18; // x1
  System_Object_array *v20; // x20
  System_String_o *v21; // x21
  struct BattleData_o *v22; // x8
  System_String_o *v23; // x19
  int32_t totalCriticalStars; // w20
  bool v25; // w0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B19349 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_string___, condStr, method);
    sub_1BCA7E0(&BattleSkillSelectAddFuncConfComponent_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_12412/*"STAR_HIGHER"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_9382/*"NONE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v13, v14);
    byte_4B19349 = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  v17 = (System_String_array *)UnityEngine_Object__op_Equality(battleData, 0LL, 0LL);
  if ( ((unsigned __int8)v17 & 1) != 0 )
    return 0;
  if ( !condStr )
    goto LABEL_19;
  v17 = System_String__Split(condStr, 0x3Au, 0, 0LL);
  if ( !v17 )
    goto LABEL_19;
  v20 = (System_Object_array *)v17;
  if ( !v17->max_length )
    sub_1BCAA44(v17, v18);
  v21 = v17->m_Items[0];
  if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_9382/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v21, (System_String_o *)StringLiteral_12412/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v17 = (System_String_array *)BasicHelper__IndexValue_object_(
                                 v20,
                                 1,
                                 (Il2CppObject *)StringLiteral_1/*""*/,
                                 (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_string___);
  v22 = this->fields.battleData;
  if ( !v22 )
LABEL_19:
    sub_1BCAA3C(v17, v18);
  v23 = (System_String_o *)v17;
  totalCriticalStars = v22->fields.totalCriticalStars;
  if ( !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo, v18);
  result = 0;
  v25 = System_Int32__TryParse(v23, &result, 0LL);
  return v25 && result <= totalCriticalStars;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x0

  if ( (byte_4B19348 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___,
      *(_QWORD *)&index,
      method);
    byte_4B19348 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *v17; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  _BOOL4 v20; // w23
  float a; // s3
  float b; // s2
  float g; // s1
  float r; // s0
  System_String_o *klass; // x8
  System_String_o *v26; // x1
  float v27; // s3
  float v28; // s2
  float v29; // s1
  float v30; // s0
  Il2CppObject *component; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B19347 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___,
      *(_QWORD *)&index,
      obj);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B19347 = 1;
  }
  component = 0LL;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_2F1E844 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v17 = BasicHelper__IndexValue_object_(
            (System_Object_array *)this->fields.selBtnArray,
            index,
            0LL,
            (const MethodInfo_2F01858 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v19 = v17;
    if ( v17 )
    {
      v20 = LOBYTE(v17[1].monitor) == 0;
      if ( !obj )
        goto LABEL_26;
    }
    else
    {
      v20 = 1;
      if ( !obj )
        goto LABEL_26;
    }
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           obj,
           &component,
           (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
    {
      v17 = component;
      a = 1.0;
      b = 1.0;
      g = 1.0;
      r = 1.0;
      if ( v20 )
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
      }
      if ( !component )
LABEL_26:
        sub_1BCAA3C(v17, v18);
      UIButtonColor__set_defaultColor((UIButtonColor_o *)component, *(UnityEngine_Color_o *)&r, 0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v17 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)label, 0LL, 0LL);
    if ( ((unsigned __int8)v17 & 1) != 0 )
    {
      if ( v19 )
      {
        klass = (System_String_o *)v19[1].klass;
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
        v26 = klass;
      else
        v26 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v26, 0LL);
      v27 = 1.0;
      v28 = 1.0;
      v29 = 1.0;
      v30 = 1.0;
      if ( v20 )
      {
        v30 = this->fields.disableColor.fields.r;
        v29 = this->fields.disableColor.fields.g;
        v28 = this->fields.disableColor.fields.b;
        v27 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v30, 0LL);
    }
  }
}


BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectBtnBaseComponent___InitBtn_b__8_0(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Func_object__bool__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *v14; // x20
  const MethodInfo *v15; // x3

  if ( (byte_4B1934A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__, dict, method);
    sub_1BCA7E0(&System_Func_string__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo, v8, v9);
    byte_4B1934A = 1;
  }
  v10 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_string__bool__TypeInfo, dict, method, v3);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__,
    0LL);
  v14 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_1BCAA2C(
                                                               BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo,
                                                               v11,
                                                               v12,
                                                               v13);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v14, dict, (System_Func_string__bool__o *)v10, v15);
  return v14;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  void *v23; // x1
  Il2CppObject *Value_object; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x21
  bool v32; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0

  if ( (byte_4B1934B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_GetValue_List_object____, btnDict, funcCondCheck);
    sub_1BCA7E0(&Method_BasicHelper_GetValue_string___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_All_string___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_string___, v15, v16);
    sub_1BCA7E0(&StringLiteral_18387/*"conds"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22219/*"name"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v21, v22);
    byte_4B1934B = 1;
  }
  v23 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)v23,
    (int64_t)funcCondCheck,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    Value_object = BasicHelper__GetValue_object_(
                     btnDict,
                     (System_String_o *)StringLiteral_22219/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)Value_object, v25, v26, v27, v28, v29, v30);
    v31 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_18387/*"conds"*/,
            0LL,
            (const MethodInfo_2F00C2C *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v31, 0LL) )
    {
      v32 = 1;
    }
    else
    {
      v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v31,
                                                                   (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_string___);
      v32 = System_Linq_Enumerable__All_object_(
              v33,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_2F1D414 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v32;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Name_k__BackingField = value;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}