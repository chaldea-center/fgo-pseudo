void ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5935D36 & 1) == 0 )
  {
    sub_21FFC50(&UISprite___TypeInfo);
    byte_5935D36 = 1;
  }
  v3 = (struct UISprite_array *)sub_21FFD10(UISprite___TypeInfo, 5);
  this->fields.gaugeSpriteList = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.gaugeSpriteList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned int v10; // w25
  __int64 v11; // x8
  System_String_o *v12; // x21
  __int64 *v13; // x8
  float v14; // s8
  float v15; // s10
  System_String_o *v16; // x22
  unsigned int v17; // w26
  __int64 *v18; // x8
  float v19; // s9
  int v20; // w27
  UISprite_o *evaluationSprite; // x0
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Transform_o *v23; // x20
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v26; // x8
  System_String_o *v27; // x1
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5935D34 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21419/*"img_parameter_C"*/);
    sub_21FFC50(&StringLiteral_21434/*"img_parametergage_edge"*/);
    sub_21FFC50(&StringLiteral_21435/*"img_parametergage_edge_ex"*/);
    sub_21FFC50(&StringLiteral_21416/*"img_parameter_)"*/);
    sub_21FFC50(&StringLiteral_21426/*"img_parameter_minus"*/);
    sub_21FFC50(&StringLiteral_21418/*"img_parameter_B"*/);
    sub_21FFC50(&StringLiteral_21420/*"img_parameter_D"*/);
    sub_21FFC50(&StringLiteral_21433/*"img_parametergage_bar_ex"*/);
    sub_21FFC50(&StringLiteral_21428/*"img_parameter_plus"*/);
    sub_21FFC50(&StringLiteral_21417/*"img_parameter_A"*/);
    sub_21FFC50(&StringLiteral_21415/*"img_parameter_("*/);
    sub_21FFC50(&StringLiteral_21432/*"img_parametergage_bar"*/);
    sub_21FFC50(&StringLiteral_21429/*"img_parameter_question"*/);
    sub_21FFC50(&StringLiteral_21421/*"img_parameter_E"*/);
    sub_21FFC50(&StringLiteral_21422/*"img_parameter_EX"*/);
    byte_5935D34 = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v8 = StringLiteral_21432/*"img_parametergage_bar"*/;
  v9 = StringLiteral_21434/*"img_parametergage_edge"*/;
  v10 = 0;
  v11 = 0;
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
      v10 = 5;
      v11 = StringLiteral_21417/*"img_parameter_A"*/;
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 28:
    case 29:
    case 30:
      v10 = 4;
      v11 = StringLiteral_21418/*"img_parameter_B"*/;
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
      v10 = 3;
      v11 = StringLiteral_21419/*"img_parameter_C"*/;
      goto LABEL_7;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 50:
      v10 = 2;
      v11 = StringLiteral_21420/*"img_parameter_D"*/;
      goto LABEL_17;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v10 = 1;
      v11 = StringLiteral_21421/*"img_parameter_E"*/;
      goto LABEL_20;
    case 61:
      v10 = 5;
      v8 = StringLiteral_21433/*"img_parametergage_bar_ex"*/;
      v9 = StringLiteral_21435/*"img_parametergage_edge_ex"*/;
      v11 = StringLiteral_21422/*"img_parameter_EX"*/;
      goto LABEL_20;
    default:
      v10 = 0;
      v11 = StringLiteral_21429/*"img_parameter_question"*/;
      if ( rank != 98 )
        v11 = 0;
LABEL_7:
      if ( rank <= 38 )
      {
LABEL_8:
        if ( rank == 27 )
        {
          v12 = (System_String_o *)StringLiteral_21418/*"img_parameter_B"*/;
          goto LABEL_31;
        }
LABEL_10:
        if ( (unsigned int)(rank - 39) >= 0xFFFFFFFE )
          v12 = (System_String_o *)StringLiteral_21419/*"img_parameter_C"*/;
        else
          v12 = (System_String_o *)v11;
        if ( rank != 37 )
        {
          if ( rank != 38 )
            goto LABEL_39;
LABEL_33:
          v10 = 4;
LABEL_34:
          v13 = &StringLiteral_21418/*"img_parameter_B"*/;
          goto LABEL_42;
        }
LABEL_31:
        v10 = 5;
LABEL_32:
        v13 = &StringLiteral_21417/*"img_parameter_A"*/;
        goto LABEL_42;
      }
LABEL_17:
      if ( (unsigned int)(rank - 50) <= 0xFFFFFFFC )
      {
LABEL_20:
        if ( (unsigned int)(rank - 61) >= 0xFFFFFFFC )
          v12 = (System_String_o *)StringLiteral_21421/*"img_parameter_E"*/;
        else
          v12 = (System_String_o *)v11;
      }
      else
      {
        v12 = (System_String_o *)StringLiteral_21420/*"img_parameter_D"*/;
      }
      if ( rank > 56 )
      {
        if ( rank <= 58 )
        {
          if ( rank != 57 )
            goto LABEL_33;
          goto LABEL_31;
        }
        if ( rank != 59 )
        {
          if ( rank == 60 )
          {
            v10 = 2;
LABEL_41:
            v13 = &StringLiteral_21420/*"img_parameter_D"*/;
LABEL_42:
            v14 = 0.0;
            v15 = 16.0;
LABEL_43:
            v16 = (System_String_o *)*v13;
            v17 = 0;
            goto LABEL_44;
          }
          goto LABEL_39;
        }
LABEL_38:
        v10 = 3;
        goto LABEL_39;
      }
      switch ( rank )
      {
        case '/':
          goto LABEL_31;
        case '0':
          goto LABEL_33;
        case '1':
          goto LABEL_38;
      }
LABEL_39:
      v14 = 0.0;
      v15 = 16.0;
      v16 = 0;
      v17 = 0;
      switch ( rank )
      {
        case 12:
        case 22:
        case 32:
        case 42:
        case 52:
          v18 = &StringLiteral_21428/*"img_parameter_plus"*/;
          goto LABEL_125;
        case 13:
        case 23:
        case 33:
        case 43:
        case 53:
          v17 = 2;
          goto LABEL_123;
        case 14:
        case 24:
        case 34:
        case 44:
        case 54:
          v18 = &StringLiteral_21426/*"img_parameter_minus"*/;
          goto LABEL_125;
        case 15:
        case 25:
        case 35:
        case 45:
        case 55:
          v14 = -2.0;
          v15 = 10.0;
          v17 = 3;
LABEL_123:
          v16 = (System_String_o *)StringLiteral_21428/*"img_parameter_plus"*/;
          break;
        case 16:
        case 26:
        case 36:
        case 46:
        case 56:
          v14 = 5.0;
          v18 = &StringLiteral_21429/*"img_parameter_question"*/;
LABEL_125:
          v16 = (System_String_o *)*v18;
          v17 = 1;
          break;
        case 17:
        case 48:
        case 58:
          goto LABEL_34;
        case 18:
        case 28:
        case 49:
        case 59:
          v13 = &StringLiteral_21419/*"img_parameter_C"*/;
          goto LABEL_43;
        case 19:
        case 29:
        case 39:
        case 60:
          goto LABEL_41;
        case 20:
        case 30:
        case 40:
        case 50:
          v13 = &StringLiteral_21421/*"img_parameter_E"*/;
          goto LABEL_43;
        case 27:
        case 47:
        case 57:
          goto LABEL_32;
        default:
          break;
      }
LABEL_44:
      v19 = 1.0;
      if ( rank > 30 )
      {
        v20 = 0;
        if ( (unsigned int)rank > 0x3C || ((1LL << rank) & 0x1E0781E000000000LL) == 0 )
          goto LABEL_51;
LABEL_50:
        v14 = -6.0;
        v15 = 12.0;
        v19 = 0.7;
        v17 = 3;
        v20 = 1;
        goto LABEL_51;
      }
      v20 = 0;
      if ( (unsigned int)rank <= 0x1E && ((1 << rank) & 0x781E0000) != 0 )
        goto LABEL_50;
LABEL_51:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, v12, 0);
      if ( v12 )
      {
        evaluationSprite = this->fields.evaluationSprite;
        if ( !evaluationSprite )
          goto LABEL_132;
        ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
          evaluationSprite,
          evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      }
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !v17 )
      {
        if ( !evaluationSprite )
          goto LABEL_132;
        UISprite__set_spriteName(evaluationSprite, 0, 0);
LABEL_76:
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_132;
        UISprite__set_spriteName(evaluationSprite, 0, 0);
LABEL_78:
        evaluationSprite = this->fields.evaluationAdd3Sprite;
        if ( !evaluationSprite )
          goto LABEL_132;
        UISprite__set_spriteName(evaluationSprite, 0, 0);
        goto LABEL_80;
      }
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      v28.fields.y = 0.0;
      v28.fields.z = 0.0;
      v28.fields.x = v14;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v28, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, v16, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      if ( v17 == 1 )
        goto LABEL_76;
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      v29.fields.x = v15 + v14;
      v29.fields.y = 0.0;
      v29.fields.z = 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v29, 0);
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, v16, 0);
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      if ( v17 < 3 )
        goto LABEL_78;
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      v30.fields.y = 0.0;
      v30.fields.z = 0.0;
      v30.fields.x = v14 + (float)(v15 + v15);
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v30, 0);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, v16, 0);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
LABEL_80:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !v20 )
      {
        if ( evaluationSprite )
        {
          evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)evaluationSprite,
                                             0);
          if ( evaluationSprite )
          {
            evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                               (UnityEngine_GameObject_o *)evaluationSprite,
                                               0);
            v22 = (UnityEngine_Transform_o *)evaluationSprite;
            if ( !byte_5931945 )
            {
              evaluationSprite = (UISprite_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
              byte_5931945 = 1;
            }
            if ( v22 )
            {
              UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              evaluationSprite = this->fields.evaluationAdd2Sprite;
              if ( evaluationSprite )
              {
                evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)evaluationSprite,
                                                   0);
                if ( evaluationSprite )
                {
                  evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)evaluationSprite,
                                                     0);
                  v23 = (UnityEngine_Transform_o *)evaluationSprite;
                  if ( !byte_5931945 )
                  {
                    evaluationSprite = (UISprite_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                    byte_5931945 = 1;
                  }
                  if ( v23 )
                  {
                    UnityEngine_Transform__set_localScale(
                      v23,
                      UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                      0);
                    goto LABEL_103;
                  }
                }
              }
            }
          }
        }
LABEL_132:
        sub_21FFECC(evaluationSprite, v7);
      }
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      v31.fields.x = v19;
      v31.fields.y = 1.0;
      v31.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v31, 0);
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                         (UnityEngine_GameObject_o *)evaluationSprite,
                                         0);
      if ( !evaluationSprite )
        goto LABEL_132;
      v32.fields.x = v19;
      v32.fields.y = 1.0;
      v32.fields.z = 1.0;
      UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)evaluationSprite, v32, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_21415/*"img_parameter_("*/, 0);
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      ((void (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
        evaluationSprite,
        evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      UISprite__set_spriteName(evaluationSprite, (System_String_o *)StringLiteral_21416/*"img_parameter_)"*/, 0);
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_132;
      evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, const MethodInfo *))evaluationSprite->klass->vtable._33_MakePixelPerfect.methodPtr)(
                                         evaluationSprite,
                                         evaluationSprite->klass->vtable._33_MakePixelPerfect.method);
LABEL_103:
      for ( i = 0; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( i >= v10 )
        {
          if ( !gaugeSpriteList )
            goto LABEL_132;
          if ( i >= LODWORD(gaugeSpriteList->max_length) )
LABEL_133:
            sub_21FFED4(evaluationSprite);
          evaluationSprite = gaugeSpriteList->m_Items[i];
          if ( !evaluationSprite )
            goto LABEL_132;
          v27 = 0;
        }
        else
        {
          if ( !gaugeSpriteList )
            goto LABEL_132;
          if ( i >= LODWORD(gaugeSpriteList->max_length) )
            goto LABEL_133;
          evaluationSprite = gaugeSpriteList->m_Items[i];
          if ( !evaluationSprite )
            goto LABEL_132;
          if ( i >= 4 )
            v26 = (System_String_o *)v9;
          else
            v26 = (System_String_o *)v8;
          if ( i )
            v27 = v26;
          else
            v27 = (System_String_o *)v9;
        }
        UISprite__set_spriteName(evaluationSprite, v27, 0);
      }
      return;
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_5935D35 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_21425/*"img_parameter_magic"*/);
    sub_21FFC50(&StringLiteral_21427/*"img_parameter_np"*/);
    sub_21FFC50(&StringLiteral_21431/*"img_parameter_strength"*/);
    sub_21FFC50(&StringLiteral_21424/*"img_parameter_luck"*/);
    sub_21FFC50(&StringLiteral_21423/*"img_parameter_endurance"*/);
    sub_21FFC50(&StringLiteral_21430/*"img_parameter_speed"*/);
    byte_5935D35 = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&kind, method);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0, 0) )
  {
    if ( kind > 2 )
    {
      switch ( kind )
      {
        case 3:
          v7 = this->fields.parameterTitleSprite;
          if ( v7 )
          {
            v8 = &StringLiteral_21425/*"img_parameter_magic"*/;
            goto LABEL_26;
          }
          break;
        case 4:
          v7 = this->fields.parameterTitleSprite;
          if ( v7 )
          {
            v8 = &StringLiteral_21424/*"img_parameter_luck"*/;
            goto LABEL_26;
          }
          break;
        case 5:
          v7 = this->fields.parameterTitleSprite;
          if ( v7 )
          {
            v8 = &StringLiteral_21427/*"img_parameter_np"*/;
            goto LABEL_26;
          }
          break;
        default:
          return;
      }
    }
    else if ( kind )
    {
      if ( kind == 1 )
      {
        v7 = this->fields.parameterTitleSprite;
        if ( v7 )
        {
          v8 = &StringLiteral_21423/*"img_parameter_endurance"*/;
          goto LABEL_26;
        }
      }
      else
      {
        if ( kind != 2 )
          return;
        v7 = this->fields.parameterTitleSprite;
        if ( v7 )
        {
          v8 = &StringLiteral_21430/*"img_parameter_speed"*/;
LABEL_26:
          UISprite__set_spriteName(v7, (System_String_o *)*v8, 0);
          return;
        }
      }
    }
    else
    {
      v7 = this->fields.parameterTitleSprite;
      if ( v7 )
      {
        v8 = &StringLiteral_21431/*"img_parameter_strength"*/;
        goto LABEL_26;
      }
    }
    sub_21FFECC(v7, v6);
  }
}