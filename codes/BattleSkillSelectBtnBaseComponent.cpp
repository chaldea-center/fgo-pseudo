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
  if ( (byte_4BDF782 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_1C21E38(&StringLiteral_442/*"#808080"*/);
    byte_4BDF782 = 1;
  }
  btnTop = v2->fields.btnTop;
  if ( !btnTop )
    sub_1C22094(this, method);
  v4 = -1;
  do
    ++v4;
  while ( v4 < btnTop->fields._size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_442/*"#808080"*/,
          &v2->fields.disableColor,
          0LL) )
    v2->fields.disableColor = (struct UnityEngine_Color_o)xmmword_BFDCB0;
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
  UnityEngine_Object_o *battleData; // x20
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  long double inited; // q0
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
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_object__o *btnTop; // x0
  __int64 v37; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  unsigned __int64 v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x8
  __int64 v41; // x22
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *v43; // x22
  Il2CppObject *ComponentInChildren_object__49965836; // x0
  const MethodInfo *v45; // x4

  if ( (byte_4BDF783 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF783 = 1;
  }
  this->fields.battleData = data;
  sub_1C21DDC(
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
  {
    v19 = Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v20 = *((_QWORD *)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 7);
    if ( !v20 )
    {
      sub_1C73D70(Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v20 = v19[7];
    }
    v21 = *(_QWORD *)(v20 + 16);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C73D14(inited);
    if ( !*(_DWORD *)(v21 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v21);
    v22 = *(_QWORD *)(v19[7] + 16LL);
    if ( (*(_BYTE *)(v22 + 309) & 1) == 0 )
      v22 = sub_1C73D14(inited);
    v23 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v22 + 184);
    v24 = *v23;
    this->fields.selBtnArray = *v23;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selBtnArray, (int64_t)v24, v12, v13, v14, v15, v16, v17);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
    {
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v27 = (System_Func_object__object__o *)sub_1C22084(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_object__object____ctor(
        v27,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__,
        0LL);
      v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                   v26,
                                                                   (System_Func_TSource__TResult__o *)v27,
                                                                   (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v29 = System_Linq_Enumerable__ToArray_object_(
              v28,
              (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)v29;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.selBtnArray, (int64_t)v29, v30, v31, v32, v33, v34, v35);
    }
    btnTop = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                            *p_selBtnArray,
                                                            (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
        sub_1C22094(btnTop, v37);
      }
      v39 = 0LL;
      while ( (__int64)v39 < (int)selBtnArray->max_length )
      {
        btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
        if ( btnTop )
        {
          btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  btnTop,
                                                                  v39,
                                                                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
          if ( btnTop )
          {
            btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)btnTop,
                                                                    0LL);
            if ( btnTop )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)btnTop, 1, 0LL);
              v40 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v39 >= LODWORD(v40[1].monitor) )
                  sub_1C2209C(btnTop, v37);
                btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                if ( btnTop )
                {
                  v41 = *((_QWORD *)&v40[2].klass + v39);
                  Item = System_Collections_Generic_List_object___get_Item(
                           btnTop,
                           v39,
                           (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                  ((void (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, __int64, Il2CppObject *, void *))this->klass->vtable._5_SetBtnSprite.method)(
                    this,
                    v41,
                    Item,
                    this->klass[1]._1.image);
                  btnTop = (System_Collections_Generic_List_object__o *)this->fields.btnTop;
                  if ( btnTop )
                  {
                    btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                            btnTop,
                                                                            v39,
                                                                            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                    if ( btnTop )
                    {
                      btnTop = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)btnTop,
                                                                              0LL);
                      if ( this->fields.btnTop )
                      {
                        v43 = (UnityEngine_GameObject_o *)btnTop;
                        btnTop = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)this->fields.btnTop,
                                                                                v39,
                                                                                (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UISprite__get_Item__);
                        if ( btnTop )
                        {
                          ComponentInChildren_object__49965836 = UnityEngine_Component__GetComponentInChildren_object__49965836(
                                                                   (UnityEngine_Component_o *)btnTop,
                                                                   (const MethodInfo_2FA6B0C *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v39,
                            v43,
                            (UILabel_o *)ComponentInChildren_object__49965836,
                            v45);
                          selBtnArray = this->fields.selBtnArray;
                          ++v39;
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

  if ( (byte_4BDF786 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_string___);
    sub_1C21E38(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_12494/*"STAR_HIGHER"*/);
    sub_1C21E38(&StringLiteral_9444/*"NONE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF786 = 1;
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
    sub_1C2209C(v6, v7);
  v10 = v6->m_Items[0];
  if ( System_String__op_Equality(v10, (System_String_o *)StringLiteral_9444/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v10, (System_String_o *)StringLiteral_12494/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v6 = (System_String_array *)BasicHelper__IndexValue_object_(
                                v9,
                                1,
                                (Il2CppObject *)StringLiteral_1/*""*/,
                                (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_string___);
  v11 = this->fields.battleData;
  if ( !v11 )
LABEL_19:
    sub_1C22094(v6, v7);
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

  if ( (byte_4BDF785 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    byte_4BDF785 = 1;
  }
  v5 = BasicHelper__IndexValue_object_(
         (System_Object_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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

  if ( (byte_4BDF784 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_1C21E38(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF784 = 1;
  }
  component = 0LL;
  if ( System_Linq_Enumerable__Any_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_2FBB2A4 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    v9 = BasicHelper__IndexValue_object_(
           (System_Object_array *)this->fields.selBtnArray,
           index,
           0LL,
           (const MethodInfo_2F9E9CC *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
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
           (const MethodInfo_30017C4 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___) )
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
        sub_1C22094(v9, v10);
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

  if ( (byte_4BDF787 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__);
    sub_1C21E38(&System_Func_string__bool__TypeInfo);
    sub_1C21E38(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
    byte_4BDF787 = 1;
  }
  v5 = (System_Func_object__bool__o *)sub_1C22084(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__,
    0LL);
  v6 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_1C22084(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v6, dict, (System_Func_string__bool__o *)v5, v7);
  return v6;
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
  void *v11; // x1
  Il2CppObject *Value_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  Il2CppObject *v19; // x21
  bool v20; // w0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4BDF788 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_GetValue_List_object____);
    sub_1C21E38(&Method_BasicHelper_GetValue_string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_All_string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_OfType_string___);
    sub_1C21E38(&StringLiteral_18512/*"conds"*/);
    sub_1C21E38(&StringLiteral_22383/*"name"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF788 = 1;
  }
  v11 = StringLiteral_1/*""*/;
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields,
    (int64_t)v11,
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
                     (System_String_o *)StringLiteral_22383/*"name"*/,
                     (Il2CppObject *)StringLiteral_1/*""*/,
                     (const MethodInfo_2F9DDA0 *)Method_BasicHelper_GetValue_string___);
    this->fields._Name_k__BackingField = (struct System_String_o *)Value_object;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)Value_object, v13, v14, v15, v16, v17, v18);
    v19 = BasicHelper__GetValue_object_(
            btnDict,
            (System_String_o *)StringLiteral_18512/*"conds"*/,
            0LL,
            (const MethodInfo_2F9DDA0 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v19, 0LL) )
    {
      v20 = 1;
    }
    else
    {
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                   (System_Collections_IEnumerable_o *)v19,
                                                                   (const MethodInfo_2FD8A3C *)Method_System_Linq_Enumerable_OfType_string___);
      v20 = System_Linq_Enumerable__All_object_(
              v21,
              (System_Func_TSource__bool__o *)funcCondCheck,
              (const MethodInfo_2FB9E74 *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v20;
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}