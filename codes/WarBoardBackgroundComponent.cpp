void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AE0C8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
    byte_42AE0C8 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.bgAnimationObjDic,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorDarkness(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.5, immediate, method);
}


void __fastcall WarBoardBackgroundComponent__ChangeColorNormal(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.0, immediate, method);
}


void __fastcall WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
        WarBoardBackgroundComponent_o *this,
        float alpha,
        bool immediate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v11; // x8
  TweenAlpha_o *v12; // x0
  UnityEngine_Object_o *v13; // x20

  if ( (byte_42AE0C4 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&UICommonButtonColor_TypeInfo);
    byte_42AE0C4 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v9 = this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
    v11 = UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v11 = UICommonButtonColor_TypeInfo;
    }
    v12 = TweenAlpha__Begin(gameObject, v11->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v13 = (UnityEngine_Object_o *)v12;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v13 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v13, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
          return;
        }
LABEL_19:
        sub_B52A5C(v9, v8);
      }
    }
  }
}


WarBoardBGEffectComponent_o *__fastcall WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *result; // x0
  UnityEngine_Object_o *v6; // x21
  bool v7; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v9; // w8

  if ( (byte_42AE0C5 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE0C5 = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
         (System_Xml_XmlQualifiedName_o *)objName,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)result,
                                              (System_Type_o *)objName,
                                              (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_19:
    sub_B52A5C(result, objName);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  result = 0LL;
  if ( !v7 )
  {
    if ( !v6 )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v6,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( !v9 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
        (System_Xml_XmlQualifiedName_o *)objName,
        (System_Xml_Schema_XmlSchemaObject_o *)Component_srcLineSprite,
        (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
      return (WarBoardBGEffectComponent_o *)Component_srcLineSprite;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall WarBoardBackgroundComponent__GetBgDiffByIndex(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  struct System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__o *bgDiffList; // x20
  int size; // w8
  WarBoardBackgroundComponent_BackgroundDiffInfo_o *v8; // x8

  v4 = this;
  if ( (byte_42AE0C2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__);
    this = (WarBoardBackgroundComponent_o *)sub_B52984(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
    byte_42AE0C2 = 1;
  }
  bgDiffList = v4->fields.bgDiffList;
  if ( !bgDiffList )
    return 0LL;
  size = bgDiffList->fields._size;
  if ( size < idx + 1 )
    return 0LL;
  if ( size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v8 = bgDiffList->fields._items->m_Items[idx];
  if ( !v8 )
    sub_B52A5C(this, *(_QWORD *)&idx);
  return v8->fields.bgDiffObj;
}


void __fastcall WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AE0C1 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    byte_42AE0C1 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.bgDiffList )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_B52A5C(Master_WarQuestSelectionMaster, v4);
    v6 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      bgDiffList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v12,
             (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v7 )
        break;
      if ( !v12.fields.current )
        sub_B52A5C(v7, v8);
      if ( !v6 )
        sub_B52A5C(v7, v8);
      klass = v12.fields.current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v6, (int32_t)v12.fields.current[1].monitor, 0LL);
      if ( !klass )
        sub_B52A5C(IsOpen, v11);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  System_String_o *ObjectName; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgDiffList; // x21
  bool v11; // zf
  System_String_o *v12; // x22
  const MethodInfo *v13; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_42AE0C6 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardBackgroundComponent_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AE0C6 = 1;
  }
  if ( !entity )
    goto LABEL_19;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v6 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v6, v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgDiffList = (WarBoardData_o *)this[7].fields.bgDiffList;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v11 = IsStop == 1;
        v12 = (System_String_o *)this;
        if ( v11 )
        {
          if ( bgDiffList )
          {
            WarBoardData__SetBgAnimationInfo(
              bgDiffList,
              (System_String_o *)this,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v13);
              return;
            }
          }
        }
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( bgDiffList )
          {
            WarBoardData__SetBgAnimationInfo(bgDiffList, v12, (System_String_o *)this, 0LL);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v15);
              return;
            }
          }
        }
      }
LABEL_19:
      sub_B52A5C(this, entity);
    }
  }
}


void __fastcall WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *WarBoardBGEffectComponent; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_42AE0C7 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AE0C7 = 1;
  }
  WarBoardBGEffectComponent = (UnityEngine_Object_o *)WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                                        this,
                                                        objName,
                                                        (const MethodInfo *)animName);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(WarBoardBGEffectComponent, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !WarBoardBGEffectComponent )
      sub_B52A5C(v8, v9);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__SetDispBgDiff(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o **v11; // x8
  System_String_o *v12; // x19

  if ( (byte_42AE0C3 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_23387/*"wall_0"*/);
    sub_B52984(&StringLiteral_23388/*"wall_1"*/);
    byte_42AE0C3 = 1;
  }
  BgDiffByIndex = (UnityEngine_Object_o *)WarBoardBackgroundComponent__GetBgDiffByIndex(
                                            this,
                                            idx,
                                            (const MethodInfo *)isDisp);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_17;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)BgDiffByIndex,
                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v8 )
    {
      v11 = (System_String_o **)&StringLiteral_23388/*"wall_1"*/;
      if ( !isDisp )
        v11 = (System_String_o **)&StringLiteral_23387/*"wall_0"*/;
      if ( Component_srcLineSprite )
      {
        v12 = *v11;
        SimpleAnimation__Rewind_16627576((SimpleAnimation_o *)Component_srcLineSprite, *v11, 0LL);
        SimpleAnimation__Play_16625408((SimpleAnimation_o *)Component_srcLineSprite, v12, 0LL);
        return;
      }
LABEL_17:
      sub_B52A5C(v8, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BgDiffByIndex, isDisp, 0LL);
  }
}


UITexture_o *__fastcall WarBoardBackgroundComponent__get_BoardBackground(
        WarBoardBackgroundComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardBg;
}


void __fastcall WarBoardBackgroundComponent_BackgroundDiffInfo___ctor(
        WarBoardBackgroundComponent_BackgroundDiffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}