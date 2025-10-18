void ActiveAnimation___ctor(ActiveAnimation_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C4766B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDelegate__TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4766B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDelegate__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDelegate___ctor__);
  this->fields.onFinished = (struct System_Collections_Generic_List_EventDelegate__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.onFinished, (int32_t)v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.mClip = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mClip, v6, v7, v8);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ActiveAnimation__Finish(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  UnityEngine_Animation_o *v4; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  UnityEngine_AnimationState_o *v15; // x21
  int32_t mLastDirection; // w8
  float length; // s0
  UnityEngine_Object_o *mAnimator; // x20
  float v19; // s0
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x20
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  if ( (byte_4C47664 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47664 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    v4 = this->fields.mAnim;
    if ( v4 )
    {
      Enumerator = UnityEngine_Animation__GetEnumerator(v4, 0);
      if ( !Enumerator )
        sub_1C372B4(0);
      while ( 1 )
      {
        klass = Enumerator->klass;
        v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          p_offset = &klass->_1.interfaceOffsets->offset;
          while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v7;
            p_offset += 4;
            if ( !v7 )
              goto LABEL_12;
          }
          v9 = (__int64)&klass->vtable[*p_offset];
        }
        else
        {
LABEL_12:
          v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(
                Enumerator,
                *(_QWORD *)(v9 + 8))
            & 1) == 0 )
          break;
        v10 = Enumerator->klass;
        v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
        if ( *(_WORD *)&Enumerator->klass->_2.rank )
        {
          v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
          while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v11;
            v12 += 2;
            if ( !v11 )
              goto LABEL_19;
          }
          v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
        }
        else
        {
LABEL_19:
          v13 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
        }
        v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                                Enumerator,
                                                *(_QWORD *)(v13 + 8));
        v15 = v14;
        if ( v14 && v14->klass != UnityEngine_AnimationState_TypeInfo )
        {
          sub_1C37574(v14);
LABEL_48:
          sub_1C372B4(v14);
        }
        mLastDirection = this->fields.mLastDirection;
        if ( mLastDirection == -1 )
        {
          if ( !v14 )
            sub_1C372B4(0);
          UnityEngine_AnimationState__set_time(v14, 0.0, 0);
        }
        else if ( mLastDirection == 1 )
        {
          if ( !v14 )
            goto LABEL_48;
          length = UnityEngine_AnimationState__get_length(v14, 0);
          UnityEngine_AnimationState__set_time(v15, length, 0);
        }
      }
      v20 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
      if ( v20 )
      {
        v21 = *(_QWORD *)v20;
        v22 = v20;
        v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
        {
          v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
          {
            --v23;
            v24 += 4;
            if ( !v23 )
              goto LABEL_41;
          }
          v25 = v21 + 16LL * *v24 + 312;
        }
        else
        {
LABEL_41:
          v25 = sub_1C87870(v20, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      }
      v4 = this->fields.mAnim;
      if ( v4 )
      {
        UnityEngine_Animation__Sample(v4, 0);
        return;
      }
    }
LABEL_50:
    sub_1C372B4(v4);
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v4 = (UnityEngine_Animation_o *)this->fields.mAnimator;
    if ( !v4 )
      goto LABEL_50;
    v19 = 0.0;
    if ( this->fields.mLastDirection == 1 )
      v19 = 1.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)v4, this->fields.mClip, 0, v19, 0);
  }
}


void ActiveAnimation__Play(
        ActiveAnimation_o *this,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x21
  struct UnityEngine_Animation_o *IsNullOrEmpty; // x0
  UnityEngine_Object_o *mAnimator; // x21
  const MethodInfo *v10; // x1
  System_Collections_IEnumerator_o *Enumerator; // x21
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_AnimationState_c **v20; // x0
  UnityEngine_AnimationState_o *v21; // x23
  _BOOL8 v22; // x0
  System_String_o *name; // x0
  float v24; // s0
  float time; // s0
  float length; // s0
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x21
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  struct System_String_o **p_mClip; // x19
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  float v36; // s0

  if ( (byte_4C47668 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47668 = 1;
  }
  if ( !playDirection )
  {
    if ( this->fields.mLastDirection == 1 )
      playDirection = -1;
    else
      playDirection = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    IsNullOrEmpty = this->fields.mAnim;
    if ( !IsNullOrEmpty )
      goto LABEL_72;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)IsNullOrEmpty, 0, 0);
    IsNullOrEmpty = (struct UnityEngine_Animation_o *)System_String__IsNullOrEmpty(clipName, 0);
    if ( !this->fields.mAnim )
      goto LABEL_72;
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !UnityEngine_Animation__get_isPlaying(this->fields.mAnim, 0) )
      {
        IsNullOrEmpty = this->fields.mAnim;
        if ( !IsNullOrEmpty )
          goto LABEL_72;
        UnityEngine_Animation__Play(IsNullOrEmpty, 0);
      }
    }
    else if ( !UnityEngine_Animation__IsPlaying(this->fields.mAnim, clipName, 0) )
    {
      IsNullOrEmpty = this->fields.mAnim;
      if ( !IsNullOrEmpty )
        goto LABEL_72;
      UnityEngine_Animation__Play_71012036(IsNullOrEmpty, clipName, 0);
    }
    IsNullOrEmpty = this->fields.mAnim;
    if ( !IsNullOrEmpty )
LABEL_72:
      sub_1C372B4(IsNullOrEmpty);
    Enumerator = UnityEngine_Animation__GetEnumerator(IsNullOrEmpty, 0);
    if ( !Enumerator )
      sub_1C372B4(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v13;
          p_offset += 4;
          if ( !v13 )
            goto LABEL_32;
        }
        v15 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_32:
        v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(
              Enumerator,
              *(_QWORD *)(v15 + 8))
          & 1) == 0 )
      {
        v27 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
        if ( v27 )
        {
          v28 = *(_QWORD *)v27;
          v29 = v27;
          v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
          if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
          {
            v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
            {
              --v30;
              v31 += 4;
              if ( !v30 )
                goto LABEL_59;
            }
            v32 = v28 + 16LL * *v31 + 312;
          }
          else
          {
LABEL_59:
            v32 = sub_1C87870(v27, System_IDisposable_TypeInfo, 0);
          }
          (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
        }
        IsNullOrEmpty = this->fields.mAnim;
        this->fields.mLastDirection = playDirection;
        this->fields.mNotify = 1;
        if ( IsNullOrEmpty )
        {
          UnityEngine_Animation__Sample(IsNullOrEmpty, 0);
          return;
        }
        goto LABEL_72;
      }
      v16 = Enumerator->klass;
      v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
        while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v17;
          v18 += 2;
          if ( !v17 )
            goto LABEL_39;
        }
        v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
      }
      else
      {
LABEL_39:
        v19 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
      }
      v20 = (UnityEngine_AnimationState_c **)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                               Enumerator,
                                               *(_QWORD *)(v19 + 8));
      v21 = (UnityEngine_AnimationState_o *)v20;
      if ( v20 && *v20 != UnityEngine_AnimationState_TypeInfo )
      {
        sub_1C37574(v20);
LABEL_70:
        sub_1C372B4(v22);
      }
      v22 = System_String__IsNullOrEmpty(clipName, 0);
      if ( v22 )
      {
        if ( !v21 )
          goto LABEL_70;
LABEL_48:
        v24 = fabsf(UnityEngine_AnimationState__get_speed(v21, 0)) * (float)playDirection;
        UnityEngine_AnimationState__set_speed(v21, v24, 0);
        if ( playDirection == -1 )
        {
          if ( UnityEngine_AnimationState__get_time(v21, 0) == 0.0 )
          {
            length = UnityEngine_AnimationState__get_length(v21, 0);
            UnityEngine_AnimationState__set_time(v21, length, 0);
          }
        }
        else if ( playDirection == 1 )
        {
          time = UnityEngine_AnimationState__get_time(v21, 0);
          if ( time == UnityEngine_AnimationState__get_length(v21, 0) )
            UnityEngine_AnimationState__set_time(v21, 0.0, 0);
        }
      }
      else
      {
        if ( !v21 )
          sub_1C372B4(v22);
        name = UnityEngine_AnimationState__get_name(v21, 0);
        if ( System_String__op_Equality(name, clipName, 0) )
          goto LABEL_48;
      }
    }
  }
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    if ( UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this, 0)
      && ActiveAnimation__get_isPlaying(this, v10)
      && System_String__op_Equality(this->fields.mClip, clipName, 0) )
    {
      this->fields.mLastDirection = playDirection;
      return;
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
    this->fields.mClip = clipName;
    p_mClip = &this->fields.mClip;
    *((_BYTE *)p_mClip - 16) = 1;
    *((_DWORD *)p_mClip - 6) = playDirection;
    sub_1C36FFC((CGThumbnailListItem_o *)p_mClip, (int32_t)clipName, v34, v35);
    IsNullOrEmpty = (struct UnityEngine_Animation_o *)*(p_mClip - 1);
    if ( !IsNullOrEmpty )
      goto LABEL_72;
    v36 = 1.0;
    if ( playDirection == 1 )
      v36 = 0.0;
    UnityEngine_Animator__Play((UnityEngine_Animator_o *)IsNullOrEmpty, *p_mClip, 0, v36, 0);
  }
}


ActiveAnimation_o *ActiveAnimation__Play_49249300(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x24
  char *Component_object; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Animation_o **v15; // x24
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  int32_t v18; // w2
  int v19; // w9
  UnityEngine_Object_o *v20; // x19
  UnityEngine_GameObject_o *v21; // x23
  UnityEngine_Animation_c *klass; // x8
  UnityEngine_Animation_o *v23; // x23
  int v24; // w24
  int v25; // w25
  __int64 v26; // x0
  UnityEngine_Object_o *v27; // x19

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_4C47669 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C37058(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animation_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47669 = 1;
  }
  if ( !v10 )
    goto LABEL_39;
  gameObject = UnityEngine_Component__get_gameObject(v10, 0);
  if ( !NGUITools_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
  if ( !NGUITools__GetActive_49345096(gameObject, 0) )
  {
    if ( enableBeforePlay != 1 )
      return 0;
    v21 = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    NGUITools__SetActive(v21, 1, 0);
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_39;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    if ( !anim )
      goto LABEL_39;
    klass = anim[1].klass;
    v23 = anim;
    v24 = (_DWORD)klass - 1;
    if ( (int)klass >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        anim = (UnityEngine_Animation_o *)*((_QWORD *)&v23[1].monitor + v25);
        if ( !anim )
          goto LABEL_39;
        UIPanel__Refresh((UIPanel_o *)anim, 0);
        if ( v24 == v25 )
          break;
        if ( (unsigned int)++v25 >= LODWORD(v23[1].klass) )
          sub_1C372BC(v26);
      }
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  anim = (UnityEngine_Animation_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animation_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_39;
    anim = (UnityEngine_Animation_o *)UnityEngine_GameObject__AddComponent_object_(
                                        (UnityEngine_GameObject_o *)anim,
                                        (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object
    || (*((_QWORD *)Component_object + 7) = v10,
        v15 = (UnityEngine_Animation_o **)(Component_object + 56),
        sub_1C36FFC((CGThumbnailListItem_o *)(Component_object + 56), (int32_t)v10, v13, v14),
        v17 = *((_QWORD *)Component_object + 4),
        *((_DWORD *)Component_object + 17) = disableCondition,
        !v17) )
  {
LABEL_39:
    sub_1C372B4(anim);
  }
  v18 = *(_DWORD *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, v18, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v16);
  v20 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    anim = *v15;
    if ( *v15 )
    {
      UnityEngine_Animation__Sample(anim, 0);
      return (ActiveAnimation_o *)Component_object;
    }
    goto LABEL_39;
  }
  v27 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 10);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    anim = (UnityEngine_Animation_o *)*((_QWORD *)Component_object + 10);
    if ( anim )
    {
      UnityEngine_Animator__Update((UnityEngine_Animator_o *)anim, 0.0, 0);
      return (ActiveAnimation_o *)Component_object;
    }
    goto LABEL_39;
  }
  return (ActiveAnimation_o *)Component_object;
}


ActiveAnimation_o *ActiveAnimation__Play_49265216(
        UnityEngine_Animation_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return ActiveAnimation__Play_49249300(anim, clipName, playDirection, 0, 0, v4);
}


ActiveAnimation_o *ActiveAnimation__Play_49265228(
        UnityEngine_Animation_o *anim,
        int32_t playDirection,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  return ActiveAnimation__Play_49249300(anim, 0, playDirection, 0, 0, v3);
}


ActiveAnimation_o *ActiveAnimation__Play_49265248(
        UnityEngine_Animator_o *anim,
        System_String_o *clipName,
        int32_t playDirection,
        int32_t enableBeforePlay,
        int32_t disableCondition,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v10; // x22
  UnityEngine_GameObject_o *gameObject; // x24
  char *Component_object; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Animator_o **v15; // x24
  const MethodInfo *v16; // x3
  __int64 v17; // x8
  int32_t v18; // w2
  int v19; // w9
  UnityEngine_Object_o *v20; // x19
  UnityEngine_Animator_o *v21; // x19
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_Animator_c *klass; // x8
  UnityEngine_Animator_o *v24; // x23
  int v25; // w24
  int v26; // w25

  v10 = (UnityEngine_Component_o *)anim;
  if ( (byte_4C4766A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
    sub_1C37058(&Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDelegate__Clear__);
    sub_1C37058(&NGUITools_TypeInfo);
    anim = (UnityEngine_Animator_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4766A = 1;
  }
  if ( enableBeforePlay == 2 )
  {
LABEL_4:
    if ( !v10 )
      goto LABEL_42;
  }
  else
  {
    if ( !v10 )
      goto LABEL_42;
    gameObject = UnityEngine_Component__get_gameObject(v10, 0);
    if ( !NGUITools_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
    if ( !NGUITools__GetActive_49345096(gameObject, 0) )
    {
      if ( enableBeforePlay != 1 )
        return 0;
      v22 = UnityEngine_Component__get_gameObject(v10, 0);
      if ( !NGUITools_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
      NGUITools__SetActive(v22, 1, 0);
      anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
      if ( !anim
        || (anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51641852(
                                               (UnityEngine_GameObject_o *)anim,
                                               (const MethodInfo_313FDFC *)Method_UnityEngine_GameObject_GetComponentsInChildren_UIPanel___)) == 0 )
      {
LABEL_42:
        sub_1C372B4(anim);
      }
      klass = anim[1].klass;
      v24 = anim;
      v25 = (_DWORD)klass - 1;
      if ( (int)klass >= 1 )
      {
        v26 = 0;
        while ( 1 )
        {
          anim = (UnityEngine_Animator_o *)*((_QWORD *)&v24[1].monitor + v26);
          if ( !anim )
            goto LABEL_42;
          UIPanel__Refresh((UIPanel_o *)anim, 0);
          if ( v25 == v26 )
            goto LABEL_4;
          if ( (unsigned int)++v26 >= LODWORD(v24[1].klass) )
            sub_1C372BC(anim);
        }
      }
    }
  }
  Component_object = (char *)UnityEngine_Component__GetComponent_object_(
                               v10,
                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_ActiveAnimation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  anim = (UnityEngine_Animator_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)anim & 1) != 0 )
  {
    anim = (UnityEngine_Animator_o *)UnityEngine_Component__get_gameObject(v10, 0);
    if ( !anim )
      goto LABEL_42;
    anim = (UnityEngine_Animator_o *)UnityEngine_GameObject__AddComponent_object_(
                                       (UnityEngine_GameObject_o *)anim,
                                       (const MethodInfo_313F0F0 *)Method_UnityEngine_GameObject_AddComponent_ActiveAnimation___);
    Component_object = (char *)anim;
  }
  if ( !Component_object )
    goto LABEL_42;
  *((_QWORD *)Component_object + 10) = v10;
  v15 = (UnityEngine_Animator_o **)(Component_object + 80);
  sub_1C36FFC((CGThumbnailListItem_o *)(Component_object + 80), (int32_t)v10, v13, v14);
  v17 = *((_QWORD *)Component_object + 4);
  *((_DWORD *)Component_object + 17) = disableCondition;
  if ( !v17 )
    goto LABEL_42;
  v18 = *(_DWORD *)(v17 + 24);
  v19 = *(_DWORD *)(v17 + 28) + 1;
  *(_DWORD *)(v17 + 24) = 0;
  *(_DWORD *)(v17 + 28) = v19;
  if ( v18 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v17 + 16), 0, v18, 0);
  ActiveAnimation__Play((ActiveAnimation_o *)Component_object, clipName, playDirection, v16);
  v20 = (UnityEngine_Object_o *)*((_QWORD *)Component_object + 7);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    anim = (UnityEngine_Animator_o *)*((_QWORD *)Component_object + 7);
    if ( !anim )
      goto LABEL_42;
    UnityEngine_Animation__Sample((UnityEngine_Animation_o *)anim, 0);
  }
  else
  {
    v21 = *v15;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0, 0) )
    {
      anim = *v15;
      if ( !*v15 )
        goto LABEL_42;
      UnityEngine_Animator__Update(anim, 0.0, 0);
    }
  }
  return (ActiveAnimation_o *)Component_object;
}


void ActiveAnimation__Reset(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x20
  UnityEngine_Animator_o *v4; // x0
  System_Collections_IEnumerator_o *Enumerator; // x20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  System_Collections_IEnumerator_c *v10; // x8
  __int64 v11; // x9
  System_Collections_IEnumerator_c **v12; // x10
  __int64 v13; // x0
  UnityEngine_AnimationState_o *v14; // x0
  UnityEngine_AnimationState_o *v15; // x21
  int32_t mLastDirection; // w8
  float length; // s0
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x20
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  UnityEngine_Object_o *mAnimator; // x20
  float v25; // s0

  if ( (byte_4C47665 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47665 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
      return;
    v4 = this->fields.mAnimator;
    if ( v4 )
    {
      v25 = 0.0;
      if ( this->fields.mLastDirection == -1 )
        v25 = 1.0;
      UnityEngine_Animator__Play(v4, this->fields.mClip, 0, v25, 0);
      return;
    }
LABEL_49:
    sub_1C372B4(v4);
  }
  v4 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v4 )
    goto LABEL_49;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v4, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v7 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_12;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v9 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v9)(Enumerator, *(_QWORD *)(v9 + 8)) & 1) == 0 )
      break;
    v10 = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v12 = (System_Collections_IEnumerator_c **)&v10->_1.interfaceOffsets->offset;
      while ( *(v12 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        v12 += 2;
        if ( !v11 )
          goto LABEL_19;
      }
      v13 = (__int64)&v10->vtable[*(_DWORD *)v12 + 1];
    }
    else
    {
LABEL_19:
      v13 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v14 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(
                                            Enumerator,
                                            *(_QWORD *)(v13 + 8));
    v15 = v14;
    if ( v14 && v14->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C37574(v14);
LABEL_47:
      sub_1C372B4(v14);
    }
    mLastDirection = this->fields.mLastDirection;
    if ( mLastDirection == -1 )
    {
      if ( !v14 )
        sub_1C372B4(0);
      length = UnityEngine_AnimationState__get_length(v14, 0);
      UnityEngine_AnimationState__set_time(v15, length, 0);
    }
    else if ( mLastDirection == 1 )
    {
      if ( !v14 )
        goto LABEL_47;
      UnityEngine_AnimationState__set_time(v14, 0.0, 0);
    }
  }
  v18 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v18 )
  {
    v19 = *(_QWORD *)v18;
    v20 = v18;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v22 - 1) != System_IDisposable_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_34;
      }
      v23 = v19 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_34:
      v23 = sub_1C87870(v18, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  }
}


void ActiveAnimation__Start(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *eventReceiver; // x21
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C47666 & 1) == 0 )
  {
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47666 = 1;
  }
  eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0) )
  {
    onFinished = this->fields.onFinished;
    if ( !EventDelegate_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
    if ( EventDelegate__IsValid_49249072(onFinished, v4) )
    {
      this->fields.eventReceiver = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventReceiver, 0, v6, v7);
      this->fields.callWhenFinished = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callWhenFinished, 0, v8, v9);
    }
  }
}


void ActiveAnimation__Update(ActiveAnimation_o *this, const MethodInfo *method)
{
  float deltaTime; // s0
  UnityEngine_Object_o *mAnimator; // x20
  float v5; // s8
  UnityEngine_Animator_o *v6; // x0
  float v7; // s0
  const MethodInfo *v8; // x1
  UnityEngine_Object_o *mAnim; // x20
  System_Collections_IEnumerator_o *Enumerator; // x20
  char v11; // w24
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_AnimationState_o *v20; // x0
  UnityEngine_AnimationState_o *v21; // x21
  UnityEngine_Animation_o *v22; // x22
  System_String_o *name; // x0
  float v24; // s9
  float v25; // s0
  float time; // s0
  float length; // s0
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x20
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  UnityEngine_Object_o *current; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x1
  System_Collections_Generic_List_EventDelegate__o *onFinished; // x20
  UnityEngine_Object_o *eventReceiver; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t mDisableDirection; // w8
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C47667 & 1) == 0 )
  {
    sub_1C37058(&ActiveAnimation_TypeInfo);
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&EventDelegate_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&NGUITools_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47667 = 1;
  }
  deltaTime = RealTime__get_deltaTime(0);
  if ( deltaTime == 0.0 )
    return;
  mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
  v5 = deltaTime;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
  {
    v6 = this->fields.mAnimator;
    if ( !v6 )
      goto LABEL_75;
    v7 = -v5;
    if ( this->fields.mLastDirection != -1 )
      v7 = v5;
    UnityEngine_Animator__Update(v6, v7, 0);
    if ( !ActiveAnimation__get_isPlaying(this, v8) )
    {
      v6 = this->fields.mAnimator;
      if ( v6 )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)v6, 0, 0);
        goto LABEL_53;
      }
      goto LABEL_75;
    }
    return;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(mAnim, 0, 0) )
  {
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    return;
  }
  v6 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v6 )
    goto LABEL_75;
  Enumerator = UnityEngine_Animation__GetEnumerator((UnityEngine_Animation_o *)v6, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  v11 = 0;
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_23;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_23:
      v15 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v15)(Enumerator, *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_30;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1];
    }
    else
    {
LABEL_30:
      v19 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v20 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                            Enumerator,
                                            *(_QWORD *)(v19 + 8));
    v21 = v20;
    if ( !v20 )
      goto LABEL_73;
    if ( v20->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C37574(v20);
LABEL_73:
      sub_1C372B4(v20);
    }
    v22 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v20, 0);
    if ( !v22 )
      sub_1C372B4(name);
    if ( UnityEngine_Animation__IsPlaying(v22, name, 0) )
    {
      v24 = v5 * UnityEngine_AnimationState__get_speed(v21, 0);
      v25 = v24 + UnityEngine_AnimationState__get_time(v21, 0);
      UnityEngine_AnimationState__set_time(v21, v25, 0);
      if ( v24 >= 0.0 )
      {
        time = UnityEngine_AnimationState__get_time(v21, 0);
        if ( time < UnityEngine_AnimationState__get_length(v21, 0) )
        {
LABEL_41:
          v11 = 1;
        }
        else
        {
          length = UnityEngine_AnimationState__get_length(v21, 0);
          UnityEngine_AnimationState__set_time(v21, length, 0);
        }
      }
      else
      {
        if ( UnityEngine_AnimationState__get_time(v21, 0) > 0.0 )
          goto LABEL_41;
        UnityEngine_AnimationState__set_time(v21, 0.0, 0);
      }
    }
  }
  v28 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v28 )
  {
    v29 = *(_QWORD *)v28;
    v30 = v28;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_48;
      }
      v33 = v29 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_48:
      v33 = sub_1C87870(v28, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v33)(v30, *(_QWORD *)(v33 + 8));
  }
  v6 = (UnityEngine_Animator_o *)this->fields.mAnim;
  if ( !v6 )
    goto LABEL_75;
  UnityEngine_Animation__Sample((UnityEngine_Animation_o *)v6, 0);
  if ( (v11 & 1) == 0 )
  {
LABEL_53:
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
    if ( this->fields.mNotify )
    {
      this->fields.mNotify = 0;
      current = (UnityEngine_Object_o *)ActiveAnimation_TypeInfo->static_fields->current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(current, 0, 0) )
      {
        ActiveAnimation_TypeInfo->static_fields->current = this;
        sub_1C36FFC((CGThumbnailListItem_o *)ActiveAnimation_TypeInfo->static_fields, (int32_t)this, v35, v36);
        onFinished = this->fields.onFinished;
        if ( !EventDelegate_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventDelegate_TypeInfo);
        EventDelegate__Execute_49220500(onFinished, v37);
        eventReceiver = (UnityEngine_Object_o *)this->fields.eventReceiver;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(eventReceiver, 0, 0)
          && !System_String__IsNullOrEmpty(this->fields.callWhenFinished, 0) )
        {
          v6 = (UnityEngine_Animator_o *)this->fields.eventReceiver;
          if ( v6 )
          {
            UnityEngine_GameObject__SendMessage((UnityEngine_GameObject_o *)v6, this->fields.callWhenFinished, 1, 0);
            goto LABEL_65;
          }
LABEL_75:
          sub_1C372B4(v6);
        }
LABEL_65:
        ActiveAnimation_TypeInfo->static_fields->current = 0;
        sub_1C36FFC((CGThumbnailListItem_o *)ActiveAnimation_TypeInfo->static_fields, 0, v40, v41);
      }
      mDisableDirection = this->fields.mDisableDirection;
      if ( mDisableDirection && this->fields.mLastDirection == mDisableDirection )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !NGUITools_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NGUITools_TypeInfo);
        NGUITools__SetActive(gameObject, 0, 0);
      }
    }
  }
}


bool ActiveAnimation__get_isPlaying(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mAnim; // x19
  UnityEngine_Object_o *mAnimator; // x19
  const MethodInfo *v5; // x1
  int32_t mLastDirection; // w19
  float playbackTime; // s0
  bool v8; // w21
  UnityEngine_Animation_o *v9; // x0
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_IEnumerator_c *v15; // x8
  __int64 v16; // x9
  System_Collections_IEnumerator_c **v17; // x10
  __int64 v18; // x0
  UnityEngine_AnimationState_o *v19; // x0
  UnityEngine_AnimationState_o *v20; // x21
  UnityEngine_Animation_o *v21; // x22
  System_String_o *name; // x0
  int32_t v23; // w8
  float time; // s0
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4C47663 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_AnimationState_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C47663 = 1;
  }
  mAnim = (UnityEngine_Object_o *)this->fields.mAnim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mAnim, 0, 0) )
  {
    mAnimator = (UnityEngine_Object_o *)this->fields.mAnimator;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(mAnimator, 0, 0) )
    {
      mLastDirection = this->fields.mLastDirection;
      playbackTime = ActiveAnimation__get_playbackTime(this, v5);
      if ( mLastDirection == -1 )
      {
        if ( playbackTime != 0.0 )
          return 1;
      }
      else if ( playbackTime != 1.0 )
      {
        return 1;
      }
    }
    return 0;
  }
  v9 = this->fields.mAnim;
  if ( !v9 )
    goto LABEL_53;
  Enumerator = UnityEngine_Animation__GetEnumerator(v9, 0);
  if ( !Enumerator )
    sub_1C372B4(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_18:
      v14 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v14)(Enumerator, *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = (System_Collections_IEnumerator_c **)&v15->_1.interfaceOffsets->offset;
      while ( *(v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 2;
        if ( !v16 )
          goto LABEL_25;
      }
      v18 = (__int64)&v15->vtable[*(_DWORD *)v17 + 1];
    }
    else
    {
LABEL_25:
      v18 = sub_1C87870(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v19 = (UnityEngine_AnimationState_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v18)(
                                            Enumerator,
                                            *(_QWORD *)(v18 + 8));
    v20 = v19;
    if ( !v19 )
      sub_1C372B4(0);
    if ( v19->klass != UnityEngine_AnimationState_TypeInfo )
    {
      sub_1C37574(v19);
LABEL_53:
      sub_1C372B4(v9);
    }
    v21 = this->fields.mAnim;
    name = UnityEngine_AnimationState__get_name(v19, 0);
    if ( !v21 )
      sub_1C372B4(name);
    if ( UnityEngine_Animation__IsPlaying(v21, name, 0) )
    {
      v23 = this->fields.mLastDirection;
      if ( v23 == -1 )
      {
        if ( UnityEngine_AnimationState__get_time(v20, 0) > 0.0 )
          goto LABEL_36;
      }
      else if ( v23 != 1
             || (time = UnityEngine_AnimationState__get_time(v20, 0),
                 time < UnityEngine_AnimationState__get_length(v20, 0)) )
      {
LABEL_36:
        v8 = 1;
        goto LABEL_38;
      }
    }
  }
  v8 = 0;
LABEL_38:
  v25 = sub_1C37194(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_43;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_43:
      v30 = sub_1C87870(v25, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
  return v8;
}


float ActiveAnimation__get_playbackTime(ActiveAnimation_o *this, const MethodInfo *method)
{
  UnityEngine_Animator_o *mAnimator; // x0
  float normalizedTime; // s0
  bool v4; // nf
  float result; // s0
  UnityEngine_AnimatorStateInfo_o v6; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_AnimatorStateInfo_o v7; // [xsp+30h] [xbp-40h] BYREF

  memset(&v7, 0, sizeof(v7));
  mAnimator = this->fields.mAnimator;
  if ( !mAnimator )
    sub_1C372B4(0);
  UnityEngine_Animator__GetCurrentAnimatorStateInfo(&v6, mAnimator, 0, 0);
  v7 = v6;
  normalizedTime = UnityEngine_AnimatorStateInfo__get_normalizedTime(&v7, 0);
  v4 = normalizedTime < 0.0;
  result = fminf(normalizedTime, 1.0);
  if ( v4 )
    return 0.0;
  return result;
}