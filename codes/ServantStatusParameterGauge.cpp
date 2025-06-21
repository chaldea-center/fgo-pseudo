void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B19F6C & 1) == 0 )
  {
    sub_1BCAFF8(&UISprite___TypeInfo, method);
    byte_4B19F6C = 1;
  }
  v3 = (struct UISprite_array *)sub_1BCB0A0(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x23
  __int64 v23; // x24
  int v24; // w8
  __int64 v25; // x10
  System_String_o *v26; // x22
  int v27; // w9
  unsigned int v28; // w25
  int v29; // w10
  System_String_o *v30; // x21
  int v31; // w26
  float v32; // s8
  float v33; // s10
  __int64 *v34; // x8
  __int64 *v35; // x8
  __int64 *v36; // x8
  int v37; // w27
  float v38; // s9
  UISprite_o *evaluationSprite; // x0
  struct UISprite_o **p_evaluationAdd2Sprite; // x22
  UnityEngine_Transform_o *v41; // x20
  __int64 v42; // x2
  UnityEngine_Transform_o *v43; // x20
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v46; // x8
  System_String_o *v47; // x1
  UnityEngine_Vector3_o v48; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19F6A & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_20286/*"img_parameter_C"*/, *(_QWORD *)&kind);
    sub_1BCAFF8(&StringLiteral_20301/*"img_parametergage_edge"*/, v7);
    sub_1BCAFF8(&StringLiteral_20302/*"img_parametergage_edge_ex"*/, v8);
    sub_1BCAFF8(&StringLiteral_20283/*"img_parameter_)"*/, v9);
    sub_1BCAFF8(&StringLiteral_20293/*"img_parameter_minus"*/, v10);
    sub_1BCAFF8(&StringLiteral_20285/*"img_parameter_B"*/, v11);
    sub_1BCAFF8(&StringLiteral_20287/*"img_parameter_D"*/, v12);
    sub_1BCAFF8(&StringLiteral_20300/*"img_parametergage_bar_ex"*/, v13);
    sub_1BCAFF8(&StringLiteral_20295/*"img_parameter_plus"*/, v14);
    sub_1BCAFF8(&StringLiteral_20284/*"img_parameter_A"*/, v15);
    sub_1BCAFF8(&StringLiteral_20282/*"img_parameter_("*/, v16);
    sub_1BCAFF8(&StringLiteral_20299/*"img_parametergage_bar"*/, v17);
    sub_1BCAFF8(&StringLiteral_20296/*"img_parameter_question"*/, v18);
    sub_1BCAFF8(&StringLiteral_20288/*"img_parameter_E"*/, v19);
    sub_1BCAFF8(&StringLiteral_20289/*"img_parameter_EX"*/, v20);
    byte_4B19F6A = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v22 = StringLiteral_20299/*"img_parametergage_bar"*/;
  v23 = StringLiteral_20301/*"img_parametergage_edge"*/;
  v24 = 0;
  v25 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
      v26 = (System_String_o *)StringLiteral_20284/*"img_parameter_A"*/;
      v24 = 5;
      goto LABEL_15;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
    case 29:
    case 30:
      v25 = StringLiteral_20285/*"img_parameter_B"*/;
      v24 = 4;
      goto LABEL_8;
    case 27:
    case 37:
    case 38:
    case 47:
    case 48:
    case 49:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_7;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 39:
    case 40:
      v25 = StringLiteral_20286/*"img_parameter_C"*/;
      v24 = 3;
      goto LABEL_7;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 50:
      v27 = 2;
      v25 = StringLiteral_20287/*"img_parameter_D"*/;
      goto LABEL_19;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v27 = 1;
      v25 = StringLiteral_20288/*"img_parameter_E"*/;
      goto LABEL_22;
    case 61:
      v22 = StringLiteral_20300/*"img_parametergage_bar_ex"*/;
      v23 = StringLiteral_20302/*"img_parametergage_edge_ex"*/;
      v25 = StringLiteral_20289/*"img_parameter_EX"*/;
      v27 = 5;
      goto LABEL_22;
    default:
      v24 = 0;
      if ( rank == 98 )
        v25 = StringLiteral_20296/*"img_parameter_question"*/;
      else
        v25 = 0LL;
LABEL_7:
      v27 = v24;
      if ( rank > 38 )
      {
LABEL_19:
        if ( (unsigned int)(rank - 47) >= 3 )
        {
LABEL_22:
          if ( (unsigned int)(rank - 57) <= 3 )
            v26 = (System_String_o *)StringLiteral_20288/*"img_parameter_E"*/;
          else
            v26 = (System_String_o *)v25;
        }
        else
        {
          v26 = (System_String_o *)StringLiteral_20287/*"img_parameter_D"*/;
        }
        v29 = 2;
        v24 = 3;
        v28 = 4;
        switch ( rank )
        {
          case '/':
          case '9':
            goto LABEL_26;
          case '0':
          case ':':
            goto LABEL_29;
          case '1':
          case ';':
            goto LABEL_27;
          case '<':
LABEL_30:
            v31 = 0;
            v32 = 0.0;
            v33 = 16.0;
            v30 = (System_String_o *)StringLiteral_20287/*"img_parameter_D"*/;
            v28 = v29;
            break;
          default:
            v24 = v27;
            goto LABEL_27;
        }
      }
      else
      {
LABEL_8:
        if ( rank == 27 )
        {
          v26 = (System_String_o *)StringLiteral_20285/*"img_parameter_B"*/;
          goto LABEL_26;
        }
        if ( (unsigned int)(rank - 37) <= 1 )
          v26 = (System_String_o *)StringLiteral_20286/*"img_parameter_C"*/;
        else
          v26 = (System_String_o *)v25;
        if ( rank <= 37 )
        {
LABEL_15:
          if ( rank != 27 && rank != 37 )
          {
LABEL_27:
            v28 = v24;
            v30 = 0LL;
            v31 = 0;
            v32 = 0.0;
            v33 = 16.0;
            v29 = v24;
            switch ( rank )
            {
              case 12:
              case 22:
              case 32:
              case 42:
              case 52:
                v34 = &StringLiteral_20295/*"img_parameter_plus"*/;
                goto LABEL_33;
              case 13:
              case 23:
              case 33:
              case 43:
              case 53:
                v35 = &StringLiteral_20295/*"img_parameter_plus"*/;
                v31 = 2;
                goto LABEL_36;
              case 14:
              case 24:
              case 34:
              case 44:
              case 54:
                v34 = &StringLiteral_20293/*"img_parameter_minus"*/;
LABEL_33:
                v30 = (System_String_o *)*v34;
                v31 = 1;
                goto LABEL_41;
              case 15:
              case 25:
              case 35:
              case 45:
              case 55:
                v35 = &StringLiteral_20295/*"img_parameter_plus"*/;
                v31 = 3;
                v32 = -2.0;
                v33 = 10.0;
                goto LABEL_36;
              case 16:
              case 26:
              case 36:
              case 46:
              case 56:
                v35 = &StringLiteral_20296/*"img_parameter_question"*/;
                v31 = 1;
                v32 = 5.0;
                goto LABEL_36;
              case 17:
              case 38:
              case 48:
              case 58:
                goto LABEL_29;
              case 18:
              case 28:
              case 49:
              case 59:
                v36 = &StringLiteral_20286/*"img_parameter_C"*/;
                goto LABEL_40;
              case 19:
              case 29:
              case 39:
              case 60:
                goto LABEL_30;
              case 20:
              case 30:
              case 40:
              case 50:
                v36 = &StringLiteral_20288/*"img_parameter_E"*/;
                goto LABEL_40;
              case 27:
              case 37:
              case 47:
              case 57:
                v36 = &StringLiteral_20284/*"img_parameter_A"*/;
LABEL_40:
                v30 = (System_String_o *)*v36;
                v31 = 0;
                break;
              default:
                goto LABEL_41;
            }
            goto LABEL_41;
          }
LABEL_26:
          v24 = 5;
          goto LABEL_27;
        }
        v28 = 4;
LABEL_29:
        v35 = &StringLiteral_20285/*"img_parameter_B"*/;
        v31 = 0;
        v32 = 0.0;
        v33 = 16.0;
LABEL_36:
        v30 = (System_String_o *)*v35;
      }
LABEL_41:
      if ( rank > 30 )
      {
        v37 = 0;
        v38 = 1.0;
        if ( (unsigned int)rank > 0x3C || ((1LL << rank) & 0x1E0781E000000000LL) == 0 )
          goto LABEL_48;
LABEL_47:
        v38 = 0.7;
        v31 = 3;
        v32 = -6.0;
        v33 = 12.0;
        v37 = 1;
        goto LABEL_48;
      }
      v37 = 0;
      v38 = 1.0;
      if ( (unsigned int)rank <= 0x1E && ((1 << rank) & 0x781E0000) != 0 )
        goto LABEL_47;
LABEL_48:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      UISprite__set_spriteName(evaluationSprite, v26, 0LL);
      if ( v26 )
      {
        evaluationSprite = this->fields.evaluationSprite;
        if ( !evaluationSprite )
          goto LABEL_116;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
LABEL_116:
        sub_1BCB254(evaluationSprite, v21);
      if ( v31 < 1 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
        p_evaluationAdd2Sprite = &this->fields.evaluationAdd2Sprite;
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_116;
LABEL_66:
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
        goto LABEL_67;
      }
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      v48.fields.y = 0.0;
      v48.fields.z = 0.0;
      v48.fields.x = v32;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v48, 0LL);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      UISprite__set_spriteName(evaluationSprite, v30, 0LL);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      p_evaluationAdd2Sprite = &this->fields.evaluationAdd2Sprite;
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      if ( v31 < 2 )
        goto LABEL_66;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      v49.fields.x = v33 + v32;
      v49.fields.y = 0.0;
      v49.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v49, 0LL);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_116;
      UISprite__set_spriteName(evaluationSprite, v30, 0LL);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_116;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_67:
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      if ( v31 >= 3 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_116;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_116;
        v50.fields.x = v32 + (float)(v33 + v33);
        v50.fields.y = 0.0;
        v50.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v50, 0LL);
        evaluationSprite = this->fields.evaluationAdd3Sprite;
        if ( !evaluationSprite )
          goto LABEL_116;
        UISprite__set_spriteName(evaluationSprite, v30, 0LL);
        evaluationSprite = this->fields.evaluationAdd3Sprite;
        if ( !evaluationSprite )
          goto LABEL_116;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      else
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      v41 = (UnityEngine_Transform_o *)evaluationSprite;
      if ( !v37 )
      {
        if ( !byte_4B16196 )
        {
          evaluationSprite = (UISprite_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v21);
          byte_4B16196 = 1;
        }
        if ( v41 )
        {
          UnityEngine_Transform__set_localScale(v41, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          evaluationSprite = *p_evaluationAdd2Sprite;
          if ( *p_evaluationAdd2Sprite )
          {
            evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)evaluationSprite,
                                               0LL);
            if ( evaluationSprite )
            {
              evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)evaluationSprite,
                                                 0LL);
              v43 = (UnityEngine_Transform_o *)evaluationSprite;
              if ( !byte_4B16196 )
              {
                evaluationSprite = (UISprite_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v21);
                byte_4B16196 = 1;
              }
              if ( v43 )
              {
                UnityEngine_Transform__set_localScale(v43, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                goto LABEL_96;
              }
            }
          }
        }
        goto LABEL_116;
      }
      if ( !evaluationSprite )
        goto LABEL_116;
      v51.fields.y = 1.0;
      v51.fields.z = 1.0;
      v51.fields.x = v38;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v51, 0LL);
      evaluationSprite = *p_evaluationAdd2Sprite;
      if ( !*p_evaluationAdd2Sprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0LL);
      if ( !evaluationSprite )
        goto LABEL_116;
      v52.fields.y = 1.0;
      v52.fields.z = 1.0;
      v52.fields.x = v38;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v52, 0LL);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_20282/*"img_parameter_("*/, 0LL);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_20283/*"img_parameter_)"*/, 0LL);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_116;
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_96:
      for ( i = 0LL; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_116;
        if ( i >= gaugeSpriteList->max_length )
          sub_1BCB25C(evaluationSprite, v21, v42);
        evaluationSprite = gaugeSpriteList->m_Items[i];
        if ( i >= v28 )
        {
          if ( !evaluationSprite )
            goto LABEL_116;
          v47 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_116;
          if ( i >= 4 )
            v46 = (System_String_o *)v23;
          else
            v46 = (System_String_o *)v22;
          if ( i )
            v47 = v46;
          else
            v47 = (System_String_o *)v23;
        }
        UISprite__set_spriteName(evaluationSprite, v47, 0LL);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v12; // x1
  UISprite_o *v13; // x0
  __int64 *v14; // x8

  if ( (byte_4B19F6B & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&kind);
    sub_1BCAFF8(&StringLiteral_20292/*"img_parameter_magic"*/, v5);
    sub_1BCAFF8(&StringLiteral_20294/*"img_parameter_np"*/, v6);
    sub_1BCAFF8(&StringLiteral_20298/*"img_parameter_strength"*/, v7);
    sub_1BCAFF8(&StringLiteral_20291/*"img_parameter_luck"*/, v8);
    sub_1BCAFF8(&StringLiteral_20290/*"img_parameter_endurance"*/, v9);
    sub_1BCAFF8(&StringLiteral_20297/*"img_parameter_speed"*/, v10);
    byte_4B19F6B = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20298/*"img_parameter_strength"*/;
        goto LABEL_19;
      case 1:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20290/*"img_parameter_endurance"*/;
        goto LABEL_19;
      case 2:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20297/*"img_parameter_speed"*/;
        goto LABEL_19;
      case 3:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20292/*"img_parameter_magic"*/;
        goto LABEL_19;
      case 4:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
          goto LABEL_20;
        v14 = &StringLiteral_20291/*"img_parameter_luck"*/;
        goto LABEL_19;
      case 5:
        v13 = this->fields.parameterTitleSprite;
        if ( !v13 )
LABEL_20:
          sub_1BCB254(v13, v12);
        v14 = &StringLiteral_20294/*"img_parameter_np"*/;
LABEL_19:
        UISprite__set_spriteName(v13, (System_String_o *)*v14, 0LL);
        break;
      default:
        return;
    }
  }
}