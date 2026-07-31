void WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935E1B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
    byte_5935E1B = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgAnimationObjDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void WarBoardBackgroundComponent__ChangeColorDarkness(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.5, immediate, method);
}


void WarBoardBackgroundComponent__ChangeColorNormal(
        WarBoardBackgroundComponent_o *this,
        bool immediate,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(this, 0.0, immediate, method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
        WarBoardBackgroundComponent_o *this,
        float alpha,
        bool immediate,
        const MethodInfo *method)
{
  UnityEngine_Object_o *maskSprite; // x21
  __int64 v8; // x1
  struct UISprite_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_GameObject_o *gameObject; // x20
  UICommonButtonColor_c *v13; // x8
  TweenAlpha_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *v17; // x20

  if ( (byte_5935E17 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UICommonButtonColor_TypeInfo);
    byte_5935E17 = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, immediate, method);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    v9 = this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
    v13 = UICommonButtonColor_TypeInfo;
    if ( !*(&UICommonButtonColor_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo, v10, v11);
      v13 = UICommonButtonColor_TypeInfo;
    }
    v14 = TweenAlpha__Begin(gameObject, v13->static_fields->duration, alpha, 0);
    if ( immediate )
    {
      v17 = (UnityEngine_Object_o *)v14;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
      v9 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v17 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v17, alpha, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v17, 0, 0);
          return;
        }
LABEL_16:
        sub_21FFECC(v9, v8);
      }
    }
  }
}


WarBoardBGEffectComponent_o *WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        const MethodInfo *method)
{
  WarBoardBGEffectComponent_o *result; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *v8; // x21
  bool v9; // w8
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *Component_object; // x21
  bool v13; // w8

  if ( (byte_5935E18 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E18 = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)result,
         (Il2CppObject *)objName,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)result,
                                              (Il2CppObject *)objName,
                                              (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_17:
    sub_21FFECC(result, objName);
  }
  v8 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  v9 = UnityEngine_Object__op_Equality(v8, 0, 0);
  result = 0;
  if ( !v9 )
  {
    if ( !v8 )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v8,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
    v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( !v13 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_17;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)result,
        (Il2CppObject *)objName,
        Component_object,
        (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
      return (WarBoardBGEffectComponent_o *)Component_object;
    }
  }
  return result;
}


UnityEngine_GameObject_o *WarBoardBackgroundComponent__GetBgDiffByIndex(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *result; // x0
  Il2CppObject *Item; // x0
  __int64 v7; // x1

  if ( (byte_5935E15 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
    byte_5935E15 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.bgDiffList;
  if ( result )
  {
    if ( SLODWORD(result[1].klass) >= idx + 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)result,
               idx,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
      if ( !Item )
        sub_21FFECC(0, v7);
      return (UnityEngine_GameObject_o *)Item[1].klass;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void WarBoardBackgroundComponent__InitBgDiff(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__o *bgDiffList; // x8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x9
  WarBoardCommonReleaseMaster_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  _BOOL8 IsOpen; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5935E14 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    byte_5935E14 = 1;
  }
  bgDiffList = this->fields.bgDiffList;
  memset(&v14, 0, sizeof(v14));
  if ( bgDiffList )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    v7 = (System_Collections_Generic_List_object__o *)this->fields.bgDiffList;
    if ( !v7 )
      sub_21FFECC(Master_object, v6);
    v8 = (WarBoardCommonReleaseMaster_o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      v7,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v9 )
        break;
      if ( !v14.fields._current )
        sub_21FFECC(v9, v10);
      if ( !v8 )
        sub_21FFECC(v9, v10);
      v11 = *(UnityEngine_GameObject_o **)((char *)&v14.fields._current->klass + (unsigned __int64)&word_10);
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(
                 v8,
                 *(_DWORD *)((char *)&v14.fields._current->klass + (unsigned __int64)off_18),
                 0);
      if ( !v11 )
        sub_21FFECC(IsOpen, v13);
      UnityEngine_GameObject__SetActive(v11, !IsOpen, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
  }
}


void WarBoardBackgroundComponent__PlayBgAnimation(
        WarBoardBackgroundComponent_o *this,
        WarBoardEventScriptEntity_o *entity,
        const MethodInfo *method)
{
  WarBoardBackgroundComponent_o *v4; // x20
  System_String_o *ObjectName; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w21
  WarBoardData_o *bgAnimationObjDic; // x21
  const MethodInfo *v13; // x2
  WarBoardData_o *v14; // x21
  System_String_o *v15; // x22
  System_String_o *AnimationName; // x21
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_5935E19 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardBackgroundComponent_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5935E19 = 1;
  }
  if ( !entity )
    goto LABEL_18;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
  {
    v6 = WarBoardEventScriptEntity__GetObjectName(entity, 0);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v6, v7);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0, 0) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( IsStop == 1 )
      {
        if ( this )
        {
          bgAnimationObjDic = (WarBoardData_o *)this[6].fields.bgAnimationObjDic;
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0);
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(
              bgAnimationObjDic,
              (System_String_o *)this,
              (System_String_o *)StringLiteral_1/*""*/,
              0);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__StopAnimation(WarBoardBGEffectComponent, 0, v13);
              return;
            }
          }
        }
      }
      else if ( this )
      {
        v14 = (WarBoardData_o *)this[6].fields.bgAnimationObjDic;
        v15 = WarBoardEventScriptEntity__GetObjectName(entity, 0);
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0);
        if ( v14 )
        {
          WarBoardData__SetBgAnimationInfo(v14, v15, (System_String_o *)this, 0);
          AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0);
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0);
          if ( WarBoardBGEffectComponent )
          {
            WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v17);
            return;
          }
        }
      }
LABEL_18:
      sub_21FFECC(this, entity);
    }
  }
}


void WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *WarBoardBGEffectComponent; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_5935E1A & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5935E1A = 1;
  }
  WarBoardBGEffectComponent = (UnityEngine_Object_o *)WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                                        this,
                                                        objName,
                                                        (const MethodInfo *)animName);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality(WarBoardBGEffectComponent, 0, 0);
  if ( !v10 )
  {
    if ( !WarBoardBGEffectComponent )
      sub_21FFECC(v10, v11);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBackgroundComponent__SetDispBgDiff(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Component_object; // x21
  System_String_o **v15; // x8
  System_String_o *v16; // x19

  if ( (byte_5935E16 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26047/*"wall_0"*/);
    sub_21FFC50(&StringLiteral_26048/*"wall_1"*/);
    byte_5935E16 = 1;
  }
  BgDiffByIndex = (UnityEngine_Object_o *)WarBoardBackgroundComponent__GetBgDiffByIndex(
                                            this,
                                            idx,
                                            (const MethodInfo *)isDisp);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0, 0);
  if ( !v10 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)BgDiffByIndex,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
    v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( !v10 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BgDiffByIndex, isDisp, 0);
      return;
    }
    if ( !Component_object )
LABEL_15:
      sub_21FFECC(v10, v11);
    v15 = (System_String_o **)&StringLiteral_26048/*"wall_1"*/;
    if ( !isDisp )
      v15 = (System_String_o **)&StringLiteral_26047/*"wall_0"*/;
    v16 = *v15;
    SimpleAnimation__Rewind_78341184((SimpleAnimation_o *)Component_object, *v15, 0);
    SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, v16, 0);
  }
}


UITexture_o *WarBoardBackgroundComponent__get_BoardBackground(
        WarBoardBackgroundComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.boardBg;
}


void WarBoardBackgroundComponent_BackgroundDiffInfo___ctor(
        WarBoardBackgroundComponent_BackgroundDiffInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}