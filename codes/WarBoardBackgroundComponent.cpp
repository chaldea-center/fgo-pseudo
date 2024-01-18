void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_41867DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v3);
    byte_41867DE = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v4,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgAnimationObjDic,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
        WarBoardBackgroundComponent_o *this,
        float alpha,
        bool immediate,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v9; // x1
  struct UISprite_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v12; // x8
  TweenAlpha_o *v13; // x0
  UnityEngine_Object_o *v14; // x20

  if ( (byte_41867DA & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, immediate);
    sub_B2C35C(&UICommonButtonColor_TypeInfo, v7);
    byte_41867DA = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v10 = this->fields.maskSprite;
    if ( !v10 )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
    v12 = UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v12 = UICommonButtonColor_TypeInfo;
    }
    v13 = TweenAlpha__Begin(gameObject, v12->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v14 = (UnityEngine_Object_o *)v13;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( v14 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v14, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v14, 0, 0LL);
          return;
        }
LABEL_19:
        sub_B2C434(v10, v9);
      }
    }
  }
}


WarBoardBGEffectComponent_o *__fastcall WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardBGEffectComponent_o *result; // x0
  UnityEngine_Object_o *v10; // x21
  bool v11; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v13; // w8

  if ( (byte_41867DB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__, objName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_41867DB = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
         (System_Xml_XmlQualifiedName_o *)objName,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)result,
                                              (System_Type_o *)objName,
                                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_19:
    sub_B2C434(result, objName);
  }
  v10 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  result = 0LL;
  if ( !v11 )
  {
    if ( !v10 )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v10,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v13 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( !v13 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
        (System_Xml_XmlQualifiedName_o *)objName,
        (System_Xml_Schema_XmlSchemaObject_o *)Component_srcLineSprite,
        (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__o *bgDiffList; // x20
  int size; // w8
  WarBoardBackgroundComponent_BackgroundDiffInfo_o *v9; // x8

  v4 = this;
  if ( (byte_41867D8 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      *(_QWORD *)&idx);
    this = (WarBoardBackgroundComponent_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__,
                                              v5);
    byte_41867D8 = 1;
  }
  bgDiffList = v4->fields.bgDiffList;
  if ( !bgDiffList )
    return 0LL;
  size = bgDiffList->fields._size;
  if ( size < idx + 1 )
    return 0LL;
  if ( size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v9 = bgDiffList->fields._items->m_Items[idx];
  if ( !v9 )
    sub_B2C434(this, *(_QWORD *)&idx);
  return v9->fields.bgDiffObj;
}


void __fastcall WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v11; // x19
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_41867D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v7);
    byte_41867D7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( this->fields.bgDiffList )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_B2C434(Master_WarQuestSelectionMaster, v9);
    v11 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      bgDiffList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v17,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v12 )
        break;
      if ( !v17.fields.current )
        sub_B2C434(v12, v13);
      if ( !v11 )
        sub_B2C434(v12, v13);
      klass = v17.fields.current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v11, (int32_t)v17.fields.current[1].monitor, 0LL);
      if ( !klass )
        sub_B2C434(IsOpen, v16);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v17,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *ObjectName; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgDiffList; // x21
  bool v13; // zf
  System_String_o *v14; // x22
  const MethodInfo *v15; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_41867DC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, entity);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    this = (WarBoardBackgroundComponent_o *)sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_41867DC = 1;
  }
  if ( !entity )
    goto LABEL_19;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v8 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v8, v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgDiffList = (WarBoardData_o *)this[7].fields.bgDiffList;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v13 = IsStop == 1;
        v14 = (System_String_o *)this;
        if ( v13 )
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
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v15);
              return;
            }
          }
        }
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( bgDiffList )
          {
            WarBoardData__SetBgAnimationInfo(bgDiffList, v14, (System_String_o *)this, 0LL);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v17);
              return;
            }
          }
        }
      }
LABEL_19:
      sub_B2C434(this, entity);
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

  if ( (byte_41867DD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, objName);
    byte_41867DD = 1;
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
      sub_B2C434(v8, v9);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o **v14; // x8
  System_String_o *v15; // x19

  if ( (byte_41867D9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, *(_QWORD *)&idx);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23195/*"wall_0"*/, v8);
    sub_B2C35C(&StringLiteral_23196/*"wall_1"*/, v9);
    byte_41867D9 = 1;
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
  v11 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_17;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)BgDiffByIndex,
                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v11 )
    {
      v14 = (System_String_o **)&StringLiteral_23196/*"wall_1"*/;
      if ( !isDisp )
        v14 = (System_String_o **)&StringLiteral_23195/*"wall_0"*/;
      if ( Component_srcLineSprite )
      {
        v15 = *v14;
        SimpleAnimation__Rewind_16488788((SimpleAnimation_o *)Component_srcLineSprite, *v14, 0LL);
        SimpleAnimation__Play_16486620((SimpleAnimation_o *)Component_srcLineSprite, v15, 0LL);
        return;
      }
LABEL_17:
      sub_B2C434(v11, v12);
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