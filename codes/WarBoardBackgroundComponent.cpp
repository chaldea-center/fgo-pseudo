void __fastcall WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F8C4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo, v6);
    byte_40F8C4C = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                       System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo,
                                                                                       method,
                                                                                       v2,
                                                                                       v3,
                                                                                       v4);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bgAnimationObjDic,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v11; // x8
  TweenAlpha_o *v12; // x0
  TweenAlpha_o *v13; // x20

  if ( (byte_40F8C48 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, immediate);
    sub_B16FFC(&UICommonButtonColor_TypeInfo, v7);
    byte_40F8C48 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_19;
    gameObject = UnityEngine_Component__get_gameObject(v9, 0LL);
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
      v13 = v12;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
      {
        if ( v13 )
        {
          TweenAlpha__set_value(v13, alpha, 0LL);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0LL);
          return;
        }
LABEL_19:
        sub_B170D4();
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
  struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *bgAnimationObjDic; // x0
  struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *v10; // x0
  WarBoardBGEffectComponent_o *result; // x0
  UnityEngine_Object_o *v12; // x21
  bool v13; // w8
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  bool v15; // w8
  struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *v16; // x0

  if ( (byte_40F8C49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__, objName);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40F8C49 = 1;
  }
  bgAnimationObjDic = this->fields.bgAnimationObjDic;
  if ( !bgAnimationObjDic )
    goto LABEL_19;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationObjDic,
         (System_Xml_XmlQualifiedName_o *)objName,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    v10 = this->fields.bgAnimationObjDic;
    if ( v10 )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                              (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10,
                                              (System_Type_o *)objName,
                                              (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_19:
    sub_B170D4();
  }
  v12 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  result = 0LL;
  if ( !v13 )
  {
    if ( !v12 )
      goto LABEL_19;
    Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        (UnityEngine_GameObject_o *)v12,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
    result = 0LL;
    if ( !v15 )
    {
      v16 = this->fields.bgAnimationObjDic;
      if ( !v16 )
        goto LABEL_19;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16,
        (System_Xml_XmlQualifiedName_o *)objName,
        (System_Xml_Schema_XmlSchemaObject_o *)Component_srcLineSprite,
        (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__o *bgDiffList; // x20
  int size; // w8
  WarBoardBackgroundComponent_BackgroundDiffInfo_o *v9; // x8

  if ( (byte_40F8C46 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__,
      *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__, v5);
    byte_40F8C46 = 1;
  }
  bgDiffList = this->fields.bgDiffList;
  if ( !bgDiffList )
    return 0LL;
  size = bgDiffList->fields._size;
  if ( size < idx + 1 )
    return 0LL;
  if ( size <= (unsigned int)idx )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = bgDiffList->fields._items->m_Items[idx];
  if ( !v9 )
    sub_B170D4();
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
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v10; // x19
  Il2CppClass *klass; // x20
  bool IsOpen; // w0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F8C45 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__,
      v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__,
      v7);
    byte_40F8C45 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  if ( this->fields.bgDiffList )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_B170D4();
    v10 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v13,
      bgDiffList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v13,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__) )
    {
      if ( !v13.fields.current )
        sub_B170D4();
      if ( !v10 )
        sub_B170D4();
      klass = v13.fields.current[1].klass;
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(v10, (int32_t)v13.fields.current[1].monitor, 0LL);
      if ( !klass )
        sub_B170D4();
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)klass, !IsOpen, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v13,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void __fastcall WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_String_o *ObjectName; // x0
  System_String_o *v8; // x0
  const MethodInfo *v9; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x21
  System_String_o *v14; // x0
  bool v15; // zf
  System_String_o *v16; // x22
  const MethodInfo *v17; // x2
  System_String_o *AnimationName; // x0
  System_String_o *v19; // x21
  int32_t PlayAfterCurrentAnim; // w0
  const MethodInfo *v21; // x3

  if ( (byte_40F8C4A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, entity);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40F8C4A = 1;
  }
  if ( !entity )
    goto LABEL_19;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0LL) )
  {
    v8 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(this, v8, v9);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0LL);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( Instance )
      {
        monitor = (WarBoardData_o *)Instance[4].monitor;
        v14 = WarBoardEventScriptEntity__GetObjectName(entity, 0LL);
        v15 = IsStop == 1;
        v16 = v14;
        if ( v15 )
        {
          if ( monitor )
          {
            WarBoardData__SetBgAnimationInfo(monitor, v14, (System_String_o *)StringLiteral_1, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v17);
              return;
            }
          }
        }
        else
        {
          AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
          if ( monitor )
          {
            WarBoardData__SetBgAnimationInfo(monitor, v16, AnimationName, 0LL);
            v19 = WarBoardEventScriptEntity__GetAnimationName(entity, 0LL);
            PlayAfterCurrentAnim = WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0LL);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, v19, PlayAfterCurrentAnim == 1, v21);
              return;
            }
          }
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


void __fastcall WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40F8C4B & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, objName);
    byte_40F8C4B = 1;
  }
  WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                this,
                                objName,
                                (const MethodInfo *)animName);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0LL, 0LL) )
  {
    if ( !WarBoardBGEffectComponent )
      sub_B170D4();
    WarBoardBGEffectComponent__ResumeAnimation(WarBoardBGEffectComponent, animName, v8);
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
  UnityEngine_GameObject_o *BgDiffByIndex; // x20
  SimpleAnimation_o *Component_srcLineSprite; // x21
  System_String_o **v12; // x8
  System_String_o *v13; // x19

  if ( (byte_40F8C47 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___, *(_QWORD *)&idx);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23101, v8);
    sub_B16FFC(&StringLiteral_23102, v9);
    byte_40F8C47 = 1;
  }
  BgDiffByIndex = WarBoardBackgroundComponent__GetBgDiffByIndex(this, idx, (const MethodInfo *)isDisp);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)BgDiffByIndex, 0LL, 0LL) )
  {
    if ( !BgDiffByIndex )
      goto LABEL_17;
    Component_srcLineSprite = (SimpleAnimation_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                     BgDiffByIndex,
                                                     (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      v12 = (System_String_o **)&StringLiteral_23102;
      if ( !isDisp )
        v12 = (System_String_o **)&StringLiteral_23101;
      if ( Component_srcLineSprite )
      {
        v13 = *v12;
        SimpleAnimation__Rewind_16382624(Component_srcLineSprite, *v12, 0LL);
        SimpleAnimation__Play_16380456(Component_srcLineSprite, v13, 0LL);
        return;
      }
LABEL_17:
      sub_B170D4();
    }
    UnityEngine_GameObject__SetActive(BgDiffByIndex, isDisp, 0LL);
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