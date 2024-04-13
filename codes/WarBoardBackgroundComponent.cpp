void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E6954 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v5, v6, v7);
    byte_42E6954 = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v8,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bgAnimationObjDic,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v12; // x1
  struct UISprite_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v15; // x8
  TweenAlpha_o *v16; // x0
  UnityEngine_Object_o *v17; // x20

  if ( (byte_42E6950 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, immediate, (_DWORD)method, v4);
    sub_B5D5C4(&UICommonButtonColor_TypeInfo, v8, v9, v10);
    byte_42E6950 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v13 = this->fields.maskSprite;
    if ( !v13 )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
    v15 = UICommonButtonColor_TypeInfo;
    if ( (BYTE3(UICommonButtonColor_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v15 = UICommonButtonColor_TypeInfo;
    }
    v16 = TweenAlpha__Begin(gameObject, v15->static_fields->duration, alpha, 0LL);
    if ( immediate )
    {
      v17 = (UnityEngine_Object_o *)v16;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v13 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
      if ( ((unsigned __int8)v13 & 1) != 0 )
      {
        if ( v17 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v17, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0LL);
          return;
        }
LABEL_19:
        sub_B5D69C(v13, v12);
      }
    }
  }
}


WarBoardBGEffectComponent_o *__fastcall WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  WarBoardBGEffectComponent_o *result; // x0
  UnityEngine_Object_o *v19; // x21
  bool v20; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v22; // w8

  if ( (byte_42E6951 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__,
      (_DWORD)objName,
      (_DWORD)method,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__,
      v6,
      v7,
      v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E6951 = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
         (System_Xml_XmlQualifiedName_o *)objName,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)result,
                                              (System_Type_o *)objName,
                                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_19:
    sub_B5D69C(result, objName);
  }
  v19 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
  result = 0LL;
  if ( !v20 )
  {
    if ( !v19 )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v19,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( !v22 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
        (System_Xml_XmlQualifiedName_o *)objName,
        (System_Xml_Schema_XmlSchemaObject_o *)Component_srcLineSprite,
        (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
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
  __int64 v3; // x3
  WarBoardBackgroundComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__o *bgDiffList; // x20
  int size; // w8
  WarBoardBackgroundComponent_BackgroundDiffInfo_o *v12; // x8

  v5 = this;
  if ( (byte_42E694E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      idx,
      (_DWORD)method,
      v3);
    this = (WarBoardBackgroundComponent_o *)sub_B5D5C4(
                                              &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__,
                                              v6,
                                              v7,
                                              v8);
    byte_42E694E = 1;
  }
  bgDiffList = v5->fields.bgDiffList;
  if ( !bgDiffList )
    return 0LL;
  size = bgDiffList->fields._size;
  if ( size < idx + 1 )
    return 0LL;
  if ( size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v12 = bgDiffList->fields._items->m_Items[idx];
  if ( !v12 )
    sub_B5D69C(this, *(_QWORD *)&idx);
  return v12->fields.bgDiffObj;
}


void __fastcall WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v23; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppClass *klass; // x20
  _BOOL8 IsOpen; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E694D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v17,
      v18,
      v19);
    byte_42E694D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  if ( this->fields.bgDiffList )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_B5D69C(Master_WarQuestSelectionMaster, v21);
    v23 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v29,
      bgDiffList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v29,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v24 )
        break;
      if ( !v29.fields.current )
        sub_B5D69C(v24, v25);
      if ( !v23 )
        sub_B5D69C(v24, v25);
      klass = v29.fields.current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v23, (int32_t)v29.fields.current[1].monitor, 0LL);
      if ( !klass )
        sub_B5D69C(IsOpen, v28);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v29,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardBackgroundComponent_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_String_o *ObjectName; // x0
  System_String_o *v13; // x0
  const MethodInfo *v14; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgDiffList; // x21
  bool v18; // zf
  System_String_o *v19; // x22
  const MethodInfo *v20; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v22; // x3

  v5 = this;
  if ( (byte_42E6952 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)entity, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7, v8);
    this = (WarBoardBackgroundComponent_o *)sub_B5D5C4(&StringLiteral_1/*""*/, v9, v10, v11);
    byte_42E6952 = 1;
  }
  if ( !entity )
    goto LABEL_19;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v13 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v5, v13, v14);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgDiffList = (WarBoardData_o *)this[7].fields.bgDiffList;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v18 = IsStop == 1;
        v19 = (System_String_o *)this;
        if ( v18 )
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
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v20);
              return;
            }
          }
        }
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( bgDiffList )
          {
            WarBoardData__SetBgAnimationInfo(bgDiffList, v19, (System_String_o *)this, 0LL);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v22);
              return;
            }
          }
        }
      }
LABEL_19:
      sub_B5D69C(this, entity);
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

  if ( (byte_42E6953 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)objName, (_DWORD)animName, method);
    byte_42E6953 = 1;
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
      sub_B5D69C(v8, v9);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_String_o **v20; // x8
  System_String_o *v21; // x19

  if ( (byte_42E694F & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, idx, isDisp, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23504/*"wall_0"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23505/*"wall_1"*/, v13, v14, v15);
    byte_42E694F = 1;
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
  v17 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0LL, 0LL);
  if ( !v17 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_17;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)BgDiffByIndex,
                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
    if ( v17 )
    {
      v20 = (System_String_o **)&StringLiteral_23505/*"wall_1"*/;
      if ( !isDisp )
        v20 = (System_String_o **)&StringLiteral_23504/*"wall_0"*/;
      if ( Component_srcLineSprite )
      {
        v21 = *v20;
        SimpleAnimation__Rewind_16678212((SimpleAnimation_o *)Component_srcLineSprite, *v20, 0LL);
        SimpleAnimation__Play_16676044((SimpleAnimation_o *)Component_srcLineSprite, v21, 0LL);
        return;
      }
LABEL_17:
      sub_B5D69C(v17, v18);
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