void WarBoardBackgroundComponent___ctor(WarBoardBackgroundComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D29FC0 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
    byte_4D29FC0 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v3,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent___ctor__);
  this->fields.bgAnimationObjDic = (struct System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.bgAnimationObjDic, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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


void WarBoardBackgroundComponent__ChangeMaskSpriteAlpha(
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

  if ( (byte_4D29FBC & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&UICommonButtonColor_TypeInfo);
    byte_4D29FBC = 1;
  }
  maskSprite = (UnityEngine_Object_o *)this->fields.maskSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(maskSprite, 0, 0) )
  {
    v9 = this->fields.maskSprite;
    if ( !v9 )
      goto LABEL_16;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
    v11 = UICommonButtonColor_TypeInfo;
    if ( !UICommonButtonColor_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UICommonButtonColor_TypeInfo);
      v11 = UICommonButtonColor_TypeInfo;
    }
    v12 = TweenAlpha__Begin(gameObject, v11->static_fields->duration, alpha, 0);
    if ( immediate )
    {
      v13 = (UnityEngine_Object_o *)v12;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = (struct UISprite_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        if ( v13 )
        {
          TweenAlpha__set_value((TweenAlpha_o *)v13, alpha, 0);
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v13, 0, 0);
          return;
        }
LABEL_16:
        sub_1C942F0(v9, v8);
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
  UnityEngine_Object_o *v6; // x21
  bool v7; // w8
  Il2CppObject *Component_object; // x21
  bool v9; // w8

  if ( (byte_4D29FBD & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29FBD = 1;
  }
  result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
  if ( !result )
    goto LABEL_17;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)result,
         (Il2CppObject *)objName,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__ContainsKey__) )
  {
    result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
    if ( result )
      return (WarBoardBGEffectComponent_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              (System_Collections_Generic_Dictionary_object__object__o *)result,
                                              (Il2CppObject *)objName,
                                              (const MethodInfo_3520B74 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__get_Item__);
LABEL_17:
    sub_1C942F0(result, objName);
  }
  v6 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(objName, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(v6, 0, 0);
  result = 0;
  if ( !v7 )
  {
    if ( !v6 )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v6,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_WarBoardBGEffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
    result = 0;
    if ( !v9 )
    {
      result = (WarBoardBGEffectComponent_o *)this->fields.bgAnimationObjDic;
      if ( !result )
        goto LABEL_17;
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)result,
        (Il2CppObject *)objName,
        Component_object,
        (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__WarBoardBGEffectComponent__Add__);
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

  if ( (byte_4D29FBA & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
    byte_4D29FBA = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.bgDiffList;
  if ( result )
  {
    if ( SLODWORD(result[1].klass) >= idx + 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)result,
               idx,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Item__);
      if ( !Item )
        sub_1C942F0(0, v7);
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
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *bgDiffList; // x9
  WarBoardCommonReleaseMaster_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  _BOOL8 IsOpen; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D29FB9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    byte_4D29FB9 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( this->fields.bgDiffList )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    bgDiffList = (System_Collections_Generic_List_object__o *)this->fields.bgDiffList;
    if ( !bgDiffList )
      sub_1C942F0(Master_object, v4);
    v6 = (WarBoardCommonReleaseMaster_o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      bgDiffList,
      (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_WarBoardBackgroundComponent_BackgroundDiffInfo__GetEnumerator__);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v12,
             (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__MoveNext__);
      if ( !v7 )
        break;
      if ( !v12.fields._current )
        sub_1C942F0(v7, v8);
      if ( !v6 )
        sub_1C942F0(v7, v8);
      v9 = *(UnityEngine_GameObject_o **)((char *)&v12.fields._current->klass + (unsigned __int64)&word_10);
      IsOpen = WarBoardCommonReleaseMaster__IsOpen(
                 v6,
                 *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&off_18),
                 0);
      if ( !v9 )
        sub_1C942F0(IsOpen, v11);
      UnityEngine_GameObject__SetActive(v9, !IsOpen, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_WarBoardBackgroundComponent_BackgroundDiffInfo__Dispose__);
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
  WarBoardBGEffectComponent_o *WarBoardBGEffectComponent; // x20
  int32_t IsStop; // w22
  WarBoardData_o *bgAnimationObjDic; // x21
  bool v11; // zf
  WarBoardBackgroundComponent_o *v12; // x22
  const MethodInfo *v13; // x2
  System_String_o *AnimationName; // x21
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_4D29FBE & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardBackgroundComponent_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D29FBE = 1;
  }
  if ( !entity )
    goto LABEL_18;
  ObjectName = WarBoardEventScriptEntity__GetObjectName(entity, 0);
  if ( !System_String__IsNullOrEmpty(ObjectName, 0) )
  {
    v6 = WarBoardEventScriptEntity__GetObjectName(entity, 0);
    WarBoardBGEffectComponent = WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(v4, v6, v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)WarBoardBGEffectComponent, 0, 0) )
    {
      IsStop = WarBoardEventScriptEntity__GetIsStop(entity, 0);
      this = (WarBoardBackgroundComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( this )
      {
        bgAnimationObjDic = (WarBoardData_o *)this[6].fields.bgAnimationObjDic;
        this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetObjectName(entity, 0);
        v11 = IsStop == 1;
        v12 = this;
        if ( v11 )
        {
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
        else
        {
          this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetAnimationName(entity, 0);
          if ( bgAnimationObjDic )
          {
            WarBoardData__SetBgAnimationInfo(bgAnimationObjDic, (System_String_o *)v12, (System_String_o *)this, 0);
            AnimationName = WarBoardEventScriptEntity__GetAnimationName(entity, 0);
            this = (WarBoardBackgroundComponent_o *)WarBoardEventScriptEntity__GetPlayAfterCurrentAnim(entity, 0);
            if ( WarBoardBGEffectComponent )
            {
              WarBoardBGEffectComponent__PlayAnimation(WarBoardBGEffectComponent, AnimationName, (_DWORD)this == 1, v15);
              return;
            }
          }
        }
      }
LABEL_18:
      sub_1C942F0(this, entity);
    }
  }
}


void WarBoardBackgroundComponent__ResumeBgAnimation(
        WarBoardBackgroundComponent_o *this,
        System_String_o *objName,
        System_String_o *animName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *WarBoardBGEffectComponent; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4D29FBF & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D29FBF = 1;
  }
  WarBoardBGEffectComponent = (UnityEngine_Object_o *)WarBoardBackgroundComponent__FindWarBoardBGEffectComponent(
                                                        this,
                                                        objName,
                                                        (const MethodInfo *)animName);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(WarBoardBGEffectComponent, 0, 0);
  if ( !v8 )
  {
    if ( !WarBoardBGEffectComponent )
      sub_1C942F0(v8, v9);
    WarBoardBGEffectComponent__ResumeAnimation((WarBoardBGEffectComponent_o *)WarBoardBGEffectComponent, animName, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardBackgroundComponent__SetDispBgDiff(
        WarBoardBackgroundComponent_o *this,
        int32_t idx,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_Object_o *BgDiffByIndex; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x21
  System_String_o **v11; // x8
  System_String_o *v12; // x19

  if ( (byte_4D29FBB & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_24977/*"wall_0"*/);
    sub_1C94098(&StringLiteral_24978/*"wall_1"*/);
    byte_4D29FBB = 1;
  }
  BgDiffByIndex = (UnityEngine_Object_o *)WarBoardBackgroundComponent__GetBgDiffByIndex(
                                            this,
                                            idx,
                                            (const MethodInfo *)isDisp);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(BgDiffByIndex, 0, 0);
  if ( !v8 )
  {
    if ( !BgDiffByIndex )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)BgDiffByIndex,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_SimpleAnimation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( v8 )
    {
      v11 = (System_String_o **)&StringLiteral_24978/*"wall_1"*/;
      if ( !isDisp )
        v11 = (System_String_o **)&StringLiteral_24977/*"wall_0"*/;
      if ( Component_object )
      {
        v12 = *v11;
        SimpleAnimation__Rewind_67365108((SimpleAnimation_o *)Component_object, *v11, 0);
        SimpleAnimation__Play_67362784((SimpleAnimation_o *)Component_object, v12, 0);
        return;
      }
LABEL_15:
      sub_1C942F0(v8, v9);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)BgDiffByIndex, isDisp, 0);
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