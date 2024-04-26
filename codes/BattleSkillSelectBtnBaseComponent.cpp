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
  int size; // w8
  int v5; // w9

  v2 = this;
  if ( (byte_435480B & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UISprite__get_Count__);
    this = (BattleSkillSelectBtnBaseComponent_o *)sub_B70694(&StringLiteral_365/*"#808080"*/);
    byte_435480B = 1;
  }
  btnTop = v2->fields.btnTop;
  if ( !btnTop )
    sub_B7076C(this, method);
  size = btnTop->fields._size;
  v5 = -1;
  do
    ++v5;
  while ( v5 < size );
  if ( !UnityEngine_ColorUtility__TryParseHtmlString(
          (System_String_o *)StringLiteral_365/*"#808080"*/,
          &v2->fields.disableColor,
          0LL) )
    v2->fields.disableColor = UnityEngine_Color__get_gray(0LL);
}


void __fastcall BattleSkillSelectBtnBaseComponent__InitBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_List_object__o *btnList,
        BattleData_o *data,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_Object_o *battleData; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  _QWORD **v18; // x22
  __int64 v19; // x20
  __int16 v20; // w8
  __int64 v21; // x20
  __int64 v22; // x20
  __int64 v23; // x20
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array **v24; // x8
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o **p_selBtnArray; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 gameObject; // x0
  __int64 v38; // x1
  struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *selBtnArray; // x8
  __int64 v40; // x23
  unsigned int v41; // w21
  struct System_Collections_Generic_List_UISprite__o *btnTop; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x8
  struct System_Collections_Generic_List_UISprite__o *v44; // x25
  struct System_Collections_Generic_List_UISprite__o *v45; // x22
  struct System_Collections_Generic_List_UISprite__o *v46; // x25
  UnityEngine_GameObject_o *v47; // x22
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  const MethodInfo *v49; // x4
  __int64 v50; // x0

  if ( (byte_435480C & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__);
    sub_B70694(&Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
    sub_B70694(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
    sub_B70694(&Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor__);
    sub_B70694(&System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_UISprite__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435480C = 1;
  }
  this->fields.battleData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.battleData,
    (System_Int32_array **)data,
    (System_String_array **)data,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
  {
    v18 = (_QWORD **)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___;
    v19 = **((_QWORD **)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 6);
    v20 = *(_WORD *)(v19 + 306);
    if ( (v20 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ + 6));
      v20 = *(_WORD *)(v19 + 306);
    }
    if ( (v20 & 0x400) != 0 )
    {
      v21 = *v18[6];
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_B08394(*v18[6]);
      if ( !*(_DWORD *)(v21 + 224) )
      {
        v22 = *v18[6];
        if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
          sub_B08394(*v18[6]);
        j_il2cpp_runtime_class_init_0(v22);
      }
    }
    v23 = *v18[6];
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_B08394(*v18[6]);
    v24 = *(struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array ***)(v23 + 184);
    v25 = *v24;
    this->fields.selBtnArray = *v24;
    p_selBtnArray = (System_Collections_Generic_IEnumerable_TSource__o **)&this->fields.selBtnArray;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.selBtnArray,
      (System_Int32_array **)v25,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)btnList, 0LL) )
    {
      v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                   (System_Collections_IEnumerable_o *)btnList,
                                                                   (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_Dictionary_string__object____);
      v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        v28,
        (Il2CppObject *)this,
        Method_BattleSkillSelectBtnBaseComponent__InitBtn_b__8_0__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor__);
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                   v27,
                                                                   (System_Func_TSource__TResult__o *)v28,
                                                                   (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_Dictionary_string__object___BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      v30 = (struct BattleSkillSelectBtnBaseComponent_SelectBtnInfo_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                              v29,
                                                                              (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
      this->fields.selBtnArray = v30;
      sub_B70630(
        (BattleServantConfConponent_o *)&this->fields.selBtnArray,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
    }
    gameObject = System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                   *p_selBtnArray,
                   (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    if ( (gameObject & 1) != 0 )
    {
      if ( !*p_selBtnArray
        || (gameObject = ((__int64 (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._4_SetBtnLayout.method)(
                           this,
                           LODWORD((*p_selBtnArray)[1].monitor),
                           this->klass->vtable._5_SetBtnSprite.methodPtr),
            (selBtnArray = this->fields.selBtnArray) == 0LL) )
      {
LABEL_44:
        sub_B7076C(gameObject, v38);
      }
      v40 = 4LL;
      while ( 1 )
      {
        v41 = v40 - 4;
        if ( (int)v40 - 4 >= (signed int)selBtnArray->max_length )
          break;
        btnTop = this->fields.btnTop;
        if ( btnTop )
        {
          if ( btnTop->fields._size <= v41 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          gameObject = *((_QWORD *)&btnTop->fields._items->obj.klass + v40);
          if ( gameObject )
          {
            gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
            if ( gameObject )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
              v43 = *p_selBtnArray;
              if ( *p_selBtnArray )
              {
                if ( v41 >= LODWORD(v43[1].monitor) )
                {
                  v50 = sub_B70798(gameObject);
                  sub_B70738(v50, 0LL);
                }
                v44 = this->fields.btnTop;
                if ( v44 )
                {
                  if ( v44->fields._size <= v41 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                  gameObject = ((__int64 (__fastcall *)(BattleSkillSelectBtnBaseComponent_o *, _QWORD, _QWORD, void *))this->klass->vtable._5_SetBtnSprite.method)(
                                 this,
                                 *((_QWORD *)&v43->klass + v40),
                                 *((_QWORD *)&v44->fields._items->obj.klass + v40),
                                 this->klass[1]._1.image);
                  v45 = this->fields.btnTop;
                  if ( v45 )
                  {
                    if ( v45->fields._size <= v41 )
                      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                    gameObject = *((_QWORD *)&v45->fields._items->obj.klass + v40);
                    if ( gameObject )
                    {
                      gameObject = (__int64)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)gameObject,
                                              0LL);
                      v46 = this->fields.btnTop;
                      if ( v46 )
                      {
                        v47 = (UnityEngine_GameObject_o *)gameObject;
                        if ( v46->fields._size <= v41 )
                          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
                        gameObject = *((_QWORD *)&v46->fields._items->obj.klass + v40);
                        if ( gameObject )
                        {
                          ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                           (UnityEngine_Component_o *)gameObject,
                                                           (const MethodInfo_1BE40A0 *)Method_UnityEngine_Component_GetComponentInChildren_UILabel___);
                          BattleSkillSelectBtnBaseComponent__UpdateButton(
                            this,
                            v41,
                            v47,
                            (UILabel_o *)ComponentInChildren_UIWidget,
                            v49);
                          selBtnArray = this->fields.selBtnArray;
                          ++v40;
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
        goto LABEL_44;
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
  void *v6; // x0
  void *v7; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *v8; // x20
  System_String_o *v9; // x21
  struct BattleData_o *v11; // x8
  System_String_o *v12; // x19
  int32_t totalCriticalStars; // w20
  bool v14; // w0
  __int64 v15; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_435480F & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_string___);
    sub_B70694(&BattleSkillSelectAddFuncConfComponent_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_12532/*"STAR_HIGHER"*/);
    sub_B70694(&StringLiteral_9420/*"NONE"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435480F = 1;
  }
  if ( System_String__IsNullOrEmpty(condStr, 0LL) )
    return 0;
  battleData = (UnityEngine_Object_o *)this->fields.battleData;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(battleData, 0LL, 0LL) )
    return 0;
  v6 = (void *)sub_B706AC(char___TypeInfo, 1LL);
  if ( !v6 )
    goto LABEL_23;
  v7 = v6;
  if ( !*((_DWORD *)v6 + 6) )
    goto LABEL_24;
  *((_WORD *)v6 + 16) = 58;
  if ( !condStr || (v6 = System_String__Split(condStr, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_23:
    sub_B7076C(v6, v7);
  v8 = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)v6;
  if ( !*((_DWORD *)v6 + 6) )
  {
LABEL_24:
    v15 = sub_B70798(v6);
    sub_B70738(v15, 0LL);
  }
  v9 = (System_String_o *)*((_QWORD *)v6 + 4);
  if ( !v9 )
    return 0;
  if ( System_String__op_Equality(*((System_String_o **)v6 + 4), (System_String_o *)StringLiteral_9420/*"NONE"*/, 0LL) )
    return 1;
  if ( !System_String__op_Equality(v9, (System_String_o *)StringLiteral_12532/*"STAR_HIGHER"*/, 0LL) )
    return 0;
  v6 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
         v8,
         1,
         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)StringLiteral_1/*""*/,
         (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_string___);
  v11 = this->fields.battleData;
  if ( !v11 )
    goto LABEL_23;
  v12 = (System_String_o *)v6;
  totalCriticalStars = v11->fields.totalCriticalStars;
  if ( (BYTE3(BattleSkillSelectAddFuncConfComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleSkillSelectAddFuncConfComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleSkillSelectAddFuncConfComponent_TypeInfo);
  }
  result = 0;
  v14 = System_Int32__TryParse(v12, &result, 0LL);
  return v14 && result <= totalCriticalStars;
}


bool __fastcall BattleSkillSelectBtnBaseComponent__IsEnableBtn(
        BattleSkillSelectBtnBaseComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v5; // x0

  if ( (byte_435480E & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    byte_435480E = 1;
  }
  v5 = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
         (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
         index,
         0LL,
         (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
  if ( v5 )
    LOBYTE(v5) = LOBYTE(v5->fields.imageLimitCount) != 0;
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
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *Component_UITexture; // x0
  __int64 v10; // x1
  WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *v11; // x21
  bool v12; // w23
  UITexture_o *v13; // x22
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  System_String_o *v18; // x8
  System_String_o *v19; // x1
  float v20; // s0
  float v21; // s1
  float v22; // s2
  float v23; // s3
  UITexture_o *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_435480D & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    sub_B70694(&Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435480D = 1;
  }
  component = 0LL;
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.selBtnArray,
         (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___) )
  {
    Component_UITexture = BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                            (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)this->fields.selBtnArray,
                            index,
                            0LL,
                            (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_BattleSkillSelectBtnBaseComponent_SelectBtnInfo___);
    v11 = Component_UITexture;
    if ( Component_UITexture )
    {
      v12 = LOBYTE(Component_UITexture->fields.imageLimitCount) != 0;
      if ( !obj )
        goto LABEL_29;
    }
    else
    {
      v12 = 0;
      if ( !obj )
        goto LABEL_29;
    }
    Component_UITexture = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)UnityEngine_GameObject__TryGetComponent_UITexture_(
                                                                                                 obj,
                                                                                                 &component,
                                                                                                 (const MethodInfo_1D4B5C8 *)Method_UnityEngine_GameObject_TryGetComponent_UIButton___);
    if ( ((unsigned __int8)Component_UITexture & 1) != 0 )
    {
      v13 = component;
      if ( v12 )
      {
        *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
        if ( !v13 )
LABEL_29:
          sub_B7076C(Component_UITexture, v10);
      }
      else
      {
        r = this->fields.disableColor.fields.r;
        g = this->fields.disableColor.fields.g;
        b = this->fields.disableColor.fields.b;
        a = this->fields.disableColor.fields.a;
        if ( !component )
          goto LABEL_29;
      }
      UIButtonColor__set_defaultColor((UIButtonColor_o *)v13, *(UnityEngine_Color_o *)&r, 0LL);
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Component_UITexture = (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_o *)UnityEngine_Object__op_Inequality(
                                                                                                 (UnityEngine_Object_o *)label,
                                                                                                 0LL,
                                                                                                 0LL);
    if ( ((unsigned __int8)Component_UITexture & 1) != 0 )
    {
      if ( v11 )
      {
        v18 = *(System_String_o **)&v11->fields.weight;
        if ( !label )
          goto LABEL_29;
      }
      else
      {
        v18 = 0LL;
        if ( !label )
          goto LABEL_29;
      }
      if ( v18 )
        v19 = v18;
      else
        v19 = (System_String_o *)StringLiteral_1/*""*/;
      UILabel__set_text(label, v19, 0LL);
      if ( v12 )
      {
        *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
      }
      else
      {
        v20 = this->fields.disableColor.fields.r;
        v21 = this->fields.disableColor.fields.g;
        v22 = this->fields.disableColor.fields.b;
        v23 = this->fields.disableColor.fields.a;
      }
      UIWidget__set_color((UIWidget_o *)label, *(UnityEngine_Color_o *)&v20, 0LL);
    }
  }
}


BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *__fastcall BattleSkillSelectBtnBaseComponent___InitBtn_b__8_0(
        BattleSkillSelectBtnBaseComponent_o *this,
        System_Collections_Generic_Dictionary_string__object__o *dict,
        const MethodInfo *method)
{
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v5; // x21
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *v6; // x20

  if ( (byte_4354810 & 1) == 0 )
  {
    sub_B70694(&Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__);
    sub_B70694(&Method_System_Func_string__bool___ctor__);
    sub_B70694(&System_Func_string__bool__TypeInfo);
    sub_B70694(&BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
    byte_4354810 = 1;
  }
  v5 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_string__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleSkillSelectBtnBaseComponent_IsCondCheck__,
    (const MethodInfo_29AC578 *)Method_System_Func_string__bool___ctor__);
  v6 = (BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *)sub_B70764(BattleSkillSelectBtnBaseComponent_SelectBtnInfo_TypeInfo);
  BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(v6, dict, (System_Func_string__bool__o *)v5, 0LL);
  return v6;
}


void __fastcall BattleSkillSelectBtnBaseComponent_SelectBtnInfo___ctor(
        BattleSkillSelectBtnBaseComponent_SelectBtnInfo_o *this,
        System_Collections_Generic_Dictionary_string__object__o *btnDict,
        System_Func_string__bool__o *funcCondCheck,
        const MethodInfo *method)
{
  System_String_o *Value_string; // x21
  char v8; // w8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x0

  if ( (byte_434ED0F & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_GetValue_List_object____);
    sub_B70694(&Method_BasicHelper_GetValue_string___);
    sub_B70694(&Method_System_Linq_Enumerable_All_string___);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_string___);
    sub_B70694(&StringLiteral_17913/*"conds"*/);
    sub_B70694(&StringLiteral_21340/*"name"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434ED0F = 1;
  }
  this->fields._Name_k__BackingField = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( btnDict )
  {
    this->fields._Name_k__BackingField = BasicHelper__GetValue_string_(
                                           btnDict,
                                           (System_String_o *)StringLiteral_21340/*"name"*/,
                                           (System_String_o *)StringLiteral_1/*""*/,
                                           (const MethodInfo_1BDE7C4 *)Method_BasicHelper_GetValue_string___);
    sub_B70630(&this->fields);
    Value_string = BasicHelper__GetValue_string_(
                     btnDict,
                     (System_String_o *)StringLiteral_17913/*"conds"*/,
                     0LL,
                     (const MethodInfo_1BDE7C4 *)Method_BasicHelper_GetValue_List_object____);
    if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string, 0LL) )
    {
      v8 = 1;
    }
    else
    {
      v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                  (System_Collections_IEnumerable_o *)Value_string,
                                                                  (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_string___);
      v8 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
             v9,
             (System_Func_TSource__bool__o *)funcCondCheck,
             (const MethodInfo_1CA7D8C *)Method_System_Linq_Enumerable_All_string___);
    }
    this->fields._IsEnable_k__BackingField = v8;
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
  this->fields._Name_k__BackingField = value;
  sub_B70630(&this->fields);
}