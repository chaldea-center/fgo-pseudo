void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 *v10; // x8
  __int64 v11; // x0

  v6 = this;
  if ( (byte_434E163 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_B70694(&StringLiteral_19626/*"icon_count_01"*/);
    sub_B70694(&StringLiteral_19628/*"icon_count_bg"*/);
    this = (BattleNextTDgaugeComponent_o *)sub_B70694(&StringLiteral_19627/*"icon_count_02"*/);
    byte_434E163 = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_srcLineSprite = gaugeList->m_Items[index];
          if ( Component_srcLineSprite )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_srcLineSprite )
            {
              v10 = &StringLiteral_19627/*"icon_count_02"*/;
LABEL_17:
              UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)*v10, 0LL);
              return;
            }
          }
          goto LABEL_18;
        }
      }
      else if ( max_length > index )
      {
        Component_srcLineSprite = gaugeList->m_Items[index];
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_srcLineSprite )
          {
            if ( type == 1 )
              v10 = &StringLiteral_19626/*"icon_count_01"*/;
            else
              v10 = &StringLiteral_19628/*"icon_count_bg"*/;
            goto LABEL_17;
          }
        }
LABEL_18:
        sub_B7076C(Component_srcLineSprite, *(_QWORD *)&index);
      }
      v11 = sub_B70798(this);
      sub_B70738(v11, 0LL);
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL )
  {
    sub_B7076C(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
}


void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v7; // x19
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v9; // x8
  unsigned __int64 v10; // x26
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v13; // x8
  unsigned __int64 v14; // x27
  UnityEngine_Object_o *v15; // x25
  __int64 v16; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v18; // w26
  int32_t v19; // w22
  bool v20; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x23
  int v23; // w27
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_GameObject_o *v25; // x25
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_434E161 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_List_GameObject__TypeInfo);
    this = (BattleNextTDgaugeComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E161 = 1;
  }
  gaugeList = v7->fields.gaugeList;
  if ( gaugeList )
  {
    v9 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v9 >= 1 )
    {
      v10 = 0LL;
      while ( v10 < (unsigned int)v9 )
      {
        v11 = (UnityEngine_Object_o *)gaugeList->m_Items[v10];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v11, 0LL);
        LODWORD(v9) = gaugeList->max_length;
        if ( (__int64)++v10 >= (int)v9 )
          goto LABEL_11;
      }
LABEL_48:
      v27 = sub_B70798(this);
      sub_B70738(v27, 0LL);
    }
  }
LABEL_11:
  gaugebackList = v7->fields.gaugebackList;
  if ( gaugebackList )
  {
    v13 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( v14 < (unsigned int)v13 )
      {
        v15 = (UnityEngine_Object_o *)gaugebackList->m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36067208(v15, 0LL);
        LODWORD(v13) = gaugebackList->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          goto LABEL_19;
      }
      goto LABEL_48;
    }
  }
LABEL_19:
  v7->fields.gaugeList = 0LL;
  sub_B70630(&v7->fields.gaugeList);
  v7->fields.gaugebackList = 0LL;
  sub_B70630(&v7->fields.gaugebackList);
  gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v18 = 0;
  else
    v18 = max;
  if ( isTDSeraled )
    v19 = 0;
  else
    v19 = now;
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  if ( v18 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v20 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v20 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v20, 0LL);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v18 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugeIcon,
                                                    v7->fields.gaugeFrontRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v24 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v24, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v29.fields.y = 0.0;
      v29.fields.z = 0.0;
      v29.fields.x = v7->fields.width * (float)v23;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v29, 0LL);
      if ( !v21 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v21,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v24,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugebackIcon,
                                                    v7->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v25 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v25, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v30.fields.y = 0.0;
      v30.fields.z = 0.0;
      v30.fields.x = v7->fields.width * (float)v23;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v30, 0LL);
      if ( !v22 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v22,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v23 >= v18 )
        goto LABEL_45;
    }
  }
  if ( !v21 )
    goto LABEL_47;
LABEL_45:
  v7->fields.gaugeList = (struct UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v21,
                                                                  (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  gaugeFrontRoot = (UnityEngine_Component_o *)sub_B70630(&v7->fields.gaugeList);
  if ( !v22 )
LABEL_47:
    sub_B7076C(gaugeFrontRoot, v16);
  v7->fields.gaugebackList = (struct UnityEngine_GameObject_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  sub_B70630(&v7->fields.gaugebackList);
  BattleNextTDgaugeComponent__setValue(v7, v19, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v7; // x8
  int v8; // w21
  int v9; // w22
  int32_t v10; // w2
  BattleNextTDgaugeComponent_o *v11; // x0
  int32_t v12; // w1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v14; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  int v16; // w8
  bool v17; // w1
  UnityEngine_Behaviour_o *v18; // x0

  if ( (byte_434E162 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Component_GetComponent_TweenAlpha___);
    sub_B70694(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434E162 = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v7 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v7 )
    {
      if ( (int)v7 >= 1 )
      {
        v8 = 0;
        v9 = (_DWORD)v7 - nextVal;
        do
        {
          if ( v9 == (_DWORD)v7 )
          {
            v10 = 2;
          }
          else
          {
            if ( v9 <= v8 )
            {
              v11 = this;
              v12 = v8;
              v10 = 0;
              goto LABEL_13;
            }
            v10 = 1;
          }
          v11 = this;
          v12 = v8;
LABEL_13:
          BattleNextTDgaugeComponent__changeGauge(v11, v12, v10, v3);
          v7 = this->fields.gaugeList;
          if ( !v7 )
            goto LABEL_37;
          LODWORD(v7) = v7->max_length;
          ++v8;
        }
        while ( v8 < (int)v7 );
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_37;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_37;
      v14 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                                  (const MethodInfo_1BE3FF4 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v14, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_WebViewObject,
                                                      0LL,
                                                      0LL);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( Component_WebViewObject )
            {
              v16 = 1060320051;
              goto LABEL_32;
            }
          }
          else if ( nextVal )
          {
            if ( v14 )
            {
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v14->klass[1]._1.castClass)(
                                                            v14,
                                                            v14->klass[1]._1.declaringType,
                                                            1.0);
              if ( Component_WebViewObject )
              {
                v18 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
                v17 = 0;
                goto LABEL_36;
              }
            }
          }
          else if ( Component_WebViewObject )
          {
            v16 = 1050253722;
LABEL_32:
            v17 = 1;
            LODWORD(Component_WebViewObject->fields.onStarted) = v16;
            v18 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
LABEL_36:
            UnityEngine_Behaviour__set_enabled(v18, v17, 0LL);
            return;
          }
LABEL_37:
          sub_B7076C(gaugeFrontRoot, *(_QWORD *)&nextVal);
        }
      }
    }
  }
}